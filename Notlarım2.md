- İki adet yapının tanımlansın ve programcı bu yapıların eşitliğini test etmek istiyor olsun.
Burada yapı nesnelerinin == operatörünün operantı olamadığı göz önünde bulundurulmalıdır.
- Bu eşitliği kontrol etmek içi memcmp fonksiyonunu yazarsanız sonuç eşit değil çıkar.
    
                typedef struct {
                        char c1;
                        int i;
                        char c2;
                }Data;
                
                int main()
                {
                        Data x = { 1, 872, 2 };
                        Data y = { 1, 872, 2 };
                        
                        if (!memcmp(&x, &y, sizeof(Data)))
                                printf("esit\n");
                        else
                                printf("esit degil!!\n");
                }

- memcmp fonksiyonu kullanıldığında sonucun eşit çıkmamasının sebebi padding byte'ların çöp değerde 
olması.    

- Siz eğer memcmp fonksiyonu ile kıyaslama yapmak istiyorsanız eğer yapıları bildirdikten sonra memset
fonksiyonu ile tüm byte'ları sıfırlayarak sonrasında tanımını yapmanı gerekiyor.


                typedef struct {
                        char c1;
                        int i;
                        char c2;
                }Data;
                
                int main()
                {
                        Data x;
                        Data y;
                        
                        memset(&x, 0, sizeof(x));
                        memset(&y, 0, sizeof(y));
                        
                       x.c1 = 1;
                       x.i = 872;
                       x.c2 = 1;
                       y.c1 = 1;
                       y.i = 872;
                       y.c2 = 1;
                        
                        if (!memcmp(&x, &y, sizeof(Data)))
                                printf("esit\n");
                        else
                                printf("esit degil!!\n");
                }


# Ders 52 - 16.06.2021



- Union (Birlikler)

        typedef union Data {
                int x, y;
                double d;
                char s[12];
        }Data;


- Yapı nesnesi (alignement durumları sayılmazsa) elemanlarının sizeof değerlerinin toplamı kadar 
bir storage ihtiyacına sahipken, Birlik nesnesi en büyük elemanının sizeof'u kaç byte ise 
o kadar yer kaplıyor. 

                #pragma pack(1)
                
                typedef struct {
                        int i, j; //8
                        double d1, d2;//16
                }snec;

                typedef union {
                        int i, j; // 4
                        double d1, d2;// 8
                }unec;

                int main()
                {
                        printf("sizeof(snec) = %zu\n", sizeof(snec)); // 24
                        printf("sizeof(unec) = %zu\n", sizeof(unec)); //8
                }
                
- Birliklerin tüm elemanlarının adresleri aynıdır. Bir birlik nesnesinin adresi ile elemanlarının 
adresleri aynı. Birlik elemanları aynı bellek alanını paylaşıyorlar.

```
typedef union {
    char c;
    int x;
    double d;
    char str[12];
}unec;

int main()
{
    printf("sizeof(unec) = %zu\n", sizeof(unec));
    unec nec;

    printf("&nec     = %p\n", &nec);
    printf("&nec.c   = %p\n", &nec.c);
    printf("&nec.x   = %p\n", &nec.x);
    printf("&nec.d   = %p\n", &nec.d);
    printf("&nec.str = %p\n", &nec.str);//array decay
}

```

- Yukarıdaki kod çalıştırıldığında tüm adreslerin aynı değerde olduğu görülür.


- Bir hatırlatma: ! mğlakatta karşına çıkabilir.

                       
                int a[10]= { 0 };
                
                //&a[0] ---türü---> (int*)
                //&a    ---türü---> int (*)[10]

- Birlik nesnelerinin elemanlarına ilk değer verilirken dikkat edilmesei gereken husus aynı adrese 
yazıldığı için bir nesneye ilk değer verildiğinde diğer nesnelere de ilk değer verilmiş oluyor. 
Bu durumda yapılardaki gibi bir ilk değer verme söz konusu değil tek bir elemana ilk değer verilebilir.

                
                        typedef union {
                            char c;
                            int x;
                            double d;
                            char str[12];
                        }unec;
                        
                        int main()
                        {
                                unec nec = { 'A' }; // gibi
                                //designated initializer kullanılabilir.
                                //unec nec = { .str = "mustaf" };
                        }


- Bir veriyi iki farklı şekilde temsil etmek(birden fazla farklı şekilde)


- Bir örnekle inceleyelim:
        - Öyle bir tam sayı türü olsun ki, bu tam sayı türünden bir değişken 4 byte yer kaplasın.
        unsigned türden olsun. Fakat ben bu türü kullandığım sistemde 4 byte'ı tek bir tam sayı 
        olarak kullanabileceğim gibi düşük anlamlı ve yüksek anlamlı 2 byte'ı da ayrı ayrı kullanabileyim
        yani hem 4 byte'ı bir bütün olarak kullanabiliyorum, hem de iki ayrı short 16 bitlik 
        değişken olarak kullanabiliyorum. 
        
        
                #define _CRT_SECURE_NO_WARNINGS
                
                #pragme pack(1)
                #include <stdio.h>
                #include <stdint.h>
                
                
                typedef struct {
                    uint16_t low_bytes;
                    uint16_t high_bytes;
                }Myint;

                typedef union {
                    uint32_t uval;
                    Myint m;
                }Utype;

                int main()
                {
                    printf("sizeof(Utype) = %zu\n", sizeof(Utype)); // 4 byte olur.
                }
                
