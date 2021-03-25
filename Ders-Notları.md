
#### Token (Atom)

 - Derleyicinin anlamlandırabildiği en küçük program parçasıdır.

 - Derleyici "Tokenizing" işlemi ile kodu atomlarına ayırır.

Tokenlar aşağıdaki gibi sınıflandırılabilirler:

 1- Keywords (Anahtar Kelime) 
 
 3- Identifiers (İsimler)   	
 
 4- Constant (Sabitler) 
 
 5- Strings	
 
 6- Special Symbols
 
 7- Operators (Operatörler)				

1-Keywords: Programlama dilinde ön tanımlama yapılmış ve rezerve edilmiş 
kelimelerdir.
Bu kelimeleri bir değişken olarak tanımlayıp kullanamayız. Anahtar kelimelere
tekrar tanımlama veya atama yapamayız.

C programlama dilinde anahtar kelimeler aşağıdaki gibidir.

auto  -  double  - int  -  struct  - break -  else  - long  -  switch  - case
enum -   register  - typedef  - char  - extern -  return -  union -  const   
float  - short -  unsigned  - continue - for  - signed - void -  default 
goto -  sizeof -  volatile -  do  -  if   - static  -  while  - inline - restrict 
_Bool -    _Complex -  _Imaginary


2.Identifiers: İsimler Genel terminolojide değişkenleri, fonksiyonları 
ve dizileri tanımlamak için kullanılır.

 - Harfle veya  _ (Underscore) ile başlamalıdır.
 - Sadece harf, sayi ve _ içerebilirler.
 - Anahtar kelimeler kullanılamaz.
 - Boşluk içeremez (whitespace).
 - 31 karakteri geçmemelidir. Geçerse ilk 31 karakter kabul edilir.
 - Büyük-küçük harf duyarlılığı vardır.



 3.Constant: Const belirteci, programcının derleyiciye belirli bir değişkenin
 değerinin değiştirilmemesi gerektiğinin bildirmesini sağlar.
 Ayrıca literals olarak ingilizcede adlandırılabilir.


 
 4.Strings: Değişken tipi char yani karakter olan dizilerdir.
 TR'de "Katar" olarak karşımıza çıkabilir.


 5.Special Symbols: C programlamada bazı özel anlamları olan sembollerdir.
 Bu sebeple farklı amaçlarda kullanılamaz.

 - Brackets[]: Dizilerin tanımlanmasında ve elemanlarının çağırılmasını
 anlamlandıran semboldür.
 
 opening bracket  [
 
 closing bracket  ]

 - Parentheses() : Bu sembol fonksiyon tanımlanmasında ve fonksiyonun 
 çağırılmasında kullanılır.

 - Braces {} : Küme parantezi birden fazla çalıştırılabilir ifade içeren 
 bir kod bloğunun başlangıcını ve sonunu belirtir.  
 
 opening curly brace {
 
 closing curly brace }
 
 ```
 {// Main Block( ana block)

     {
       //Nested Blok(içsel block)
     }
 
 }
 ```

 - Comma ( , ): Birden fazla deyimin ayrımında kullanılır. Mesela fonksiyon
 çağrılırken argümanların ayrımı için kullanılır.

 - Colon ( : ) : Bir başlatma listesi adı verilen bir şeyi çağırırken 
 kullanılır.

 - Semicolon (;): Deyim sonlandırıcı olarak bilinir.Bir mantıksal varlığın 
 sonunu gösterir. Bu nedenle her bir deyimin noktalı virgülle bitmesi gerekir.

 - Asterisk (*) : Pointer değişkeni tanımlamak için kullanılır.,

 - Assignment operator( = ) : Bir değer ataması yapılırken kullanılır.
  
     - Atama Operatörü (=)

 -Pre-processor(#): Ön işlemciye verilen komutlarda kullanılan semboldür.
    - number sign 
    - sharp
    - pound sign 
    - diyez

 6. Operators: C değişkenlerine ve diğer nesnelere uygulandığında bir 
 eylemi tetikleyen sembollerdir. Operatörlerin üzerinde hareket ettiği
 veri öğelerine operant denir.
    - Side effect ( Yan Etki)
    - Sequence Point (Yan Etki Noktası)

 Tekli Operatörler:
 Sadece tek bir işlenene ihtiyaç duyan operatörler, tekli operatörler 
 olarak bilinir.  Örnek artırma ve azaltma operatörleri için


İkili Operatörler:
iki işlenen gerektiren işleçlere ikili işleçler denir. 
İkili operatörler şu şekilde sınıflandırılır:

- Aritmetik operatörler (Arithmetic operators)
- İlişkisel Operatörler (Relational Operators)
- Mantıksal operatörler  (Logical Operators)
- Atama Operatörleri   (Assignment Operators)
- Koşullu Operatörler   (Conditional Operators)
- Bitsel Operatörler  (Bitwise Operators)


===========================================================================
 
 T bir tür olmak üzere :

 T x;
 
 T:değişken Türü
 
 x:değişkenin ismi
 
 [Tür] [isim] = İlk değer ifadesi:
 
 İnitializer expression:ilk değer ifadesi
 
 Not: Initialization is not a assignment (ilk değer ifadesi bir atama 
 değildir.)

 y=5; // Bu bir atamadır (assignment).
 
 int y = 5; //Bu bir ilk değer ifadesi. (initialize).

 ==========================================================================
 
 Storage Duration (Ömür)

 - Automatic storage class
 
 - Static storage class
 
 - Dynamic storage class


 Automatic storage duration: Bu nesneler, programın akışı programın 
 çalışma zamanında bir Fonksiyona girdiğinde bunlar belleğe yerleşir. Programın
 akışı o koddan çıktığında bellekten boşaltılır.
 örnek olarak bir fonksiyonda tanımlanan int bir değişkene atanan bir değer
 o fonksiyon her çağırıldığında belleğe yerleşir ve o fonksiyondan çıkarken
 o değişkenin bellekteki yeri boşaltılır.
 
 #### TANIMSIZ DAVRANIŞ
 
   ```
   -> Otomatik ömürlü değişkenler'e ilk değer ataması yapılmazsa hayata
   belirsiz değer (Garbage Value) ile başlar. Eğer değişken bu değeri ile
   kullanılırsa tanımsız davranışa yol açar.
   ```

 - Static storage class: Programın daha çalışmaya başlamasından, yani 
 main fonksiyonu çalışmaya başlamadan önce çalışmaya başlarlar.
 Programın sonuna kadar da bellekde hayatları devam eder.

 - Statik ömürlü değişkenlerde ilk değer ataması yapılırken sabit ifedesi
 olması gerekir.
 
 Bir nesne Global Değişken ise statik ömürlüdür. Local değişkenler
 otomatik ömürlüdür. Ancak static anahtar kelimesi ile tanımlandığında static
 ömürlü olur. Static ömürlü değişkenler hayata 0 değeri ile başlarlar.
 
 ```
 ->Static ömürlü değişkene ilk değer başlatması yapılırken sabit ifade 
 kullanılmalıdır.
 int x=10+20;// global alanda yazılan bu kod kabul görür.
 int y=x;// ancak bu kod hatalıdır. çünkü y 'ye değişken ilk değer
 ataması yapılmaya çalışılmıştır. 
```


 
 **Not:** Global değişkenler static ömürlü olmak zorundadır. 
 Ancak lokal değişkeni static yapabilmek için başına static anahtar 
 kelimesini eklememiz gerekir.


```
 #include <stdio.h>

 int g=7 ;// global değişken 
 // global değişken olarak atanan g programın tamamen çalışması bitene kadar
 bellekte yer almaktadır.

 int main()
 {
 
 }
 
 void func()
 {
   int X=10;
   //local variable 
   // yerel değişken

   /* bu fonksiyon her çağırıldığında x değerine 10 ilk değer 
   ataması yapılarak bellekte yeri oluşturulur. Fonksiyon bittiğinde
   x değeri bellekten silinir.*/
 }
 void func()
 {
   /*eğer bir fonksiyon içerisinde static bir değer tanımlaması yapmak 
   istiyorsak aşağıdaki gibi yapılır.
   static int x=1;*/
   // burada biz "static lokal değişken" tanımlamış olduk

 }

  void func()
 {
   static int x=10;
   x+=10;
   /*bu fonksiyon ilk çağırıldığında x değişkeni statik lokal değişken
   olarak tanımlanıp ilk değeri verilir ve her çağırılmada tanımlaması 
   tekrar yapılıp ilk değeri verilmez. Yani diğer çağırılmalarda 
   tanımlama kodu işleve girmez.*/

 }
 ```
 **Not:** statik ömürlü değişkenlere ilk değer verilmeden tanımlanırlarsa eğer
 hayata 0 değeri ile başlarlar. 
 Ancak otomatik ömürlü değişkenlere ilk değer verilmezse eğer buna belirsiz 
 değer "garbage value", ya da "indetermined value" denir.
 Eğer bu değişken belirsiz değer halinde kullanılırsa 
 tanımsız davranış "undefined behavior" olarak adlandırılır.

 - Behavior 
 
 - Defined behavior "tanımlı davranış"
  
 - Undefined behavior "tanımsız davranış"

Undefined-Behavior: C programlama dilinde "optimizing compiler" söz
konusu olduğu için aslında biz derleyiciyle şöyle bir anlaşma yapıyoruz. 
Benim yazdığım kodu daha hızlı çalıştırabilecek şekilde optimize ederek 
makine diline optimize ediyor. Ancak bunu yaparken de bir garanti istiyor.
Yazılan kodunda undefined behavior olmaması gerektiği konusunda. 
Olduğu takdirde bu durumu optimize ederken tanımlayamadığı halde 
çalıştırdığı için çeşitli problemlerle karşılaşabiliyor.

Bu sebeple mümkün olan her yerde değişkenlere ilk değer ataması
yapılmalıdır.


=======================================================================


 declare declaration //Bildirim
 
 define defination // tanımlama

 Bildirim ismin ne olduğunu anlatan cümledir.
 Eğer bildirim sonucunda derleyici bellekte yer alıyorsa bu tanımlamadır.


 =======================================================================
 
 Scope (kapsam)

 Bir tanımlayıcının kapsamı, tanımlayıcının (Identifiers) doğrudan 
 erişebildiği programın bir parçasıdır. C'de tüm tanımlayıcılar kapsamlıdır.

 File scope: Bir tanımlayıcının dosya kapsamı, dosyanın başlangıcından
 başlar ve dosyanın sonunda sona erer.

 Block Scope: Bir tanımlayıcının kapsamı, { bloğun açılmasıyla başlar ve }
 bloğun bitmesiyle sonunda sona erer. Blok kapsamına sahip tanımlayıcılar kendi blokları
 için yereldir.
 
```
 #include <stdio.h>

 int x; 

 int main()
 {

 int x; 

 /* Burada bir programda aynı iki isim kullanılmış ancak
 Kapsamları farklıdıfr. Bu durumda program sentaks hatası vermez ancak
 kullanım açısından doğru bir kullanım değildir.*/
 
 }
```
 ====================================================================

 #### Look Up(isim arama)

```
  #include <stdio.h>
  
  int x=20;

  int main()
  {
  int x=10;

  printf("x=%d\n", x);
  
  /*Burada isim arama söz konusu olduğu için
  printf ile x aranmaya başlar. Bu arama yukarı doğru gerçekleşir ve
  ilk olarak kendi bloğunun içerisinde yukarı doğru arama başlar. Eğer 
  aranan değişkenin ne olduğu bulunursa arama anında biter ve bu değişkenin 
  ne olduğu bulunan değer ile yazdırılır. Yani ekranda x = 10 görürüz.*/
  
  }
``` 

   #### Örnek:
  
  ```
  #include <stdio.h>
  
  int x=36;

  int main()
  {


  printf("[1] x=%d\n", x);
  int x =10;
  printf("[2] x=%d\n", x);
        {


    int x=89;
    printf("[3] x=%d\n", x);


        }
   printf("[4] x=%d\n", x);


  }
  ```
  
  Ekran Çıktısı:
  
```
  [1]=36
  [2]=10
  [3]=89
  [4]=10
```


 #### Örnek:
  ```
  #include <stdio.h>

  int main()
  {
  
  int printf=0;
  printf ("selam");

  // program printf'i main fonksiyonu içerisinde int olarak tanımlandı.
  sonra printf fonksiyonunu ilk algıladığında keywords olmadığı için
  name lookup yaparken kendi kapsamında arama yapar. Bu kapsamda printf 
  int olarak tanımlandığı için bu kod hata verir.
  normalde int olarak tanımlanmasaydı printf'i  ilk okuduğunda isim araması 
  yaparak standart kütüphaneye ulaşarak printf fonksiyonunu çağıracaktı.

  
  }
```
  #### Örnek:
  
  ```
  #include <stdio.h>

  int main()
  {
  
  int printf=20;
  printf=30;

  // bu kodda sentaks hatası yoktur. düzgün bir şekilde çalışır.


  
  }
  ```
  ======================================================================
  
 #### Function (Fonksiyonlar) "method, procedure, yordam, altprogram"

  - to define a function 
  - to call a function
  - to declare a fuction

  double func (int x , int y);

  // Burada "double", fonksiyonun geri dönüş türü (the type of return value).
  
  //"func", fonksiyon ismi.
  
  // "Parantezler", parametre parantezi
  
  //int x, int y ise formal parameters (parametre değişkenleri)


  Örnek olarak;
  

  int func(void)   ile int func() aynıdır. Buradaki void fonksiyonun 
  parametre değişkeninin olmadığı anlamına gelir. Void kullanılmasada 
  fonksiyonun parametre değişkeni yoktur.
  Ancak Void kullanılmasının C'de bir avantajı vardır.
  ilerleyen derslerde göreceğiz.

  ======================================================================
  
  statement

  - expression sstatement (ifade deyimi)
  - compound statement (bileşik deyim)
  - null statement (boş deyim)
  - control statement (kontrol deyimi)


  - z=10 (bu bir ifade) "expression"
  
  - z=10; (bu bir deyim) "expression statement"


 Compound statement örnek olarak
 
  ```
 if(x>5)
 {

 ++a;
 x=5;

 // if koşulunun içerisindeki deyimlerin bütününe compound (bileşik) 
 deyim denir. Bir blok içerisinde olduğu için bu böyledir.

 }

  ```
 null statement:  ";" kendisinden önce bir ifade olmadan tek başına
 kullanılırsa deyim olur ve null statement denir.
 
 Control statement: Önceden belirlenmiş bir sentaksı olmalı ve en az bir
 anahtar kelime içermelidir.
 - if statement
 - loop statement
     - while statement
     - for statement
 
 =======================================================================

 Return statement
 
 a-)Bir fonksiyonun kodunun çalışmasını sonlandırmak için
 
 b-)Fonksiyonun kendisini çağıran koda (iletecek ise) bir değer iletmesini
 sağlamak için kullanılır.

 return ; // yalın (ifadesiz) return deyimi
 
 return exp; // ifadeli return deyimi

 **Not:** 
 
  ```
 void func(void) 
 {
 yukarıdaki fonkiyonun adlandırılmasında ilk void fonksiyonun bir geri 
 dönüş değerinin olmadığı anlamına gelir. Parantez içerisindeki void ise
 fonksiyonun parametre değişkeninin olmadığı anlamına gelir.
 }

 void function: A function doesn't have return value. Geri dönüş mekanizması
 ile bir değer gönderilmeyeceği anlamına gelir.


  ```

 örnek olarak :
