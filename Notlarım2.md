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


# Ders 53 - 18.06.2021


- Bitsel İşlemler (Bitwise Manipulations / Operations)

    - Bitwise operators
        - ~ (bitwise not)
        - >>, << (bitwise left/right shift) bitsel kaydırma 
        - & (bitwise and) 
        - ^  (bitwise exor)
        - | (bitwise or)
        - |=, >>=, <<=, &= 

- Yukarıdaki operatörlerin hepsi bitsel işlem yapıyor.
- Bu operatörlerin operantları int type türünden olmak zorunda. 


- ~ (bitwise not) 
    - unary prefix bir operatör.
    - Operant tam sayı türünden olmalı. integer promotion burada da geçerli.
    - Operatörün ürettiği değer, operantın bitlerinin tersinin alınmasıyla elde edilen değerdir.
    - Bu operatörün bir yan etkisi yoktur. (no side effect)
    
            int x;
            printf("bir tam sayi girin: ");
            scanf("%d", &x);

            bprint(x);
            bprint(~x);
        
- <<, >> bitwise left/right shift (bitsel sola sağa kaydırma operatörü)


        a << 2
- Yukarıdaki kod için a nın değeri 2 bit sola kaydırılacak. Yani a'nın solundaki iki bit silinecek
ve sağına 2 bit 0 olarak eklenecek.

        1110010101110101 iken
        1001010111010100 olacak.

- Yani burda dikkat edilmesi gereken nokta, sayı işaretli veya işaretsiz türden de olsa her zaman
sağdan yapılan besleme (feed) 0 olacaktır. 

- Operatörün yine yan etkisi yok (no side effect)
- Atama yapmak istiyorsanız:

        a <<= 2; // olarak kullanılabilir.
        

- Eğer sağ operant negatif değerde ise ya da sağ operand, sol operand olan ifadenin ait olduğu türün 
bit sayısına eşit veya büyük değerde ise **tanımsız davranıştır.**

        a << b için;
        a -> int 4 byte 32 bit olduğu için b en fazla 31 bit bir değere sahip olabilir.
        
- Kayan bitler için bir örnek:

            #include <Windows.h> // standart bir fonksiyon değil



            int main()
            {
                int x = 1;

                while (x) {
                    bprint(x);
                    x <<= 1;
                    Sleep(200);
                }


            }
            
- Bitsel sola kaydırma işleminde feed her zaman 0 oluyordu ancak bitsel sağa kaydırmada durum tamamen
aynı değil.
    - Eğer sol operant işaretsiz ise besleme 0 ile yapılır.
    - Eğer sol operant işaretli ama pozitif değer ise besleme yine 0 ile yapılır.
    - Ancak eğer sol operant işaretli ama negatif değer ise 
        - Soldan yapılacak beslemenin 0 veya 1 ile yapılması tamamen derleyiciye bağlıdır.
         ( implementation defined )
        - Besleme 1 ile yapılıyorsa ; aritmetik besleme ( sign extension )
        - Besleme 0 ile yapılıyorsa ; lojik besleme ( logic extension )
        


- Bir idiyomatik ifade:

                (~(~0u >> 1)) -> ifadesinin sonucu 100..00-> 32 bit
                // 0000 0000 0000 0000 0000 0000 0000 0000
                // 1111 1111 1111 1111 1111 1111 1111 1111
                // 1000 0000 0000 0000 0000 0000 0000 0000  olur.
                // bu sayi işaretli olarak kullanılırsa ;
                // işaretli tam sayı türünün en küçük değerine eşit olur. 
        
- Bu sayı limits.h başlık dosyasında INTMIN makrosunun değeridir.


- Aşağı kodda 1 bitini soldan sağa kaydırma işlemi yapıyor.

        unsigned int x = ~(~0u >> 1);

        while (x) {
            bprint(x);
            x >>= 1;
        }

- Bitsel & operatörü:
    - Tam sayıları bitsel işleme sokuyor.


            int x = 154645, y = 9589;

            bprint(x);
            bprint(y);
            bprint(x & y);
            
            
 - Bitsel operatörlerin short circuit behavior yoktur.

  
  