- Yukarıda sizeof değeri görüldüğü üzere birliğin 4 olmaktadır. Yani siz birlikteki uval'ı 4 byte bir
nesne olarak kullabilirsiniz ya da Myint nesnesinden 2 byte nesneler olarak kullanabilirsiniz.

- Farklı yazımı:

                
                typedef union {
                    struct {
                        uint16_t low_bytes;
                        uint16_t high_bytes;
                    }s;
                    uint32_t uval;
                }Utype;
                
- C11 standartlarıyla nested structta ismini kullanmadan da yazabiliriz:


                typedef union {
                    struct {
                        uint16_t low_bytes;
                        uint16_t high_bytes;
                    };
                    uint32_t uval;
                }Utype;


                
- Bir örnekle pekiştirelim:
        - Bir yapı olsun ve bu yapının içerisinde çalışanların bilgileri tutulsun. 
                - id, name, wage, askerlik bilgiler, kızlık soyadı gibi bilgiler.
        - Yukarıda tutulan bilgilerden görüleceği üzere bu yapıda hem askerlik bilgisi hem kızlık
        soyadı bilgisi olamaz bunun için yapının içinde birlik kullanılarak bellekten tasarruf edilebilir.

- Union kullanmadan sizeof değeri 104 byte oluyor.

                typedef struct {
                    uint32_t id;
                    char name[32];
                    double wage;
                    int mil_st;
                    char place[20];
                    int deg;
                    char maiden_name[32];
                }Data;


                int main()
                {
                    printf("sizeof(Utype) = %zu\n", sizeof(Data )); // 104 byte
                }
- Union kullanıldığında ise 76 byte oluyor.
        

                typedef struct {
                    uint32_t id;
                    char name[32];
                    double wage;
                    union {
                        struct {
                            int mil_st;
                            char place[20];
                            int deg;
                        };
                        char maiden_name[32];
                    };
                }Data;


                int main()
                {
                    printf("sizeof(Utype) = %zu\n", sizeof(Data )); // 76 byte
                }
                
- Yukarıdaki örnekte görüldüğü gibi küçük bir örnekte bile büyük bir oranda bellek kazancı sağladık.




- Union için farklı bir kullanım alanına bakalım:
        - Öyle bir değişken ki (önceden belirlenmiş) farklı türlerden değerler tutabilecek.
                - Mesela bizim örneğimizde bir değişken oluşturalım. int, double, yazı ve tarih 
                tutabilsin.
                




                #define INT    0
                #define DOUBLE 1
                #define NAME   2
                #define DATE   3

                typedef struct {
                    int type;
                    union {
                        int ival;
                        double dval;
                        char name[32];
                        Date date;
                    };
                }Data;


                void set_data_random(Data* p)
                {
                    switch (rand() % 4) {
                    case INT: p->type = INT; p->ival = rand(); break;
                    case DOUBLE: p->type = DOUBLE; p->dval = (double)rand() / RAND_MAX; break;
                    case NAME: p->type = NAME; strcpy(p->name, random_name()); break;
                    case DATE: p->type = DATE; set_date_random(&p->date); break;
                    }
                }

                void display_data(const Data* p)
                {
                    switch (p->type) {
                    case INT: printf("(%d)\n", p->ival); break;
                    case DOUBLE:printf("(%f)\n", p->dval); break;
                    case NAME: printf("(%s)\n", p->name); break;
                    case DATE: print_date(&p->date); break;
                    }
                }

                int main()
                {
                    randomize();

                    Data mydata;

                    while (1) {
                        set_data_random(&mydata);
                        display_data(&mydata);
                        getchar();
                    }
                }


- Yukarıdaki örnekte rastgele int, double tarih ve yazı değerleri birlikler kullanılarak atanıp 
yazma işlemi yapıldı.





- Enumarations (Numaralandırmalar)

- Problem domenindeki bazı öğeler, önceden belirlenmiş bir değer kümesindeki değerlerden birini
almak zorunda. Gerçekten de problem ve çözüm domenindeki varlıkların önemli bir kısmı bu şekilde. 
        - Mesela haftanın gününü tutacak bir değişken
        - Bir yazı fontlarını tutan bir değişken
        - Bir iskambil kağıdı oyununda kağıdın rengini tutan değişken (suit)
        - Bir iskambil kağıdının numarası(face)
        - Sistemin durumunu temsil eden değer (açık on, kapalı off, stand_by, hold)
        