```

 void func (void)
 {
 // statement
 //statement
  if(exp)
      return;// bu bir yalın return statement dır.
 //statement
 //statement


 } 
```
 **Not:** yalın return statement'ı asla geri dönüş değeri olan bir fonksiyonun 
 içerisinde kullanamayız. Sadece void fonksiyonu içerisinde kullanılır.

 İfadeli return:

 return exp;
 
 Fonksiyonumuzun bir geri dönüş değeri olması gerekiyor. Kullanıldığında 
 yine fonksiyon sonlandırılır ancak bu sefer fonksiyon sonlandırıldığında 
 bir geri dönüş ifadesi gönderilir. Geri dönüş ifadesi genelde 
 fonksiyonda hesaplanır ve geri dönüş değeri olarak verilir.

 return 0; // bu kodda geri dönüş değeri 0'dır.
 
 #### UNDEFINED BEHAVIOR
 
```
 int func (void)
{
Eğer bir fonksiyonun geri dönüş değeri türü var ise fonksiyonun bir geri
dönüş değeri olması lazım. Eğer yoksa ve geri dönüş değeri kullanılıyorsa
Undefined behavior (tanımsız davranış) olur.
}
```

**Not:** c programlama dilinde bir fonksiyon içerisinde bir fonksiyon 
tanımlanamaz. Tüm fonksiyonlar global isim alanında olmalıdır.
Yani C'de nested func ve local func yok.