- exor (exclusive or)
    - !!x != !!y  işlemine eşittir. 
    
- İki sayıyı iki kere exor işlemine sokarsanız soldaki değeri tekrar elde edersiniz.

- İki tam sayıyı üçüncü bir değişken olmadan takas etmek mülakat sorusunun cevabıdır.
    - exorswap
    
            int x = 124, y = 687;
	

            x ^= y;
            y ^= x;
            x ^= y;
            printf("x = %d, y = %d ", x, y);
             
- Hatta tek bir satırda da yazılabilir.

            x ^= y, y ^= x, x ^= y;


- Bir mülakat sorusu:
    - İşaretli iki tam sayının x, y zıt işaretli olup olmadığını test eden bir ifade yazınız.

            x ^ y işleminin sıfırdan küçük olması bu testin karşılığıdır.
            
            if ((x ^ y) < 0) 
            

- Bir tam sayının belirli bir bitini bir'lemek ( to set the bit - to turn the bit on)
- Bir tam sayının belirli bir bitini sıfır'lamak ( to reset the bit - to clear the bit- to turn the bit off)
- Bir tam sayının belirli bir bitini değiştirmek (  to flip the bit- to toggle the bit)
- Bir tam sayının belirli bir bitini 1 mi 0 mmı olduğunu anlamak. ( to get the bit )



- bitmask: belirli bitsel manipulasyon için kullanılana sabitler. Değişiklik yapılmak istenen bitin 1
olduğu diğer bitlerin ise 0 olduğu bitsel değerler.

            10110101010011*10010
            00000000000000100000  // bitmask
            10110101010011110010


- x biti set edilecek sayı olsun n set edilecek bitin indeksi olsun.


        x |= (1 << n) // x'in n. bitinin birlenmiş halidir.


- mesela bir sayının 5. bitini 1 leyelim.


            int x = 15;
            
            bprint(x);
            
            x |= 1 << 5; // x sayısının beşinci biti birlendi.
            
            bprint(x);
            

- istenilen bitin birlendiği bir örnek yazalım:


        int x = 0;
        int n;
        
        bprint(x);
        printf("kacinci bit birlensin");
        scanf("%d", &n);
        
        x |= 1 << n;
        
        bprint(x);
        
        
- Bir örnek:


            int x = 0;

            randomize();

            while (x != -1) {
                x |= (1 << (rand() % 32));
                bprint(x);
                Sleep(50); //Windows.h başlık dosyasından.
            }
            bprint(x);



- x biti clear edilecek sayı olsun n clear edilecek bitin indeksi olsun:

            x & ~(1 << n);
            x &= ~(1 << n); // x e sonuç atandı.


- x sayısının 27. biti sıfırlansın.

        int x = -1;
        
        bprint(x);
        
        x &= ~(1 << 27);
        bprint(x);




- Bir örnek:

            int x = 0;

            randomize();

            while (x != -1) {
                x |= (1 << (rand() % 32));
                bprint(x);
                Sleep(50); //Windows.h başlık dosyasından.
            }
            bprint(x);
            
            while (x) {
                x &= ~(1 << (rand() % 32));
                bprint(x);
                Sleep(50); //Windows.h başlık dosyasından.
            }
            bprint(x);


- toggle işlemi: Yani bir bitin tersini alma işlemi:

        x ^= (1 << n) 


- Bir tam sayının bir bitinin ne olduğunu elde etmek:
    - x biti get edilece ksayı olsun n get edilecek bitin indeksi olsun:

            if ( x & (1 << n))

- Bir örnek:

            static char str[40];
            
            _itoa(x, str, 2);
            printf("%032s\n", str);
            
            int n;
            printf("kacinci bit: ");
            scanf("%d", &n);
            
            if (x & (1 << n))
                printf("%d. bit 1\n", n);
            else
                printf("%d. bit 0\n", n);
                
- Daha idiyomatik hali:

            int x;
            printf("bir tamsayi girin: ");
            scanf("%d", &x);
            
            for (int i = 0; i < 32; ++i) {
                printf("sayinin %d. biti %c\n", i, (x & (1 << i)) ? '1': '0');
            }