- Numaralandırma türü olarak enum kullanılır. enum bir anahtar sözcük.

                enum Color {
                        White, Yellow, Red, Blue, Green, Black // enumaration constant - enumarator
                };


- Yukarıda sentaksı gönderilen enum yapısında elemanlar 0 dan başlayarak sıralı bir şekilde 
numaralandırılır ve ayrıca derleyici tarafından int türüymüş gibi davranılır.
yani sizeof değeri int türünün sizeof değerine eşittir.


                typedef enum {
                        //something
                }Color;

- Eğer siz numaralandırmayı belli bir sıra dışında istediğiniz değerleri vererek yapmak istiyorsanız:

        
                enum Color {
                        White = 25, Yellow, Red, Blue, Green, Black // enumaration constant - enumarator
                };
                
- Eğer belli elemanlara değer verip diğerlerine vermezseniz kurala göre kendisinden bir önceki elemanın
değerinin bir fazlası default olarak verilir.

- Ayrıca bu elemanlara unique değerler verilmesi de gerekmiyor yani aynı değerler verilebilir.

- C'de varlık sebepleri arasında okumayı ve yazmayı kolaylaştırmak ve tür güvenliği (type safety) 
sağlamak.

  
- C'nin en zayıf noktlarından birisi bu konuda mevcut.

                typedef enum {Club, Diamond, Heart, Spade} Suit;
                
                int main() 
                {
                        Suit s;
                        s = 76;
                }
- Yukarıdaki kod sentaks hatası değildir ancak anlamlı da değildir. s'nin değerinin 76 olması 
enum yapısının elemanlarından birine karşılık gelmiyor. Ancak derleyiciler uyarı mesajı bile 
vermiyorlar çünkü onlar int türündeyse bir problem algılamıyorlar. 
Örnek olarak program akışında tanımlanmış bir int değişkeni enum yapısına yanlışlıkla da atadığınızda
herhangi bir hata almayacaksınız.
Bu yüzden enum'lar C'de kullanılırken dikkatli olunmalıdır. 


- Şimdi bir örnek verelim:

                typedef enum {Club, Diamond, Heart, Spade} Suit;
                typedef enum {On, Off, Hold, Standby} pos;
                
                int main() 
                {
                        Suit s;
                        pos p;
                        
                        //
                        s = Standby; // bir hata almazsınız ama istediğiniz şeyi karıştırarak
                                        //farklı bir sonuç elde ettiniz.
                }



- Eğer siz enum elemanlarını ekrana yazdırmak isterseniz bir pointer dizisi oluşturarak bunu 
yapabilirsiniz.

                
                const char* const psuit[] = {"Club", "Diamond", "Heart", "Spade" };
                
                Suit s = Heart;
                
                printf("%s\n", psuit[s]);


- Bir zayıf tarafı da siz enum bir tür kullandığınızda o türün değeri çok küçük de olsa int dışında 
bir türün karşılığı olarak _t türünde kullanamıyor oluşunuz.


-  Bir başka zayıf nokta ise isim çakışması. Bir çok başlık dosyası include edildiğinde başlık 
dosyaları ile eklenen enumlar arasında bir çakışma söz konusu olabiliyor. 

        //screen.h
        //traffic.h
        
        enum ScreenColor {
                White, Gray, Red, Black, Blue
        };
        
        enum TrafficLight {
                Yellow, Green, Red
        };


- Yukarıdaki kodda isim çakışması olduğu için sentaks hatası olur. 
- Genelde bu çakışmayı azaltmak için önekler kullanılır. 
                
                enum ScreenColor {
                        ScreenColorWhite, ScreenColorGray, ScreenColorRed, ScreenColorBlack, ScreenColorBlue
                }; // Gibi

- Numaralandırma türüne dair idiomlar:
        - Numaralandırmada bazı programcılar son elemanı number olarak adlandırır ve bu sayı toplam
        eleman sayısını belirtir.
        
                        enum Color { White, Gray, Yellow, Green, Red, Brown, Black, NoOfColor };
- Bu arada enum değerleri sabir ifadeleridir. 

**Mesela switch deyiminin case ifadeleri constant expression
olmak zorundadır.**              

- Yani dizi boyutuda yapılabilir. Dizi boyutları da constrant expression olmak zorundadır.


- enum türü bir blok içerisinde kullanılabilir ve ömrü o blok içerisinde sınırlı olur.
        - Bu makrolar herhangi bir bloğun içerisinde tanımlansa bile programın sonuna kadar 
        geçerliliğini koruyordu, siz bir blok içerisinde ömür açısında bir makroya alternatif 
        olarak enum kullanabilirsiniz.
        
                        void foo(void)
                        {
                                enum { SIZE =  100 };
                        } // sadece bu blokta geçerli.
                        


- işlenmeyen konular:

        - bitsel işlemler 
        - komut satırı argümanları
        - dosya işlemleri 
        - assertions 
        - variadic functions
        - c99
                - compound literals 
                - vla
                - flexible array








































