-Ayrıca C'de global isim alanında bir fonksiyon çağırılamaz.

Test function: Return statement test fonksiyonlarında soruya cevap
vermek amacıyla da kullanılır. Evet/hayır gibi sorular.

query function

- Genellikle C'de _bool yerine int geri dönüş değerleri kullanılır.
Eğer geri dönüş değeri sıfır dışı bir değer ise (nan-zero value) lojik doğru
anlamına gelmektedir. Eğer sıfır değeri gönderilmişse yanlış olduğu anlamına 
gelir.

- Fonksiyonu çağıran kodun, çağırılan fonksiyonun bir geri dönüş değeri 
olmasına karşın bu geri dönüş değerini kullanmamasına "to discard the return
value" denir.

- Başarı bilgisi olarak kullanılabilir. Herhangi bir hata durumunda koşul 
ifadeleri ile hata dönütü sağlayabilir.

Eğer toparlarsak bir fonksiyonun geri dönüş değeri neler olabilir?

- Hesaplanan bir değer
- Test fonksiyonları
- Tamamlayıcı bir değer
- Başarı bilgisi
- Ya da hiç olmayabilir(void func)


==========================================================================

#### Fonksiyon çağrıları (to call a function)

Parantez operatörü ile sağlanır.

func() -> bu bir ifadedir. 

Eğer çağırılan fonksiyonun parametre 
değişkeni yoksa bu parantezin içerisine hiçbirşey yazılamaz.
Parametre değişkeni olduğunda ise her bir değişken için kopyalanacak, 
değeri oluşturacak ifade yazılır.

Fonksiyon çağırılırken parantezin içerisine yazılan değerlere argüman denir.

- argument(arguman)
- actual parameter

func(10,20) // expression (ifade)

func(10,20); // statement(deyim)

**örnek:**

```
int main()
{

int x = 10;
int x = 45;
max (x+30,y-10);

//Burada max fonksiyonunun argümanı (40,35)'dir.

}
```
- Aynı geri dönüş değerini elde edeceğimiz şekilde bir fonksiyonu birden 
fazla kere çağırmak kötü kod'dur.

call by value (değerle çağırma)

call by referance (referansla çağrı)

C dilinde tüm fonksiyon çağrıları call by value (değerle çağırma)'dır.
fakat bu özellik dilden dile değişir.


call by value olduğuna dair bir örnek:

```
int foo(int x)
{
x = 99;
return x;
}

int main()
{

int x=10,y;
printf("x=%d\n",x);
y = foo(x);
printf("x=%d\n",x);


}
```
// Yukarıdaki programda ikinci printf değeri ile yazdırılan x değeri 10'dur.
çünkü x Değeri foo fonksiyonundaki a değerine atanmaz kopyalanır.
Yani foo(x) ifadesi 99'dur. x gönderilen bir ifade ve foo(x) gelen ifadedir.



#### Standart Kütüphane (Standard Library)

-Printf standart bir C fonksiyonudur.
-Standart kütüphane alt birimlere bölünmüştür (module).

Variadic Function: Fonksiyon çağırılırken parametre sayısının değişken olduğu fonksiyon türüdür.

Tanımlanma şekli:

```
void func(int x, int y,...)
{
Variadic Function
}
//Yukarıdaki tanımlanan fonksiyona en az 2 tane argüman gönderilebilir. 

```
Not: Bazı programlama dillerinde "Default Argument" kavramı vardır. Yani
argüman gönderilmediğinde varsayılan argümanlar kullanılır.

- C'de neler yok !

```
- Nested Function
- Function Over Loading: Bir foksiyonu 2 farklı tür için kullanamazsınız.
Mesela abs fonksiyonunu hem int hem double türü için kullanamazsınız.

```
#### CONSTANT (SABİTLER)

- İnteger Constant (Tam sayı sabitleri)
- Floating Constant ( Gerçek sayı sabitleri)


Sabitlerin türleri olması gerekir.
- Tam sayı sabitlerinin yazımında 3 farklı sayı sistemi kullanılabilir.
      - Hexadecimal (Onaltılık sayı sistemi)
      - Decimal (Onluk sayı sistemi)
      - Octal (Sekizlik sayı sistemi)

x=123;//decimal

x=0123;//octal

x=0x13;//hexadecimal

Sabitlerin Türleri:

- Signed int =>783
- Unsigned int=>783U

- Signed long => 7834L ya da 7834l
- Unsigned long =>7834UL -ul

- Signed long long =>7833LL
- Unsigned long long =>7833LLU -ULL

- Float
- Double
- Long Double


#### UNDEFİNED BEHAVİOR

```

İşaretli tamsayı türlerinde yapılan işlemlerde taşma durumu tanımsız davranıştır.

```

Gerçek Sayı Türleri Gösterimi:

- Float -> 2.3F
- Double -> 3.48, 5. , 5.0, .5
- Long Double -> 2.3L

**Not:** Nokta içeren sabitlerin türü double'dır.


Scintific Notation:

Aşağıdaki değerler double türüne aittir.

   - 2.3e5----> 2.3 x 10^5
   - 0.5e-3 --->0.5 x 10^-3

#### KARAKTER SABİTLERİ (STRİNG LİTERALS)

C'de karakter sabitlerinin türü int'dir.

"Raşit" --> String Literals

- 'A' Bu karakter, sistemde kullanılan karakter kodlamasında (character encoding)
gerçekleşerek bu karakterin kod numarası tutulur.

'A'---> 65 --ASCII