- Bitsel operatörleri kullanarak bir sayının bitlerini yazan fonksiyon:


		void bit_print(int x)
		{
		    unsigned int mask = ~(~0u >> 1);

		    while (mask) {
			putchar(x & mask ? '1' : '0');
			mask >>= 1
		    }
		    putchar('\n');
		}

- Bu sefer mask i 0 değerleri üzerinden düşünerek yazalım:

		void bit_print(int x)
		{
		    for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
			putchar((x >> i) & 1 ? '1' : '0');
		    }
		    putchar('\n');
		}



- Bir mülakat sorusu:
	- if (x & 1) ifadesi neyi sorguluyor?
		- x'in sıfırıncı bitiinin 1 olup olmadığı sınanıyor.
		Ayrıca bu ifadenin anlamı ise sayının tek olup olmadığı sınanıyor.
		Yani if (x % 2 != 0) ifadesi ile aynı anlama gelmektedir.
		
		

- Bir soru:
	- x bir tam sayı değişken, x'in en düşük anlamlı 4 biti tam sayı olarak kaçtır. 

			int x = 122532;
			
			bprint(x);
			
			printf("%d\n", x & 15); // 15 -> 1111



- Bir tam sayının set edilmiş bitlerinin sayısını bulmak, yani kaç biti 1 dir.


			int set_bit_count(int x)
			{
			    int cnt = 0;
			    unsigned int mask = ~(~0u >> 1);

			    while (mask) {
				if (x & mask) 
				    ++cnt;
				mask >>= 1;
			    }

			    return cnt;
			}



- Çok meşhur bir mülakat sorusu:
	- Öyle bir ifade yazınız ki, x bir tam sayı değişken olsun, x 2'nin kuvveti mi?
	- Ve bunu bir makro haline getirin.

- Cevap: Bir istisna hariç bir sayı 2 nin kuvveti ise o sayıdan 1 çıkarılıp kendisiyle & işlemine
sokulduğunda sonuç 0 olmalıdır.

		0001 0000
		0000 1111
		
		0000 0000 olur:
		
		!(x & (x - 1))
Buradaki istisna 1 sayısıdır. 1'in bir eksiğiyle 1'i & lerseniz yine 0 elde edersiniz ancak 0, 2'nin 
kuvveti değildir.

		x != 0 && !(x & (x - 1)) 
		x && !(x & (x - 1))  olarak son halini alır. 


# Ders 54- 23.06.2021

- Bit twiddings hacks: Mülakata girmeden önce bitsel manipülasayona dair kısa yolların bulunduğu bir 
döküman kesinlikle incelenmelidir.

 

- Bir byte'ın reverse'ünü elde etmek:
		
		1100 1101
		1011 0011 reverse edilmiş hali.
		

- bit twiddings hacks'e bakınız..



- Meşhur mülakat sorularından bir tanesi:
	- 16 bitlik işaretsiz bir tam sayınız var, bu tam sayının ortasındaki 8 bitin değerini elde edin.

		1001 0101 0101 1001 sayısının ortadaki 8 biti yani
		     0101 0101  kısmını elde etmeniz isteniyor.
		     
- Çözümlerden birisi: sayıyı 4 sağa kaydırıp 16 sayısıyla & lemek

		x >> 4 & 16;
		
- Ama daha kolay bir yolu var:
	- x'i 4 sola kaydır, Bunu da 8 sağa kaydır.

		x << 4 >> 8;
		
- Bir işaretsiz tam sayının bitlerini bir boolean vector olarak kullanmak:


- Bitsel işlemlerin önemli bir kısmıda formatsız veri alış verişi için kullanılır.
	- Acaba biz bir tamsayının belirli bit alanlarını ayrı değişkenler olarak kullanabilir miyiz?

- bitfields members of structures - yapıların bit alanı elemanları:
	- bitsel olarak değişken oluşturma üzerinde belirli işlemler yapma gibi standart olan
	bir yolu.
	
	
		//bitfield member:

		typeddef struct  {
			unsigned int x : 3; // buradaki 3 değerin kaç bitlik alanda tutulacağı.
		}Data;


- Normal yapılara göre bir kısıtlama mevcut. normalde bir yapının elemanın adresi alınabiliyordu.
Ancak bitsel düzeyde olduğunda adresi alınamıyor.

		Data mydata;
		
		&mydata.x; // hata
 

- alignment için kullanılmayacak olan bitler için bir belirtme söz konusu olabilir.

		struct Data {
			unsigned int x : 5;
			unsigned int   : 3; // gibi
			unsigned int y : 4;
			unsigned int z : 3;
		};






- Birlikler ile bitsel işlemlerin birlikte kullanım şekli çok yaygın.
	
		typedef union {
			uint32_t uval;
			struct {
				unsigned int mday : 5;
				unsigned int mon  : 4;
				unsigned int year : 7; // 1980
				unsigned int hour : 5;
				unsigned int min  : 6;
				unsigned int sec  : 5;
			};
		}DateTime;
		
		int main()
		{
			DateTime dt = {
					.mday = 14,
					.mon = 3,
					.year = 1995 - 1980,
					.hour = 21,
					.min = 36,
					.sec = 45 / 2;
					};
					
			printf("%u\n", dt.uval); // değeri :  3029671534
		}
		------- ya da -----------------------------------------------
	
		int main()
		{
			DateTime dt = {
					.uval = 3029671534;
					};
					
			printf("%02u-%02u-%u  %02u:%02u:%02u\n", dt.mday, dt.mon, dt.year + 1980,
							dt.hour, dt.min, dt.sec * 2);
		}





- Bitler e rahat erişim için bir örnek:

		typedef union {
			struct {
				unsigned int bit0 : 1;
				unsigned int bit1 : 1;
				unsigned int bit2 : 1;
				unsigned int bit3 : 1;
				unsigned int bit4 : 1;
				unsigned int bit5 : 1;
				unsigned int bit6 : 1;
				unsigned int bit7 : 1;
				unsigned int bit8 : 1;
				unsigned int bit9 : 1;
				unsigned int bit10 : 1;
				unsigned int bit11 : 1;
				unsigned int bit12 : 1;
				unsigned int bit13 : 1;
				unsigned int bit14 : 1;
				unsigned int bit15 : 1;
				unsigned int bit16 : 1;
				unsigned int bit17 : 1;
				unsigned int bit18 : 1;
				unsigned int bit19 : 1;
				unsigned int bit20 : 1;
				unsigned int bit21 : 1;
				unsigned int bit22 : 1;
				unsigned int bit23 : 1;
				unsigned int bit24 : 1;
				unsigned int bit25 : 1;
				unsigned int bit26 : 1;
				unsigned int bit27 : 1;
				unsigned int bit28 : 1;
				unsigned int bit29 : 1;
				unsigned int bit30 : 1;
				unsigned int bit31 : 1;
			};
			uint32_t uval;
		}Bits;


		int main()
		{
			Bits x = { .uval = 3651910 };
			x.bit7 = 0;

		}




- endianness: Bir değişkenin belleğer byte - byte yerleşimi yapılmasında düşük anlamlı byte'ın 
yüksek numaralı adrese veya düşük numaralı adrese yerleşmesine göre ayrılmasındaki kullanılan terim:


		int  x = 10;
		
		0000 0000 0000 0000 0000 0000 0000 1010
		
		- Düşük anlamlı byte yüksek sayısal adreste, yüksek anlamlı byte düşük sayısal adreste,
			- big-endian
			- motorala tarzı
		4000 -> 0000 0000
		4001 -> 0000 0000
		4002 -> 0000 0000
		4003 -> 0000 1010
		
		
		- Düşük anlamlı byte düşük sayısal adreste, yüksek anlamlı byte yüksek sayısal adreste
			- little endian
			- intel tarzı
		4000 -> 0000 1010
		4001 -> 0000 0000
		4002 -> 0000 0000
		4003 -> 0000 0000
		
		- arm her ikisindede kullanılıyor olabilir.