**Not:** ASCII karakter kodlamasında büyük harf ve küçük harf sıralaması tek bir blok halinde değildir.
Sebebi ise büyük harf ile küçük harf arasındaki sayı farkını 32 yani 2^5 yapabilmektir. 
Böylece bitsel işlemlerde büyük-küçük harf değişimi tek bir biti set-reset yapılarak sağlanabilmektedir.

- Karakter kodlamalarında, harf karakterine Alphabetic Character,
Rakam kodlamalarına ise Numeric/digit Character denilir.
Alpha-Numeric Character ikisini içeren bir kümedir.

- Control Character: Kontrol karakterleri görüntüsü olmayan özel araçlarla kullanılan karakterlerdir.
Mesela Space, Enter gibi.

- Printable Character: Görüntüsü olan karakterlerdir.

- Punctation Character: Görüntüsü olan ama Alpha-Numeric olmayan karakterlerdir.
- 
Mesela . , ! ' ^ gibi karakterler.


- Escape (Kaçış)
- 
Escape Sequence (Kaçış Noktası)

 Bir kodlamada eğer bir karakter özel bir anlamda kullanılıyorsa o karaktere escape denir.
 
 \ -> escape olarak kullanıyoruz.
 
 '\'  ---> Yani biz tırnak içerisinde ters bölü yazdığımızda bu ters bölü karakterinin kodu değil
 sadece escape olduğunu ve ayrı bir kurala göre değerlendirilmesi gerektiğini anlıyoruz.
 
 '\a'-->alert(bell)
 
 '\t' -->horizantal tab
 
 '\v' --> vertical tab
 
 '\n' --> new line
 
 '\r' --> carriage return
 
 '\f' -->form feed
 
 '\b' -->Back space
 
 '\o' -->null character
 
 '\'' --> single quote
 
 '"' veya '\"' --> double quote
 
 '\' veya '\\' --> backslach
 
 '\?' veya '?' --> question mark
 
 
 #### İNPUT-OUTPUT OPERATİON
 
 
- Bir program çalışır haldeyken dış dünya ile veri alış-verişi 
sağlamasına denir.
    - standard input stream (klavye)
    - standart output stream (Consol a  bağlı)
    - standard error stream

- Bir giriş-çıkış işlemi 2 farklı şekilde yapılabilir.
     - Formatted
     - Unformatted

Formatsız: Gönderilen ya da alınan kodları olduğu gibi almaya veya göndermeye yönelik kullanımdır.

Formatlı: Girişin ya da çıkışın insanın anlayacağı formata getirilmesine denir.

- printf ve scanf fonksiyonları formatlıdır.

- Çıktı alınırken formatın türü de önemlidir.

Mesela bir sayı yazdırılacağı zaman hangi sayı sisteminde olduğunu bildirmek bir format bildirimidir.

Output Width(yazma alanı genişliği): Yazma alanı genişliği bir yazı veya rakam dizisini yukarıdan 
aşağı sıralarken hizalamaya yarayan kavramdır.

Fill character -> Bu hizalama yapılırken kullanılan karakterdir. Genelde boşluk karakteri kullanılır.

#### PRİNTF FONKSİYONU

Printf fonksiyonu stdio kütüphanesinde bildirilen formatlı çıkış fonksiyonudur.

Tanımlanma şekli:

int printf(const char*p,...);

- C'de yazılar dizilerde tutuluyor. Dizilerin fonksiyonlara gönderilmesi Call By Referance biçiminde olmak zorundadır.
Bu yüzden bir fonksiyona bir yazıyı göndermenin yolu yazıyı tutan adresi göndermektir.

Printf fonksiyonu tanımlanırken *p gönderilecek olan adresi ifade etmektedir. 

Yani bir pointer olmasının sebebi bir yazıyı isterken aslında yazının tutulan char dizisinin adresini istiyor olmasıdır.

... ise bu fonksiyonun variadic olduğunu ifade etmektedir.

Printf fonksiyonun sayı sistemlerinin formatları:

%d-->decimal--int türden

%0--> Octal

%x--> hexadecimal--sign/unsign int türden

%Ld-->long türden 10 luk sayı sistemi

%u-->unsigned int

%f-->double  ve float türünde

%lf --> long double veya float türünde


```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int x=987;
    printf("%d",printf("%d",printf("%d",x)));
    /*Bu kodun çalışma şekli ilk olarak en içteki printf fonksiyonu çalışır.
    Yani ekrana 987 yazılır. Bir dıştaki printf fonksiyonu bi önceki fonksiyon çalışırken ürettiği değeri yazar.
    Printf fonksiyonu yürütüldüğünde ekrana kaç karakter yazdıysa, yazdığı karakter sayısını üretir. Yani ekrana 
    3 basamaklı olduğu için 3 sayısı yazılır. bir kez daha yürütüldüpünde 3 sayısı 1 karakterli lduğu için 
    1 sayısı yazdırılır.*/

}

```


-  %c formatı ASCII'ye göre bir karakterin sayı karşılığını girerseniz eğer o karakteri ekrana yazdırır.

```
int main()
{

	int x;
	
	printf(" %c", 65);

}

// Ekrana yazılan değer A olur. 
```

#### SCANF FONKSİYONU

İnt scanf(const char*p,...);

- Scanf fonksiyonu call by referance olmak zorundadır.
örnek olarak scanf("%d",&x); &x kullanılmasının sebebi call by referance olmasıdır.
- Scanf fonksiyonu Line-Buffered (Satır Tamponlu) yapıdadır.
- 
Yani new-line karakteri gelene kadar devam eder.

- Örnek olarak :

scanf("%d",&x); yazıldığında ekrana giriş olarak 1234abc yazıldığında 
ekrana sadece 1234 yazılır. Çünkü %d formatı onluk sayı sisteminde bir tam sayı girilecek demektir.

scanf'in geri dönüş değeri başarılı olup olmadığını anlatmaktadır.

**Uyarı:** Scanf çağrısı yapıldığında standar inputun buffer'ı boş değil ise giriş için bir karakter girilmesi
beklenmez. Bu durumda scanf, standart inputun bufferındaki karakterleri kullanır.


 #### OPERATÖRLER(OPERATORS)

- İşleçler
- İşlemci

- C'de 45 tane operatör vardır.
- Sizeof hem anahtar sözcük hem de operatördür.

- a + b --> burada + bir operatör, a ve b operanttır.
- unary operator--> tek terimli operatör
- binary operator--> çift terimli operator
- ternery operator--> 3 terimli operator

- a+b---> + operatorü ortada olduğu için bu operator burada infix konumda kullanılmıştır.
- !x---> burada ! operatörü başta olduğu için prefix konumunda kullanılmıştır.
- y++  ----> burada ++ operatörü sonda kullanıldığı için postfix konumunda kullanılmıştır.

örnek olarak

- a+b-->binary infix
- !x-->unary prefix
- y++ -->unary postfix


- Her operatörün ürettiği bir değer vardır.(Operators generate value),(generate yerine yield,return kullanılabiliyor.)
- 
8*5=40--> Burada 40 değeri çarpma operatörünün ürettiği değerdir.

- Constraint = Operatörlerle ilgili uyulması gereken kurallara verilen ad'dır.
- Constant(sabit)
 

====Operatör Önceliği====

- precedence
- priority

- Operatör önceliği hangi işlemin daha önce yapılacağını belirleyen kurallar değildir.
- Operatör önceliği bir ifade içinde birden fazla operatör yer aldığında hangi operatörün 
ürettiği değer , hangi operatörün operantı olacağını belirliyor.


#### OPERATÖR ÖNCELİK TABLOSU