- Mülakatlarda sık sorulan bir mülakat sorusu: 
	- Öyle bir C kodu yazınız ki, çalıştırıldığı zaman çalıştırıldığı sistemin big endian mı little
	endian mı olduğunu ekrana yazdırsın.
	
		int x = 1;
		
		char *p = (char*)&x
		
		if (*p)
			printf("little endian\n");
		else
			printf("big endian\n");

	- Daha kolay yazımı:

		int x = 1;
		
		char *p = (char*)&x
		
		if (*p)
			printf("little endian\n");
		else
			printf("big endian\n");
			

- Bellekte nasıl tutulduğunu tam olarak gözle görülmek istendiğinde:

		unsigned int x = 0x12AB45DE;

		unsigned char* p = (unsigned char*)&x;

		printf("%p %x\n", p, *p);
		++p;
		printf("%p %x\n", p, *p);
		++p;
		printf("%p %x\n", p, *p);
		++p;
		printf("%p %x\n", p, *p)


- Öyle bir makro yazınız ki big endien ı little endien a, little endien ı big endien e dönüştürsün:

	
		#define enc16(x)  ((uint16_t)(x >> 8)) | ((uint16_t)(x << 8))  // 16 bit için
		#define enc32(x)  ((x >> 24) | (x << 24)) | ((((x << 8) >> 24) << 8) | ((((x << 16) >> 24) << 16))) // 32 bit için


# Ders 55 - 25.06.2021


- Komut Satırı Argümanları:
	- Commend Line Arguments (CLI)


		int main(int argc, char *argv[])
		{


		}	
- argc : komut satırından gönderilen argüman sayısı.
- argv: komut satırından gönderilen argümanların yazılarını gönderen pointer dizi.
	- copy ali.c veli.c için argc si 3 olur ve argv[0] = copy, argv[1] = ali.c, argv[2] = veli.c 
	olur.



- Dosya İşlemleri ( File Operation)
	- Dosya dediğimiz de aklımıza 1 ler ve 0 lar gelmeli ancak burdaki 1 ler ve 0 lar
	bellekteki (ram) veriler değil ikincil saklama ortamındaki 1 ler ve 0 lar gelmeli. 
	- Bu 1 ler ve 0 lar ise ne anlama geliyor dediğimizde aklımıza dosyanın formatı gelmeli(file 
	format). Her dosyanın bir formatı vardır. Yani ikincil saklama ortamlarında tutulan 1 ler ve 
	0 ların ne anlama geldiğini bilmeniz için o dosyanın formatını bilmeniz gerekiyor.
	- Mesela txt formatında her bit byte bir ascıı koduna karşılık gelmektedir.
 


- C'de dosya işlemi yapabilmeniz için fopen fonksiyonuna çağrı yapmanız gerekmektedir.
- fopen fonksiyone bize işlem yapacağımız dosya ile ilgili kritik bilgileri tutan bir yapı nesnesinin
adresini döndürüyor. 

	FILE *f = fopen(??);
	//code
	fclose(f);

- Dosyalar üzerinde hangi işlemler yapılıyor:
	- Dosyadan okuma (read)
	- Dosyaya yazma (write)
	- Dosya konum göstericisi (file pointer)



		FILE * fopen(const char *pfname, const char *popenmode);
	-  Geri dönüş değeri FILE *
	-  Birinci parametresi açılacak dosyanın ismini içeren yazının adresi.
	-  Fonksiyonun ikinci parametresi, dosyanın açış modu dediğimiz bilgiyi içeren yazı adresi. 

- Dosya açış modu bilgisi:
	- Dosya varsa ne olacak yoksa ne olacak.
	- Dosya üzerinde okuma veya yazma işlemi iznimiz var mı?

- Açış modu:
	- Dosyayı okuma (read) modunda açabiliriz.
	- Dosyayı yazma (write) modunda açabiliriz.
	- Dosyanın sonuna ekleme (append) modunda açabiliriz.

- Dosyanın okuma (read) modu varsa; dosya açılır, yoksa açılmaz.
- Dosyanın yazma (write) modu varsa; dosya sıfırlanır (truncate), yoksa oluşturulacak.
- Dosyanın sona ekleme (append) modunda varsa; açılacak, yoksa oluşturulacak.

- Peki neler yapabiliriz:
	- Okuma modunda açıldığında dosya okunabilir ama yazılamaz.
	- Yazma modunda açıldığında dosyaya yazabiliriz ama dosyayı okuyamayız.
	- Sona ekleme modunda, dosyanın sadece sonuna yazabiliriz, ama okuyamayız. 


- Bir de bu modların + 'lı modları mevcut.
	- Artılı okuma modunda hem okuma hem yazma işlemi yapabiliyoruz.
	- Artılı yazma modunda hem yazma hem okuma işlemi de yapabiliyoruz.
	- Artılı sona ekleme modunda sona yazabiliyoruz ve okuyadabiliyoruz.




- Dosyalara text modunda ve binary mod olarak açılabilir.


- Modlar için yazılara bakalım: İlave karakter kullanılmadığında default olarak text modunda dosya açılır.
	- Okuma için -> "r" ---artılı mod için--- "r+"
	- Yazma için -> "w" ---artılı mod için--- "w+"
	- Sona ekleme için -> "a" ---artılı mod için--- "a+"
- Dosyayı binary modda açmak için b eklenir:
	- Okuma için -> "rb" ---artılı mod için--- "r+b" veya "rb+"
	- Yazma için -> "wb" ---artılı mod için--- "w+b" veya "wb+"
	- Sona ekleme için -> "ab" ---artılı mod için--- "a+b" veya "ab+"



- Geri dönüş değeri ise stdio başlık dosyasında typedef i yapılmış bir yapı isimdir (FILE) . 
	 - Geri dönüş değeri NULL pointer ise dosya açma işleminde başarısız olunmuş demektir. 
	 ! geri dönüş değeri mutlaka test edilmelidir.
	 
	
			FILE* f = fopen("mustafa.txt", "r");

			if (!f) {
				fprintf(stderr, "dosya acilamadi\n");
				return 1;
			}

			printf("dosya acildi\n");

			// 
			fclose(f);



- fclose parametrik yapısı:

		int fclose(FILE *);
	- Geri dönüş değeri  fonksiyonun başarısını temsil ediyor. 
		- non-zero değer dönmesi dosyanın kapatılamadığı bilgisini verir.
		- 0 değer dönmesi ise başarılı olduğu bilgisini verir.



			int fcloseall(void); // standard değil
			
	- Aynı zamanda birden fazla dosya açıksa ve tek kodda tüm dosyalar kapatılmak isteniyorsa 
	fcloseall kodu kullanılır.
	- Geri dönüş değeri kapatılan dosya sayısıdır.
	
	
- fgetch(): formatsız okuma fonksiyonu:
	- Bu fonksiyon dosyadan tek bir byte'ı yani tek bir karakteri okuyor. 


- Dosya işlemlerinde hiçbir fonksiyon bizden hangi byte'dan okuma veya yazma işlemini yapacağı 
bilgisini istemez. 
- Bir file pointer yani Dosya Konum Gösterici var. File pointer sizin erişiminize kapatılmış bir 
tam sayı değişken. Bu tam sayı değişken dosyanın neresinden okuma/yazma işlemi yapılacağını 
gösteriyor.
- Dosya işlemlerinin bu şekilde yapılmasına sequential access (sıralı erişim) deniliyor. 
- random access (rastgele erişim) belirli fonksiyonlar yardımıyla file pointer set edilerek
istenilen byte'dan erişimin sağlanmasına deniliyor.




	int fgetc(FILE *);
- Geri dönüş değeri dosyadan okunan byte'ın tam sayı değeri.
- Okuma başarılı ise okunan byte'ın tam sayı değeri döndürülüyor. Eğer başarısız olurs -1 döndürüyor.
- stdio başlık dosyasında fgetc'nin başarısızlık bilgisi sorgulanması için değeri -1 olan
bir makro var :

		#define EOF  	(-1) 
		
		

- Bir örnek:


			FILE* f = fopen("date.h", "r");
			if (!f) {
				fprintf(stderr, "dosya acilamadi\n");
				return 1;
			}

			int c;

			while ((c = fgetc(f)) != EOF) {
				putchar(c); // printf("%c", c);
			}

			fclose(f);


# Ders 56 - 28.06.2021


#29:01











































