```
1-)  ( ) [ ] . ->
2-)  + - ! ~ sizeof  type & *0 ++ -- (Sağdan sola)
3-)  *   /  %
4-)  + -
5-)  >>  <<
6-)  > >= < <=
7-)  ==   !=
8-)  &
9-)  ^
10-) |
11-) &&
12-) ||
13-) ? : (sağdan sola)
14-)=  +=  -=  *=  /=  %0  &0  |=  ^=  >>=  <<=  (sağdan sola)
15-) ,
```

-Bazı operatörlerin C'de iki anlamı vardır.

"+" ---> +x veya a+b ,+x işaret belirtir. a+b 'deki + ise toplama işlemi.

"*" ---> *ptr (Pointer), a*b(çarpma)

"&" ---> &x (adres tanımlama) , x&y (bitsel işlemler)


- Associativity (öncelik yönü)
   - left associative (soldan sağa)
   - right associativity (sağdan sola)

- Side Effect (Yan etki) 
    - !x burada lojik değil operatörünün yan etkisi yoktur. Yani x değişkeninde herhangi bir değişiklik olmaz.
    - ++x burada artı artı operatörünün bir yan etkisi vardır ve x'i 1 artırmıştır.
   
   
   
   ==Addition Substraction (+,-)==
   
   - Binary infix operatörlerdir.
   - Ürettikleri değer toplamı ya da farkı olur.
   - Yan etkileri yoktur.
   
   #### UNDEFİNED BEHAVİOR
   ```
   
   İşaretli türlerde taşma tanımsız daranıştır.
   
   ```
   
   
   İntegral Promotion: Tam sayıya yükseltmek demektir.
   
   
   ==Multiplicative Operators==
    
   "*"  multiplication
   
  " / " division
  
  " %"  module
   
   - Binary infix operators. (ara ek)
   - Yan etkileri yok.
   
   **Dikkat:** Mod operatörünün operantları gerçek sayı türden olamaz.
   
   - Eğer ekrana %3.5 yazdırmak istersek % operatörünün escape olduğunu unutmamak lazım.
   
   double dval=3.5;
   
   printf("%% %f",dval);// ekran çıktısı %3.5
   
   #### UNDEFİNED BEHAVİOR
   
  ```
  Bölme ve mod operatörünün sağ operantı 0 olamaz. Olması durumunda tanımsız davranış olur.
  
  ```
 
  
  
  - İncreament (++) plus plus
  - Decrement  (--) minus minus
  
  - Ön ek olarak ve son ek olarak kullanılabilirler.
  ++x veya x++ şeklinde.
  
  - Bu operatörün operantı Lvalue olmak zorundadır.
  -  "++x" ifadesi rvalue'dür.
   
  -Yan etkisi vardır.
     - ++x önce x'i artır sonra x'i kullan demek.
     - x++ önce x'i kullan yan etki noktasına gelince x'i artır demek.
   
   ===Karşılaştırma Operatörleri===
   
   - İlişkisel operatörler
   - Relational Operators
   - Comparison Operators
    
   <         >          <=           >=
   
   ===Lojik Karşılaştırma Operatörleri===
   
   "== "  
   
   "!="
   
  " >" greater
  
  " <" less
  
  " >=" greater than
  
  " >= "less than
  
 - Binary infix Operators
 - Yan etkisi yok !
 
 
 
 - C dilinde karşılaştırma operatörleri int türünden değer üretirler. 
 Diğer dillerde Bool türünden değer üretilir.
 
 örnek:
 
 x=y==z; // Burada == operatörü = operatöründen daha önceliklidir. Aşağıdaki ifadeyle aynıdır.
 
 if(y==z)
 
    x=1;
    
 else 
 
    x=0;
    
  
  if(x==5) koşulunu daha güvenli kullanmak istersek 
  
  if(5==x) olarak da kullanılabilir.
  
  === Logical Operators===
  
  - Önermeler
  
  - lojik değil işlemi (!)  logical not
  - lojik ve   (&&)     logical and
  - lojik veya (||)     logical or
  
  
  
  - Short Circuit Behavior (kısa devre davranışı)
  
  örnek olarak:
  
  expr1 && expr2 // eğer expr1 değişkeni 0 ise expr2'ye bakılmaksızın sonuç olarak 0 değeri üretilir.
  expr1 || expr2 // eğer exp1 değişkeni non-zero bir değer  ise expr2'ye bakılmaksızın 1 değeri üretilir.
  
  
 Uyarı: Lojik && ve || operatörlerinde kısa devre davranışı var olmasına karşın
 bitsel & ve | operatörlerinde kısa devre davranışı söz konusu değildir.
 
 
 - De Morgan Kuralları:
 
         !(p && q) = !p || !q
	 
         !(p || P) = !p && !q
   
   
  
  
   ==Atama Operatörleri===
   
    =      atama operatörü
   
   +=       -=      *=      /=             ----> (İşlemli Atama Operatörleri)
   
   %=     >>=     <=     &=     ^=    |=    ----> (Compound Assignment Operators)
   
   - C dilinde atama operatörleri de diğer tüm operatörler gibi bir değer üretir.
   - Atama operatörünün ürettiği değer nesneye atanan değerdir.
   x=y  ifadesinin ürettiği değer y'nin değeridir.
   
   
   örnek:
   
    
       ```
    int x=10, y=24, t=5, z=7;
    x+=y+=t*=z%=5;
    // Atama operatörlerinde işlem önceliği sağdan sola olduğu için sağdan başlanarak sola doğru işlemler yapılır.
   
       ```
  
    
   ===Virgül Operatörü===
    
  - Öncelik tablosunda en son sırada. 
    - Binary infix 'dir.
    - Virgül operatörüyle oluşturulmuş ifadeler C dilinde R value olur.
    
  - Sequence Point (Yan Etki Noktası) 
           - sequencing
           - 
     Bir ifade ile oluşacak yan etkilerin gerçekleşeceği nokta.
     
    Yan etki noktaları:
    - Deyim sonu yani ilk noktalı virgülün olduğu nokta bir yan etki noktasıdır.
    - Bazı operatörlerin operandlarının değerlendirilmesinden sonra.(lojik ve, lojik veya, ternary op. , virgül operatörü)
    - Kosul operatorlerinde sonra (if, else if,while )
    
    
   Örnek olarak :
   
   ```  
  int  y=0;
    y++ || f(y); // yandaki deyimde lojik veya bir yan etki noktasına sahip olduğu için y 1 artırıldıktan 
    sonra f fonksiyonuna y değeri 1 olarak gönderilir.
    
   ```
   
   Örnek olarak :

  
     
      
       ```
        int x=10,y;
        x++ , y=x; // Bu deyimde virgül bir yan etki noktası olduğu için x değeri 1 artırılıp 
        11 olduktan sonra y değişkenine 11 olarak atanır.
      ```
    
    
    
   #### Undefined Behavior
   
    
    ``` 
     Bir yan etki noktasından önce bir yan etkiye maruz kalmış nesneyi tekrar kullanırsak bu tanımsız davranış olur.
     
     y = x++ + +x;/* burada x son ek olarak ++ operatörü kullanılarak 1 artırıldığı için x kendi değeriyle yan etki 
     noktasına kadar kullanılarak yan etki noktasında artırılacaktı. Ancak yan etki noktasına gelmeden x bir kez daha kullanıldığı için 
     tanımsız davranış görülüyor.*/
     
     y=x++ + x++;
     x = ++x ;
    ```
     
   **Bir Mülakat Sorusu:
     
      ```
      
     int x=10;
     int y = (x=7) + x;
     /*Burada yine x'e 7 ataması yapılarak bir yan etkisi vardır. Ancak bu yan etkinin oluşması için kod, yan etki noktasına ulaşmalı.
     Bu kodda yan etki noktasına ulaşılmadan x tekrar kullanılmıştır.*/
    ```
     
     
  - Her operantın ürettiği değer gibi virgül operatörü de bir değer üretir.
     Virgül operatörünün ürettiği değer sağ operantın ürettiği değerdir.
     
  örnek:
     
     ```
      
      int a,b=10,c=20;
      a=(b,c); //Burada a'ya atanan değer 20'dir.
      
      ```
      
   Block Elimination:
   
  
      if (x>20)
      {
      a++;
      b++;
      }
      
  yerine 
  
      if(x>20)
         a++,b++;
	 
   Bu bir block elimination örneğidir.
      
      
     
      
  **Dikkat :** Gerçek sayı sabitlerinin yazımında nokta yerine yanlışlıkla virgül karakterinin yazılması çok tipik bir hatadır.
      
      
  Örnek Bir Mülakat Sorusu:
       
       ```
       double x=2.5;
       
       while(x<5,0)  /*Burada tam sayı yazılırken nokta yerine virgül kullanıldığında, virgül operatörünün 
       sağ operantı değer üreteceği için while,sonsuz döngüde alır.*/
       {
       //kodlar
       }
       
        ```
	
  Örnek:
      
      
       ```
      func(x,y);// Burada fonksiyona 2 argüman gönderilmiş.
      func((x,y));// Burada ise fonksiyona 1 argüman gönderilmiş. Paranteziin içerisindeki virgül operatörünün sağ operantı gönderilmiştir.
      
       ```
      
      
      
      
  #### Değer Kategorisi (Value Category)
      
  L Value: Bellekte o ifadenin bir yere karşılık geliyor olması demektir. Sol taraf olan ifadeler nesne gösteren ifadelerdir.
  
      Bu ifadeler adres operatörünün operantı yapılabiliyor. Yani bu bellekta kalıcı bir verlığa ilişkin yeri temsil ediyor.
      
  R Value:  Bir değere sahip olabilmekle birlikte, bellekte bir yere karşılık gelmiyor. Yani bu ifadenin değeri runtime'da hesaplanıyor 
  
      olabilir ama o ifade varlık için ayrılmış bellek bloğuna karşılık gelmiyor.
      
   Nasıl anlayabiliriz: Adres operatörünün (&) operantı yapabilirsiz. Eğer oluyorsa L value olmuyorsa R value'dur.
      
      
  #### Kontrol Deyimleri (Control Statement)
     
   - İf statement
     - While statement
     - Do while statement
     - For statement
     - Switch statement
     - Goto statement
     - Return statement
     - Break statement
     - Continue statement
     
     
     
     ===İf Statement===
     
     if(expr)// Conditional expression
     
         Statement; //True Path (body)
	 
      Hatırlatma: Lojik değil ifadesinin bir yan etkisi yoktur.
      
      
       ```
      if(x != 0)
          ++a;
	  
	  
      if(x)
          ++b;
	   
	   /*Yukarıdaki iki if'in işlevi aynıdır.*/
	   
	 if(x == 0)
          ++b;
	  
	  
      if('x)
          ++b; 
	  
	  /* Yukarıdaki iki if'in işlemi de aynıdır.*/
      
       ```
       
       Örnek yazım şekilleri:
       
      
       ```
       
     -->  if (a=func(),a>10)
       {       }
       ile
       a=func();
       if(a>10)
       {  }
       
       aynıdır.
       
       
     --> if((x=func)<10)
         {    }
	 
	 
       ```
       
       
       - C dilinde Koşul ifadelerinde yapılan en sık yazım hataları:
       
       
       ```
       
       
       --> if(x==5) yerine if(x=5) yazmak.
       Lojik eşit yerine atama operatörü kullanıldığında x 'e atanan değer yani 5 üretilir.
       if koşul ifadesi olduğu için sorulan soru 0 veya 0 dışında bir değer olduğu için
       bu durumda sıfır dışında bir değer olarak algılar ve x değeri 5 olsa da olmasa da
       if'in içine girilir.
       
       -->if(5<x<20)
       Doğru yazımı if(x>5 && x<20) olacaktır.
       Matematiksel notasyon şeklinde yazıldığında ise derleyicinin algılama şekli operatör öncelik sırasına göre
       (5<x)<20 olacaktır. Bu değer de her zaman doğru olarak algılanacağı için ve sentaks hatası olmadığı için 
       problemli bir durumdur.
       
       -->if(dval>4,5) // burada yazılmak istenen gerçek sayı nokta ile değil de virgül operatörüyle ayrıldığı için
       ve virgül operatörü sağ operantının değerini üreteceği için 5 değeri de lojik doğru olarak algılandığından dolayı
       bu değer her zaman doğru olarak algılanır.
       
       -->if(func()) yerine if(func) yazılması. Sentaks hatası vermez ama istediniz işlemi yapmaz.
       
       -->if(x!=5 || x!=13)
         Bu ifade de && operatörü yerine veya operatörü kullanılmış ve her zaman doğru bir ifadedir.
	 
       -->if(x==3); Bu koşulda noktalı virgül bir ifade olduğu için if'in altındaki kodlar koşturulurken 
       if'in içerisinden çıkılmış olur.
         derleyici bu koşulu şöyle algılar:
	 if(x==3) 
	     ; //null statement
	 x=2;
	
	 ```
	 


#### Standart getchar,putchar İşlemleri


- Fonksiyon yapıları
      - int getchar(void);
      - int putchar(int);
    
- Standart giriş akımının tamponundan bir akrakter alır. (extract eder)
Ve karakter kodunu döndürür.
- scanf ve getchar fonksiyonları aynı buffer'ı kullanır. 

		```
		
		int c;
		
		printf("bir karakter girin:");
		c = getchar();
		printf("c(ascii kodu) = %d , c (girilen karakter) = %c ",c,c");
		//ekrana girilen karakterin ascii kodu ve hangi karakter girildiği yazdırılımıştır.
		
		```
	
	
Buffer (Tampon Bellek) : Ara bellek olarak adlandırılır. 
Bir cihazda verilerin topluca yazılmadan önce biriktirdikleri bellektir.
Bu işlemdeki amaç, ilgili belleğin o anda başka bir işle uğraşırken o işin bitmesini 
beklemeden emir verebilmek  başka bir deyişle hızı artırabilmek.

- getchar fonksiyonu, ekrana girilen değerin bize ascii kodunu decimal olarak gönderir.
- %c formatı ise bir karakterin ascii kodu girildiğinde o karakterin görüntüsünü yazdıran formattır.

  Örnek Soru:
  
  		```
		int c;
		
		printf("Bir giriş yapın:");
		
		while ((c=getchar()) != '\n')
		{
		     printf("%c  %d\n",c,c);
		}
		
		/* Bu programda ekrana enter(new line) karakteri giriline kadar ekrana girilen karakter ve ascii kodu yazdırılır.
		örnek giriş: 14
		
		Ekran Çıktısı: 
		
		1   49
		4   52
		
		*/
		
		
		```
		
 	Yukarıdaki soruya ek olarak ortak buffer'ı daha iyi anlamamız için ;
	
		```
		int c,x;
		
		printf("Bir giriş yapın:");
		scanf("%d",&x);
		printf("%d\n",x);
		
		
		while ((c=getchar()) != '\n')
		{
		      printf("%c  %d\n",c,c);
		}
		
		```
	Şimdi yukarıdaki koda aşağıda ekrana girilen değerler ve çıktıları verilmiştir.
	   
	           13abc   		 	12 57 		    ab12				
		   
		   
		   13				12	 	    -85456416
		   a   97			   32		    a   97
		   b   98 			5  53	   	    b   98
		   c   99    			7  55		    1   49
		   						    2   50
								    
	Görüldüğü üzere scanf ve getchar fonksiyonları ortak bellek kullanıyorlar. Ayrıca bir şeye daha dikkat 
	çekmek gerekiyor. 2 ekrana girilen 12 57 değerinde 12'yi scanf yazdırdı ve boşluk(whitespace) atomunu gördüğünde
	yazdırma işlemini durdurdu ve scanf fonksiyonundan çıktı. Sonrasında getchar fonksiyonu boşluk atomunu da yazdırdı. 
	boşluk atomu ascii de 32 kodunu aldığı için karşısına 32 yazıldı.
	Ayrıca bu kodda bir hususa daha dikkat çekmek gerekirse scanf fonksiyonu çağırılırken decimal formatta çağırılıyor 
	yani siz decimal formatta bir değer gönderip enter(new line"\n) kullanırsanız bu karakterde buffer'da kalacağı için while 
	döngüsüne gelindiğinde derleyici new line karakterini görerek while döngüsünün içine girmeden geçer.
	
	
	
	  
	            ```
		    
		    int c;
		    int sum = 0;

	            printf("bir tamsayi giriniz:");

		    while ((c = getchar()) != '\n')
	 	    {
			sum += c - '0';
		    }

		    printf("sum = %d\n", sum);

		    if (sum % 3 == 0)
				printf("evet tam bolunur\n");
		    else
				printf("hayir tam bolunmez:");

		    ```
   Açıklama: Yukarıdaki programda getchar foksiyonu girilen karakterin ascii kodunu girdiği için c'ye atanan değer bir 
   rakamın ascii kodu olur. Bu kod 0'ın kodu olan 48 den çıkarılırsa tam olarak o rakam elde edilir. Bu yüzde c-'0' olarak kullanılmıştır.
   
   
   
   - Tıpkı scanf fonksiyonunda olduğu gibi getchar fonksiyonu da standart inputun buffer'ı boş ise -1 değerini döndürür.
   
   
   - Echo nedir?  
         - Echo girilen karakter ekranda gözükmesine echo denir. Bu sebeple şifre fonksiyonları echo vermeyen fonksiyonlar
         olarak kullanılır.
	 
   
   - getchar' a benzer 2 adet standart olmayan <conio.h> kütüphanesinde fonksiyon vardır.
                  - int _getch(void)
                  - int _getche (void)
                  
	
	Hatırlatma: Line-buffered func new line karakterini görene kadar değer almayan fonksiyondur.
	
    - Bu üç fonksiyonu kıyaslarsak;
    		- getchar() -->  standart kütüphanede / line-Buffered func/ Echo veriyor
    		- _getch()  --> standart kütüphanede değil/ line-buffered değil/echo vermiyor
    		- _getche() --> standard kütüphanede değil/line-buffered değil/ echo veriyor
     
     
     Parola Örneği:
	 
	 			```
		   		#define _CRT_SECURE_NO_WARNINGS

				#include <stdio.h>
				#include <math.h>
				#include <stdlib.h>
				#include <conio.h>





				int main()
				{
					int c1, c2, c3,c4;

					printf("parolayi giriniz:");

					c1 = _getch();
					printf("*");
					c2 = _getch();
					printf("*");
					c3 = _getch();
					printf("*");
					c4 = _getch();
					printf("*");

					printf("\n parola : %c %c %c %c", c1, c2, c3, c4);

	
				}

		
			
				```
	 
	 
	 - int putchar(int);
	 
	 - putchar sizden bir sayı alıyor ve bu sayıyı karakter kodlamsına göre ekrana yazdırıyor.
	 - getchar, standard bufferdan bir karakter alıp onun karakter sayısını yazdırıyor.
	 
	 
	 		- c1=getchar();//ekrana A yazılırsa 65 sayısını c'ye atar. Giriş Fonksiyonudur.
	 		- c2=putchar(65)// 65 sayısını fonksiyona gönderir ve ekrana A yazdırır. Çıkış fonksiyonudur.



	
	 
	 
	 
#### Ders 14 - Tarih 05.03.2021
	 
	 - Modül bir kütüphanenin modüllerine verilen değerler isimdir.
	 
	 - <ctype.h> 
	 
	 Test fonksiyonları
	 
	 - White space karakterleri:

	 '\n'  , ' ' , '\t' , '\v' , '\f' , '\r'
	 
	 - <ctype.h> kütüphanesi hangi fonksiyonları içerir.
	  
	 -  int isupper(int c);  -->  büyük harf mi?
	 -  int isalpha(int c); -->küçük harf mi?
	 -  int digit (int c);  -->rakam mı?
	 -  int alnum (int c);  -->alpha-numeric mi?
	 -  int isxdigit (int c);  -->hex mi 
	 -  int space(int c);      -->white space mi?
	 -  int ispunct(int c);
	 -  int print(int c);
	 -  int isgraph(int c);
	 -  int isblank(int c);
	 -  int iscntrl(int c);

          
	 
	 Örnek:
	 
	 - İki sayının aynı anda asal olup olmadığına göre koşul içeren bir kod yazalım.


	```
	
	int a,b
	printf("iki tam sayı giriniz:")
	scanf("%d%d",&a,&b);
	
	if(isprime(a) == isprime(b))
        /*if'in içerisindeki koşul böümünü böyle kullanırsak isprime fonksiyonu,
	test fonksiyonu olduğu için sıfır veya sıfır dışında bir değer gönderecektir.
	BU değer eğer sıfır dışında bir değer ise  1 olmak zorunda değildir. Bu da koşulu düzgün 
	kullanmamıza engel olabilir. Bunun yerine aşağıdaki if koşulu şeklinde kullanılabilir.*/
	
	if(!!isprime(a) == !!isprime(b))
	//şeklinde kullanım daha doğru olacaktır.
	
	
	```
	
	
- Ayrıca <ctype.h> fonksiyonun içerisinde büyük harfden küçük harfe ve büyük harften küçük harfe dönüştüren fonksiyonlar vardır.
	   
	       
    - int toupper(int);
    - int tolower(int);
 	
	Örnek: 
	
	```
	
	   #include <ctype.h>
	
	   int ch;
	
	    print ("bir karakter girin:");
	    ch = getchar();
	    printf("%c ==> %c\n",ch,toupper(ch));
	
	
	```
	Ekran Çıktısı:
	
	
	```
	                                    
	      h ==> H  //Eğer h değeri girilmişse.
	
	```
	


 	
	- Basit bir hileyle klavyeyi belirli bir karakter grubu dışındaki 
	 karakterlere kilitleyebiliriz.
	 
	     ```
	     #include<ctype.h>
	     int main()
	     {
	           for(;;)
	           {
	           int c=_getch();
		   
	           if(isxdigit(c))
	           	putchar(c);
             	   }
	     }
	     
	     
	     // Bu program ekrana sadece hex sayı formatında yazdırır.
	     ```
	     
	- Clamp nedir?
	  Bir aralık belirtilir ve bu aralığın dışında olan değerler üst sınırın üzerindeyse üst sınır değeri olarak algılanır.
	  Alt sınırın altındaysa alt sınır değeri olarak algılanır. Örnek vermek gerekirse 18,36 sınır değerleri olsun
	  eğer 20 sayısı girilirse o sayı 20 olarak kullanılır. Eğer 39 girilirse o sayı 36 olarak, 15 girilirse 18 olarak kullanılır.
	  
	 
	 
	
     #### Ternary Operator (Koşul Operatörü)
	
	
	- Conditional Operator
	- Bazı programlama dillerinde var her porgramlama dilinde yok.
	- 3 operant alan operatör
	- Bu operatörün 2 tane token'ı var.
	               - op1 ? op2 : op3
	-Atama ve virgül operatörlerinden daha öncelikli, diğer tüm operatörler daha öncelikli.
	
	- Op1 lojik yorumlamaya tabi tutulur. 
	                     - Eğer lojik doğru (non-zero) ise op2 elde edilir.
	                     - Eğer lojik yanlış ise op3 elde edilir.
	                      
	- Birinci operattan sonra yan etki noktası (sequence point) vardır.
	
	Örnek:
	
	     ```
	      m = x > 10 ? a : b
	     //x >10 ise m'ye a'yı ata, değil ise m'ye b'yi ata.
	     
	     
	     a > b ? a : b;
	     // İki sayıdan büyük olanı üretir.
	     
	     
	     
	     x > 0 ? x : -x
	     // Mutlakk değer alma
	     
	     
	     a++ > b ? a : b
	     // Sequence point'i olduğu unutulmamalıdır.
	     // a ile b'nin ilk değerine göre karşılaştırma yapılır sonra artan değeri üretilir.
	          
	     
	     ```
	    
#### Ders 15- 08/03/2021

 #### Loop Statement 
 
 - While 
 - Do while 
 - For

	  - break 
	  - continue
	  	
	
- Genellikle yanlış yapılan bir mülakat sorusu:
 
 		  int i=0;
                  while (i++<100);
		  	printf("%d",i);
-> Yukarıdaki kodda küme parentezi kullanılmadığı için ilk deyim olarak ; alınmıştır.  Ve i++ olduğu için while'dan çıkıldığında i=101 olur.




- n Klavyeden girilen bir sayı olsun. 
	- while(n--) ile while(n--<0) arasında bir fark yoktur.




- Maksimum munch kuralı :
		int z= x+++y;
Burada x++ derleyicinin algılayabileceği en uzun atom olduğu için x++ +y olarak tokenize edilir.



Örnek: 
```
	int power(int base, int exp)
	{
		int result =1;
		while(expr--)
			result *=base;
			
		return result ;
	}
	
	int main()
	{
		int x,y;
		printf("iki tam sayı giriniz:);
		scanf("%d%d",&x,&y);
		printf("%d ussu %d =%d\n",x,y,power(x,y));
		
	}
```
#


- Bir döngüden hangi biçimlerde çıkılır:
	- Kontrol ifadesinin yanlış olması.
	- Döngü gövdesi içinde return deyiminin yürütülmesi.
	- Break Statement.
	- Goto Statement.

- Programın sonlandırılmasını sağlayan bazı C fonksiyonları:
	- abord();
	- exit();

- Break Statement:
 	- Geçerli olabilmesi için ya bir döngü deyiminin gövdesinde, ya da switch deyiminin gövdesinde olması gerekiyor.
	
- Sonsuz Döngü idiomu - infinite Loop

Örnek: 
```
		
		int i=1,n=5;
		
		while (i<100)
		{
			if(i % n == 0);
			{
				printf("%d",i);
				i++;
			}
		}
		//i'nin yeri yanlış yazıldığı için ilk döngüye 1 ile başlayıp if'e giremediği için sonsuz döngüde kalır.
```

#

Örnek:  e ya da h tuşları dışında bir tuşa basıldığında program tepki vermeyecek. Sadece e ya da h tuşlarına 
basıldığında döngüden çıkacak.


```
#include <conio.h>

int ch;
printf("evet mi hayir mi ? (e) (h)");
while(1)
{
	ch=_getch();
	if(ch == 'e' || ch == 'h')
		break;
}

putchar(ch);

if(ch == 'e')
	printf("\n ever dediniz.\n");
	
else
	prinf("\n hayir dediniz\n");
	
	
///Yukarıdaki koda alternatif olarak :

	while((ch == _getch()) !='e' && ch != 'h')
		;  //Null Statement

```


#

- Nested Loops (İç içe döngüler)

- Break deyimi sadece içinde bulunduğu döngüden çıkış yapar.

- Eğer biz bulunulan iç içe döngüden en dışa çıkmak istersek;
	flags (Bayrak) değişkenleri kullanabiliriz.

		

Peki bayrakları nasıl kullanabiliriz?

```
flag=0
while( ---)
{
	statement;
	statement;
	statement;
	while(---)
	{
		if(exp)
		{
			flags=1;
			break;
		}
	}
	
	if(flag)///-------> Burada flag kontrol edildi ve eğer break sebebi ile geliyorsa ikinci break atılıdı.
		break;
}

```


#

- Break yerine programın herhangi bir yerinde goto deyimi kullanılarak gidilecek etiket belirlenip istenilen noktaya ulaşılabilir.
	etiket-label
	
	

- Continue statement 
	- Yardımcı bir kontrol deyimi
	- Continue sadece döngü deyimlerinin gövdelerinde kullanılır. 
		- break ;(loops/switch)
		- continue; (just loops)
	- Continue deyiminin yürütülmesi döngünün kalan kısmını by-pass ediyor yani kalan kısmı yapılmış gibi diğer tura geçiyor.




- if ile alakalı bir not:
 	- if(val <= 0 )
 		return val;
	  else 
	  	return val;
		//burada else yazmakla yazmamak arasında bir fark yoktur. (gizli else)
			- redundant else 
			- redundancy = fuzuli



- Basit bir mülakat sorusu: Aşağıdaki kodda yanlışlık nerededir.
 
```
	if(x != 0)
		y=x;
	else 
		y=0; // if kullanılmasına gerek yoktur. bu kodun karşılığı zaten y=x'dir.
		
		
```

#

- Klavye Kısaltmaları:
	- ctrl k c -> açıklama satırı yap
	- ctrl k u -> açıklama satırını kaldır.
	- ctrl shift L -> bulunan satırı direk siler.
	- ctrl D -> bulunan satırı aşağıya kopyalar.
	- shft alt -> satırsal olarak seçip satırsal olarak işlem yapabiliriz.
	
	
	
	
	
-For statement
	- for(expr1 ; expr2 ;expr3)
	- Eğer expr2'ye hiç birşey yazılmazsa lojik 1 kabul edilir.
	- for(;;) -> infinite loop  <- while(1)
	 
		
	
	
#### Ders 16 Tarih 10/03/2021


Örnek:

```

	int x;
	scanf("%d",&x);
	
	if(x>10)
		a=5;
	else 
		a=7;
	// Burada  a' ya ilk değer ataması ypılmak istenmiş, ancak scope farklılığı sebebiyle doğru bir kullanım olmamıştır.
	
	Bunun yerine  a = x<10 ? 5: 7; daha doğru bir kullanımdır.
 			- Koşul operatörünün ilk değer verme amaçlı kullanımı oldukça yaygındır.
 ```
 
 #
	
	
Örnek :  Aşağıdaki kodda ya bir karakter ekleyerek ya da bu kodda bir karakteri değiştirerek ekrana 5 kere something yazdırılacaktır.

```
	int n=5;
	for(int i=0; i<n; i--)
		printf("something\n");
		
	// cevap:
		- i<n ifadesinde i yerine -i yazmak.
		- i<n ifadesinde < yerine + yazmak.
		- i-- yerine n-- yazmak.
```


#


			





  
	
	
	


	     
	     
	     
	


           

   
   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
