
# Token (Atom)

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


#
 
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

 #
 
 Storage Duration (Ömür)

 - Automatic storage class
 
 - Static storage class
 
 - Dynamic storage class


 Automatic storage duration: Bu nesneler, programın akışı programın 
 çalışma zamanında bir fonksiyona girdiğinde bunlar belleğe yerleşir. Programın
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

 - Statik ömürlü değişkenlerde ilk değer ataması yapılırken sabit ifadesi
 olması gerekir.
 
 Bir nesne Global Değişken ise statik ömürlüdür. Local değişkenler
 otomatik ömürlüdür. Ancak static anahtar kelimesi ile tanımlandığında static
 ömürlü olur. Static ömürlü değişkenler hayata 0 değeri ile başlarlar.
 
 ```
 -> Static ömürlü değişkene ilk değer başlatması yapılırken sabit ifade 
 kullanılmalıdır.
 int x=10+20;// global alanda yazılan bu kod kabul görür.
 int y=x;// ancak bu kod hatalıdır çünkü y 'ye değişken ilk değer
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

Bu sebeple mümkün olan her yerde değişkenlere ilk değer ifadesi verilmelidir.



#


 declare-declaration //Bildirim
 
 define-defination // tanımlama

 Bildirim ismin ne türde oldluğunu anlatan cümledir.
 Eğer bildirim sonucunda derleyici bellekte yer alıyorsa bu tanımlamadır.


 #
 
 Scope (kapsam)

 Bir tanımlayıcının kapsamı, tanımlayıcının (Identifiers) doğrudan 
 erişebildiği programın bir parçasıdır. C'de tüm tanımlayıcılar kapsamlıdır.

 File scope: Bir tanımlayıcının dosya kapsamı, dosyanın başlangıcından
 başlar ve dosyanın sonunda sona erer.

 Block Scope: Bir tanımlayıcının kapsamı, "{" bloğun açılmasıyla başlar ve "}"
 bloğun bitmesiyle sonunda sona erer. Blok kapsamına sahip tanımlayıcılar kendi blokları
 içinde yereldir.
 
```
 #include <stdio.h>

 int x; 

 int main()
 {

 int x; 

 /*  Burada bir programda aynı iki isim kullanılmış ancak
 kapsamları farklıdır. Bu durumda program sentaks hatası vermez ancak
 kullanım açısından doğru bir kullanım değildir. */
 
 }
 
```
 

 # Look Up(isim arama)


```
  #include <stdio.h>
  
  int x = 20;

  int main()
  {
  int x = 10;

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

  // Program printf'i main fonksiyonu içerisinde int olarak tanımlandı.
  Sonra printf fonksiyonunu ilk algıladığında keywords olmadığı için
  name look-up yaparken kendi kapsamında arama yapar. Bu kapsamda printf 
  int olarak tanımlandığı için bu kod hata verir.
  Normalde int olarak tanımlanmasaydı printf'i  ilk okuduğunda isim araması 
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
  #
  
 # Function (Fonksiyonlar) "method, procedure, yordam, altprogram"
 

 
  - to define a function 
  - to call a function
  - to declare a fuction


  double func (int x , int y);

  // Burada "double", fonksiyonun geri dönüş türü (the type of return value).
  
  //"func", fonksiyon ismi.
  
  // "Parantezler", parametre parantezi.
  
  //int x, int y ise parametre değişkenleri (formal parameters) 


  Örnek olarak;
  

  int func(void)   ile int func() aynıdır. Buradaki void fonksiyonun 
  parametre değişkeninin olmadığı anlamına gelir. Void kullanılmasada 
  fonksiyonun parametre değişkeni yoktur.
  Ancak Void kullanılmasının C'de bir avantajı vardır.
  ilerleyen derslerde göreceğiz.

  #
  
  statement

  - expression statement (ifade deyimi)
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

 // if koşulu gibi block içerisindeki deyimlerin bütününe compound (bileşik) 
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
 
 #

 Return statement
 
 a-) Bir fonksiyonun kodunun çalışmasını sonlandırmak için
 
 b-) Fonksiyonun kendisini çağıran koda (iletecek ise) bir değer iletmesini
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

	 //void function: A function doesn't have return value. Geri dönüş mekanizması
 	   ile bir değer gönderilmeyeceği anlamına gelir.
	   
  ```

 örnek olarak :
 
  ```
  
 void func (void)
 {
 // statement
 //statement
 
  if(exp)
      return ;// bu bir yalın return statement'dır.
      
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

**Not:** C programlama dilinde bir fonksiyon içerisinde bir fonksiyon 
tanımlanamaz. Tüm fonksiyonlar global isim alanında olmalıdır.
Yani C'de nested func ve local func yok.

- Ayrıca C'de global isim alanında bir fonksiyon çağırılamaz.

Test function: Return statement test fonksiyonlarında soruya cevap
vermek amacıyla da kullanılır. Evet/hayır gibi sorular.
	- query function

- Genellikle C'de _bool yerine int geri dönüş değerleri kullanılır.
Eğer geri dönüş değeri sıfır dışı bir değer ise (non-zero value) lojik doğru
anlamına gelmektedir. Eğer sıfır değeri gönderilmişse yanlış olduğu anlamına 
gelir.

- Fonksiyonu çağıran kodun, çağırılan fonksiyonun bir geri dönüş değeri 
olmasına karşın bu geri dönüş değerini kullanılmamasına "to discard the return
value" denir.

- Başarı bilgisi olarak kullanılabilir. Herhangi bir hata durumunda koşul 
ifadeleri ile hata dönütü sağlayabilir.

Eğer toparlarsak bir fonksiyonun geri dönüş değeri neler olabilir?

- Hesaplanan bir değer
- Test fonksiyonları
- Tamamlayıcı bir değer
- Başarı bilgisi
- Ya da hiç olmayabilir (void func)

#

# Fonksiyon çağrıları (to call a function)

Parantez operatörü ile sağlanır.

func() -> bu bir ifadedir. 

Eğer çağırılan fonksiyonun parametre 
değişkeni yoksa bu parantezin içerisine bir argüman yazmak sentaks hatasıdır.
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
Fakat bu özellik dilden dile değişir.


Call by value olduğuna dair bir örnek:

```
int foo(int x)
{
x = 99;
return x;
}

int main()
{
int x = 10,y;
printf(" x = %d\n ",x);
y = foo(x);
printf(" x = %d\n ",x);
}
```
// Yukarıdaki programda ikinci printf değeri ile yazdırılan x değeri 10'dur.
çünkü x Değeri foo fonksiyonundaki a değerine atanmaz kopyalanır.
Yani foo(x) ifadesi 99'dur. x gönderilen bir ifade ve foo(x) gelen ifadedir.



# Standart Kütüphane (Standard Library)

- Printf standart bir C fonksiyonudur.
- Standart kütüphane alt birimlere bölünmüştür (module).

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
# CONSTANT (SABİTLER)

- İnteger  Constant ( Tam sayı sabitleri)
- Floating Constant ( Gerçek sayı sabitleri)


Sabitlerin türleri olması gerekir.

- Tam sayı sabitlerinin yazımında 3 farklı sayı sistemi kullanılabilir.
      - Hexadecimal (Onaltılık sayı sistemi)
      - Decimal     (Onluk sayı sistemi)
      - Octal       (Sekizlik sayı sistemi)

x=123; //decimal

x=0123; //octal

x=0x13; //hexadecimal

**Sabitlerin Türleri:**

- Signed int => 783
- Unsigned int => 783U

- Signed long => 7834L ya da 7834l
- Unsigned long => 7834UL -ul

- Signed long long => 7833LL
- Unsigned long long => 7833LLU -ULL

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

# KARAKTER SABİTLERİ (STRİNG LİTERALS)

C'de karakter sabitlerinin türü int'dir.

"Rasit" --> String Literals

- 'A' Bu karakter, sistemde kullanılan karakter kodlamasında (character encoding)
gerçekleşerek bu karakterin kod numarası tutulur.

'A'---> 65 --ASCII

**Not:** ASCII karakter kodlamasında büyük harf ve küçük harf sıralaması tek bir blok halinde değildir.
Sebebi ise büyük harf ile küçük harf arasındaki sayı farkını 32 yani 2^5 yapabilmektir. 
Böylece bitsel işlemlerde büyük-küçük harf değişimi tek bir biti set-reset yapılarak sağlanabilmektedir.

- Karakter kodlamalarında, harf karakterine Alphabetic Character,
Rakam kodlamalarına ise Numeric/Digit Character denilir.
Alpha-Numeric Character ikisini içeren bir kümedir.

- Control Character: Kontrol karakterleri görüntüsü olmayan özel araçlarla kullanılan karakterlerdir.
Mesela Space, Enter gibi.

- Printable Character: Görüntüsü olan karakterlerdir.

- Punctation Character: Görüntüsü olan ama Alpha-Numeric olmayan karakterlerdir.
	- Mesela . , ! ' ^ gibi karakterler.


- Escape (Kaçış) 
	- Escape Sequence (Kaçış Noktası)

 Bir kodlamada eğer bir karakter özel bir anlamda kullanılıyorsa o karaktere "escape" denir.
 
 \ --> escape olarak kullanıyoruz.
 
 '\'  ---> Yani biz tırnak içerisinde ters bölü yazdığımızda bu ters bölü karakterinin kodu değil
 sadece escape olduğunu ve ayrı bir kurala göre değerlendirilmesi gerektiğini anlıyoruz.
 
- '\a' --> alert(bell)
 
- '\t' --> horizantal tab
 
- '\v' --> vertical tab
 
- '\n' --> new line
 
- '\r' --> carriage return
 
- '\f' --> form feed
 
- '\b' --> back space
 
- '\o' --> null character
 
- '\'' --> single quote
 
- '"' veya '\"' --> double quote
 
- '\' veya '\\' --> backslach
 
- '\?' veya '?' --> question mark
 
 
 # İNPUT-OUTPUT OPERATİON
 
 
- Bir program çalışır haldeyken dış dünya ile veri alış-verişi 
sağlamasına denir.
    - standard input stream (klavye)
    - sandart output stream (consol a  bağlı)
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

# PRİNTF FONKSİYONU

Printf fonksiyonu stdio kütüphanesinde bildirilen formatlı çıkış fonksiyonudur.

Tanımlanma şekli:

int printf(const char*p,...);

- C'de yazılar dizilerde tutuluyor. Dizilerin fonksiyonlara gönderilmesi "Call By Referance" biçiminde olmak zorundadır.
Bu yüzden bir fonksiyona bir yazıyı göndermenin yolu yazıyı tutan adresi göndermektir.

Printf fonksiyonu tanımlanırken *p gönderilecek olan adresi ifade etmektedir. 

Yani bir pointer olmasının sebebi bir yazıyı isterken aslında yazının tutulan char dizisinin adresini istiyor olmasıdır.

... ise bu fonksiyonun variadic olduğunu ifade etmektedir.

Printf fonksiyonun sayı sistemlerinin formatları:

%d -->decimal--int türden

%0  --> Octal

%x  --> hexadecimal--sign/unsign int türden

%Ld --> long türden 10 luk sayı sistemi

%u  --> unsigned int

%f  --> double  ve float türünde

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
    3 basamaklı olduğu için 3 sayısı yazılır. Bir kez daha yürütüldüğünde 3 sayısı 1 karakterli olduğu için 
    1 sayısı yazdırılır. */
    - Ekran çıktısı: 
    		98731     olur.

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

# SCANF FONKSİYONU

İnt scanf(const char*p,...);

- Scanf fonksiyonu call by referance olmak zorundadır.
	- örnek olarak scanf("%d",&x); &x kullanılmasının sebebi call by referance olmasıdır.

- Scanf fonksiyonu Satır Tamponlu (Line-Buffered) yapıdadır.
	- Yani new-line karakteri gelene kadar devam eder.

- Örnek olarak :

scanf("%d",&x); Yazıldığında ekrana giriş olarak 1234abc yazıldığında 
ekrana sadece 1234 yazılır. Çünkü %d formatı onluk sayı sisteminde bir tam sayı girilecek demektir.

scanf'in geri dönüş değeri başarılı olup olmadığını anlatmaktadır.

**Uyarı:** Scanf çağrısı yapıldığında standard inputun buffer'ı boş değil ise giriş için bir karakter girilmesi
beklenmez. Bu durumda scanf, standart inputun bufferındaki karakterleri kullanır.


 # OPERATÖRLER (OPERATORS)

- İşleçler
- İşlemci

- C'de 45 tane operatör vardır.
- Sizeof hem anahtar sözcük hem de operatördür.

- a + b --> burada + bir operatör, a ve b operanttır.
- unary operator   --> tek terimli operatör
- binary operator  --> çift terimli operator
- ternary operator --> 3 terimli operator

- a+b  ----> + operatorü ortada olduğu için bu operator burada infix konumda kullanılmıştır.
- !x   ----> burada ! operatörü başta olduğu için prefix konumunda kullanılmıştır.
- y++  ----> burada ++ operatörü sonda kullanıldığı için postfix konumunda kullanılmıştır.

Örnek olarak:

- a+b --> binary infix
- !x  --> unary prefix
- y++ --> unary postfix


- Her operatörün ürettiği bir değer vardır.(Operators generate value),(generate yerine yield,return kullanılabiliyor.)
8*5=40 --> Burada 40 değeri çarpma operatörünün ürettiği değerdir.

- Constraint = Operatörlerle ilgili uyulması gereken kurallara verilen ad'dır.
- Constant(sabit)
 

#### Operatör Önceliği

- precedence
- priority

- Operatör önceliği hangi işlemin daha önce yapılacağını belirleyen kurallar değildir.
- Operatör önceliği bir ifade içinde birden fazla operatör yer aldığında hangi operatörün 
ürettiği değer, hangi operatörün operantı olacağını belirliyor.


# OPERATÖR ÖNCELİK TABLOSU

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

"+" ---> +x veya a+b , +x işaret belirtir. a+b 'deki + ise toplama işlemi.

"*" ---> *ptr (Pointer), a*b(çarpma)

"&" ---> &x (adres tanımlama) , x&y (bitsel işlemler)


- Associativity (öncelik yönü)
   - left associative (soldan sağa)
   - right associative (sağdan sola)

- Side Effect (Yan etki) 
    - !x burada lojik değil operatörünün yan etkisi yoktur. Yani x değişkeninde herhangi bir değişiklik olmaz.
    - ++x burada artı artı operatörünün bir yan etkisi vardır ve x'i 1 artırmıştır.
   
   
   
   **Addition Subtraction (+,-)
   
   - Binary infix operatörlerdir.
   - Ürettikleri değer toplamı ya da farkı olur.
   - Yan etkileri yoktur.
   
   
   #### UNDEFİNED BEHAVİOR
   ```
   
   İşaretli türlerde taşma tanımsız daranıştır.
   
   ```
   
   
   İntegral Promotion: Tam sayıya yükseltmek demektir.
   
   
   **Multiplicative Operators
    
  - "*"  multiplication
   
  - " / " division
  
  - " %"  module
  
   
   - Binary infix operators. (ara ek)
   - Yan etkileri yok.
   
   **Dikkat:** Mod operatörünün operantları gerçek sayı türden olamaz.
   
   - Eğer ekrana %3.5 yazdırmak istersek % operatörünün escape olduğunu unutmamak lazım.
   
   ```
   	double dval=3.5;
   
  	 printf("%% %f",dval);// ekran çıktısı %3.5
   ```
   
   #### UNDEFİNED BEHAVİOR
   
  ```
	  Bölme ve mod operatörünün sağ operantı 0 olamaz. Olması durumunda tanımsız davranış olur.
  
  ```
 
  
  
  - İncreament (++) plus plus
  - Decrement  (--) minus minus
  
  - Ön ek olarak ve son ek olarak kullanılabilirler.
   	- ++x veya x++ şeklinde.
  
  - Bu operatörün operantı Lvalue olmak zorundadır.
  	- "++x" ifadesi rvalue'dür.
   
  - Yan etkisi vardır.
   	- ++x önce x'i artır sonra x'i kullan demek.
   	- x++ önce x'i kullan yan etki noktasına gelince x'i artır demek.
   
  #### Karşılaştırma Operatörleri
   
   - İlişkisel operatörler
   - Relational Operators
   - Comparison Operators
    
   <         >          <=           >=
   
   **Lojik Karşılaştırma Operatörleri
   
  " == "  
   
  " != "
   
  " > " greater
  
  " < " less
  
  " >= " greater than
  
  " >= "less than
  
 - Binary infix Operators
 - Yan etkisi yok !
 
 
 
 - C dilinde karşılaştırma operatörleri int türünden değer üretirler. 
 Diğer dillerde Bool türünden değer üretilir.
 
 örnek:
 ```
 x=y==z; // Burada == operatörü = operatöründen daha önceliklidir. Aşağıdaki ifadeyle aynıdır.
 
 if(y==z)
 
    x=1;
    
 else 
 
    x=0;
    
  ```
  
  #
  
  if(x==5) koşulunu daha güvenli kullanmak istersek 
  
  if(5==x) olarak da kullanılabilir.
  
  #
  
  **Logical Operators
  
  - Önermeler
  
  - lojik değil işlemi (!) ( logical not)
  - lojik ve   (&&)        ( logical and )
  - lojik veya (||)        ( logical or )
  
  
  
  - Short Circuit Behavior (kısa devre davranışı)
  
  Kısa devre davranışına örnek olarak:
  
  expr1 && expr2 // eğer expr1 değişkeni 0 ise expr2'ye bakılmaksızın sonuç olarak 0 değeri üretilir.
  expr1 || expr2 // eğer exp1 değişkeni non-zero bir değer  ise expr2'ye bakılmaksızın 1 değeri üretilir.
  
  
**Uyarı: Lojik && ve || operatörlerinde kısa devre davranışı var olmasına karşın,
 bitsel & ve | operatörlerinde kısa devre davranışı söz konusu değildir.
 
 
 - De Morgan Kuralları:
 
         !(p && q) = !p || !q
	 
         !(p || P) = !p && !q
   
   
  
  
   #### Atama Operatörleri
   
    =      atama operatörü
   
   +=       -=      *=      /=             ----> (İşlemli Atama Operatörleri)
   
   %=     >>=     <=     &=     ^=    |=    ----> (Compound Assignment Operators)
   
   - C dilinde atama operatörleri de diğer tüm operatörler gibi bir değer üretir.
   - Atama operatörünün ürettiği değer nesneye atanan değerdir.
   x=y  ifadesinin ürettiği değer, x'e atanan değer olan y'nin değeridir.
   
   
   örnek:
   
    
   ```
    int x=10, y=24, t=5, z=7;
    x+=y+=t*=z%=5;
    // Atama operatörlerinde işlem önceliği sağdan sola olduğu için sağdan başlanarak sola doğru işlemler yapılır.
   //Sonuç olarak x=44 , y=34 , z=2 , t=10 değerleri atanmış olur.
   ```
  
    
   **Virgül Operatörü
    
  - Öncelik tablosunda en son sırada. 
  - Binary infix 'dir.
  - Virgül operatörüyle oluşturulmuş ifadeler C dilinde R value olur.
    
  - Sequence Point (Yan Etki Noktası) 
           - sequencing
           
     Bir ifade ile oluşacak yan etkilerin gerçekleşeceği nokta.
     
    Yan etki noktaları:
    - Deyim sonu yani ilk noktalı virgülün olduğu nokta bir yan etki noktasıdır.
    - Bazı operatörlerin operandlarının değerlendirilmesinden sonra.(lojik ve (&&), lojik veya(||), ternary op. , virgül operatörü)
    - Kosul operatorlerinde sonra (if, else if,while )
    
    
   Örnek olarak :
   
   ```  
  int  y=0;
    y++ || f(y); // yandaki deyimde lojik veya bir yan etki noktasına sahip olduğu için y, 1 artırıldıktan 
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
    		- Virgül operatörünün ürettiği değer sağ operantın ürettiği değerdir.
     
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
       
       while(x < 5,0)  /*Burada tam sayı yazılırken nokta yerine virgül kullanıldığında, virgül operatörünün 
       sağ operantı değer üreteceği için while,sonsuz döngüde alır.*/
       {
       		//kodlar
       }
       
        ```
	
  Örnek:
      
      
       ```
      func(x,y); // Burada fonksiyona 2 argüman gönderilmiş.
      func((x,y)); // Burada ise fonksiyona 1 argüman gönderilmiş. Parantezin içerisindeki virgül operatörünün sağ operantı gönderilmiştir.
      
       ```
      
      
      
      
  # Değer Kategorisi (Value Category)
      
  L Value: Bellekte o ifadenin bir yere karşılık geliyor olması demektir. Sol taraf olan ifadeler nesne gösteren ifadelerdir.
  	 Bu ifadeler adres operatörünün operantı yapılabiliyor. Yani bu bellekta kalıcı bir verlığa ilişkin yeri temsil ediyor.
      
  R Value:  Bir değere sahip olabilmekle birlikte, bellekte bir yere karşılık gelmiyor. Yani bu ifadenin değeri runtime'da hesaplanıyor 
  	olabilir ama o ifade varlık için ayrılmış bellek bloğuna karşılık gelmiyor.
      
   Nasıl anlayabiliriz: Adres operatörünün (&) operantı yapabilirsiz. Eğer oluyorsa L value olmuyorsa R value'dur.
      
      
  # Kontrol Deyimleri (Control Statement)
     
   - İf statement
   - While statement
   - Do while statement
   - For statement
   - Switch statement
   - Goto statement
   - Return statement
   - Break statement
   - Continue statement
     
     
     
     **İf Statement
     
     if(expr) // Conditional expression
     
 		 Statement; //True Path (body)
	 
      Hatırlatma: Lojik değil ifadesinin bir yan etkisi yoktur.
      
      
       ```
      if(x != 0)
          ++a;
	  
	  
      if(x)
          ++b;
	   
	   /* Yukarıdaki iki if'in işlevi aynıdır. */
	   
      
      
      if(x == 0)
          ++b;
	  
	  
      if(!x)
          ++b; 
	  
	  /* Yukarıdaki iki if'in işlemi de aynıdır. */
      
       ```
       
       Örnek yazım şekilleri:
       
      
       ```
       
     --->  if (a=func(),a>10)
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
       if'in içine girilir. Bu hatadan kaçınmak için if(5==x) şeklinde kullanım söz konusudur.
       
       --> if(5<x<20)
       Doğru yazımı if(x>5 && x<20) olacaktır.
       Matematiksel notasyon şeklinde yazıldığında ise derleyicinin algılama şekli operatör öncelik sırasına göre
       (5<x)<20 olacaktır. Bu değer de her zaman doğru olarak algılanacağı için ve sentaks hatası olmadığı için 
       problemli bir durumdur.
       
       --> if(dval>4,5) // burada yazılmak istenen gerçek sayı nokta ile değil de virgül operatörüyle ayrıldığı için
       ve virgül operatörü sağ operantının değerini üreteceği için 5 değeri de lojik doğru olarak algılandığından dolayı
       bu değer her zaman doğru olarak algılanır.
       
       -->if(func()) yerine if(func) yazılması. Sentaks hatası vermez ama istediniz işlemi yapmaz.
       
       -->if(x!=5 || x!=13)
         Bu ifade de && operatörü yerine veya operatörü kullanılmış ve her zaman doğru bir ifadedir.
	 
       -->if(x == 3); Bu koşulda noktalı virgül bir ifade olduğu için if'in altındaki kodlar koşturulurken 
       if'in içerisinden çıkılmış olur.
         derleyici bu koşulu şöyle algılar:
	 if(x==3) 
	     ; //null statement
	 x=2;
	
	 ```
	 


# Standart getchar,putchar İşlemleri


- Fonksiyon yapıları
      - int getchar(void);
      - int putchar(int);
    
- Standart giriş akımının tamponundan bir karakter alır. (extract eder)
Ve karakter kodunu döndürür.
- scanf ve getchar fonksiyonları aynı buffer'ı kullanır. 

		```
		
		int c;
		
		printf("bir karakter girin:");
		c = getchar();
		printf("c(ascii kodu) = %d , c (girilen karakter) = %c ",c,c);
		//ekrana girilen karakterin ascii kodu ve hangi karakter girildiği yazdırılmıştır.
		
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
	çekmek gerekiyor. 2. ekrana girilen 12 57 değerinde 12'yi scanf yazdırdı ve boşluk(whitespace) atomunu gördüğünde
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
   rakamın ascii kodu olur. Bu kod 0'ın kodu olan 48 den çıkarılırsa tam olarak o rakam elde edilir. Bu yüzden c - '0' olarak kullanılmıştır.
   
   
   
   - Tıpkı scanf fonksiyonunda olduğu gibi getchar fonksiyonu da standart inputun buffer'ı boş ise -1 değerini döndürür.
   
   
   - Echo nedir?  
         - Echo girilen karakter ekranda gözükmesine echo denir. Bu sebeple şifre fonksiyonları echo vermeyen fonksiyonlar
         olarak kullanılır.
	 
   
   - getchar' a benzer 2 adet standart olmayan <conio.h> kütüphanesinde fonksiyon vardır.
                  - int _getch(void)
                  - int _getche(void)
                  
	
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
	 
	 - putchar sizden bir sayı alıyor ve bu sayıyı karakter kodlamasına göre ekrana yazdırıyor.
	 - getchar, standard bufferdan bir karakter alıp onun karakter sayısını yazdırıyor.
	 
	 
	 		- c1=getchar();//ekrana A yazılırsa 65 sayısını c1'e atar. Giriş Fonksiyonudur.
	 		- c2=putchar(65)// 65 sayısını fonksiyona gönderir ve ekrana A yazdırır. Çıkış fonksiyonudur.



	
	 
	 
	 
# Ders 14 - Tarih 05.03.2021
	 
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
	Bu değer eğer sıfır dışında bir değer ise  1 olmak zorunda değildir. Bu da koşulu düzgün 
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
	  
	 
	 
	
     # Ternary Operator (Koşul Operatörü)
	
	
	- Conditional Operator
	- Bazı programlama dillerinde var her programlama dilinde yok.
	- 3 operant alan operatör
	- Bu operatörün 2 tane token'ı var.
	               - op1 ? op2 : op3
	-Atama ve virgül operatörlerinden daha öncelikli, diğer tüm operatörler daha öncelikli.
	
	- Op1 lojik yorumlamaya tabi tutulur. 
	                     - Eğer lojik doğru (non-zero) ise op2 elde edilir.
	                     - Eğer lojik yanlış ise op3 elde edilir.
	                      
	- Birinci operanttan sonra yan etki noktası (sequence point) vardır.
	
	Örnek:
	
	     ```
	      m = x > 10 ? a : b
	     //x >10 ise m'ye a'yı ata, değil ise m'ye b'yi ata.
	     
	     
	     a > b ? a : b;
	     // İki sayıdan büyük olanı üretir.
	     
	     
	     
	     x > 0 ? x : -x
	     // Mutlak değer alma
	     
	     
	     a++ > b ? a : b
	     // Sequence point'i olduğu unutulmamalıdır.
	     // a ile b'nin ilk değerine göre karşılaştırma yapılır sonra artan değeri üretilir.
	          
	     
	     ```
	    
# Ders 15- 08/03/2021

 # Loop Statement 
 
 - While 
 - Do while 
 - For

	  - break 
	  - continue
	  	
	
- Genellikle yanlış yapılan bir mülakat sorusu:
 
 		  int i = 0;
                  while (i++ < 100);
		  	printf("%d",i);
-> Yukarıdaki kodda küme parentezi kullanılmadığı için ilk deyim olarak ; alınmıştır.  Ve i++ olduğu için while'dan çıkıldığında i=101 olur.




- n Klavyeden girilen bir pozitif sayı olsun. 
	- while(n--) ile while(n--<0) arasında bir fark yoktur.




- Maksimum munch kuralı :
		int z= x+++y;
Burada x++ derleyicinin algılayabileceği en uzun atom olduğu için x++ +y olarak tokenize edilir.



Örnek: 
```
	int power(int base, int expr)
	{
		int result =1;
		while(expr--)
			result *=base;
			
		return result ;
	}
	
	int main()
	{
		int x,y;
		printf("iki tam sayı giriniz:");
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
	printf("\n evet dediniz.\n");
	
else
	printf("\n hayir dediniz\n");
	
	
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
	- etiket-label
	
	

- Continue statement 
	- Yardımcı bir kontrol deyimi
	- Continue sadece döngü deyimlerinin gövdelerinde kullanılır. 
		- break; (loops/switch)
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
	 
		
	
	
# Ders 16 Tarih 10/03/2021


Örnek:

```

	int x,a;
	scanf("%d",&x);
	
	if(x>10)
		a=5;
	else 
		a=7;
	// Burada  a' ya ilk değer ifadesi verilmek istenmiş, ancak scope farklılığı sebebiyle doğru bir kullanım olmamıştır.
	
	Bunun yerine  a = x>10 ? 5: 7; daha doğru bir kullanımdır.
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

- Collatz Sanısı 
	- Sayı tek ise 3 katının 1 fazlası bulunan sayı çifti 2'ye bölünecek.
	- Örnek olarak sayı 23 ise 3 katının 1 fazlası 70. 2'ye bölünecek. 35. tekrar  katının 1 fazlası alınır 106 diye devam eder.
	

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_collatz(unsigned long long n)
{
	while (n != 1)
	{
		printf("%llu ", n);
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
	printf("1\n");

}




int main()
{
	unsigned long long x;
	printf("enter the integer:");
	scanf("%llu", &x);
	print_collatz(x);


}
			
```


#

- Asal Sayı Örneği: Bir aralık girin ve bu aralıktaki bütün asal sayıları ekrana yazdırın.

 
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isprime(int val)
{
	if (val <= 1)
		return 0;
	if (val % 2 == 0)
		return val == 2;
	if (val % 3 == 0)
		return val == 3;
	if (val % 5 == 5)
		return val == 5;
	for (int i = 7; i * i <= val; i++)
	{
		if (val % i == 0)
			return 0;
	}
	return 1;

}



int main()
{
	int low, high;
	int prime_count=0;
	printf("bir aralik girin:");
	scanf("%d%d", &low, &high);
	for (int i = low; i < high; i++)
	{
		if (isprime(i))
		{
			printf("%d  ", i);
			++prime_count;
		}
	}
	printf("\n [%d  %d  araliginda] %d asal sayi bulundu.\n", low, high, prime_count);

}
```


#


  
- Factorial işlevinin recursive implementasyonu:


```
	int factorial (int n)
	{
	return n < 2 ? 1 : n*factorial(n-1);
	}
```


#

- Mülakat Sorusu:

```
int i=0;
do
{
	printf("%d\n",i);
	i++;
	if(i<15)
		continue;
		}while(0);

// Bu kodda ekrana 1 yazdırılır. Continue komutunu görünce koşul ifadesi neredeyse program oraya dallanır.
```




- Nested Loops:
	 - Armstrong sayısı; bir sayının rakamlarının, basamak sayısı derecesinden kökleri toplamı kendisine eşit ise
	  o sayıya armstrong sayısı denir.
	 
	 
- Örnek: 3 basamaklı armstrong sayılarını bulan programı yazınız:
- 
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>






int main()
{

	int x = 100;
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			for (int k = 0; k < 10; ++k)
			{
				if (x == (i * i * i) + (j * j * j) + (k * k * k))
					printf("%d\n", x);
				++x;
			}
	
		}
	}


}
```

#



# DERS 17 - 12/03/2021

- Eğer iç içe döngülerde içteki bir döngüden tüm döngüleri kırarak çıkmak istiyorsak ideal olarak goto deyimi kullanılmalı.



- Fonksiyon Bildirimleri - Function Declaration
	- Bir fonksiyon çağrısı yapıldığında o fonksiyonun tanımı name look up ile bulunur.
	Derleyici o fonksiyonun tanımını neden bulmalı?
		- Çağrıda kullanılan argüman sayısı ile parametre sayısının uyumunu kontrol edecektir.
		- Fonksiyonun parametresi int türden ise ancak bu fonksiyona gönderdiğimiz parametre int türden 
		değil ise dil kurallarına göre derleyicinin tür dönüşümü (type conversion) yapması gerekiyor.
		
- ! Derleyici fonksiyonun kodunu bilmiyor. Fonksiyon çağrısını içeren fonksiyonun koduyla,
 çağırılan fonksiyonun derlenmiş kodunu birleştiren Linker dediğimiz program ,
Derleyici fonksiyonunun çıkış kodlarını da üretiyor. Fonksiyonun geri dönüş değerinin yazılacağı 
adres gibi araya da kendinden sonra birleştirme işlemi yapacak  linker için referans bir isim yazıyor. 
Böyle referanslara external referans deniyor.

- Derleyicinin bir fonksiyon çağrısı karşılığı 
	- Doğru şekilde fonksiyona giriş kodları üretebilmesi için 
	- Doğru şekilde fonksiyondan çıkış kodlarını üretebilmesi için 
	- Programcının yapmış olabileceği lojik hatalara karşı uyarabilmek için çağrılan fonksiyon ile ilgili 
	bazı bilgilere sahip olması gerekiyor.
	- Derleyicinin fonksiyon kodunu görmesi zorunlu değil 
	- Derleyiciye bu bilgileri veren bildirime "function declaration" deniyor.
	

- void func(); ile void func(void); arasındaki fark; parantezin içerisi boş ise bu tanımlamada 
fonksiyunun parametreleri hakkında bilgi vermiyorum anlamına geliyor. Parantezin içerisine void yazıldığında ise fonksiyonun 
geri dönüş değerinin olmadığı bildiriliyor. Bu C diline ait bir kural.


- function prototype scope:
	- Bir fonksiyonun bazı durumlarda kodunu göremeyiz ve sadece bildirimini görebiliriz.
	 Bu bildirimde gönderilen değişkenin ne olduğunu bildirmek için ve sadece bildirim satırındaki parantezi kapsayan scope'dur.
	


- Bir fonksiyonun bildiriminin 2. kez yapılmasına "function redeclaration" denir. Bunlar arasında bir çelişki varsa sentaks hatası olur.


- Function Overloading (işlev Yüklemesi) 
	- Bazı dillerde bir fonksiyon ismi ile paramedic yapısı farklı olarak tanımlanabiliyor. Ancak C'de öyle değil.
	
- .c dosyalarına source file , implementation file , dot c file denebiliyor.
 
- Header File:	 
	 - Header file'ın içerisinde sadece bildirim dosyaları vardır. Fonksiyon tanımı yoktur.
	 
	 - Bir başlık dosyasında neler var?
	 	- Önişlemci komutları var .
	 	- Macrolar var.
	 	- Fonksiyon bildirimleri 
	 	- Tür bildirimleri (user - defined types)
	 	- Tür eş isim bildirimleri


# Ders 18-15/03/2021

- Preprocessor:
	- Önişlemcinin , bilgisayarın işlemcisi ya da başka bir donanımsal elemanıyla hiçbir ilgisi yoktur.
	 	- ÖnişleMci belirli bir işi gören bir yazılım programıdır.
	- Önişlemci, kaynak dosya üzerinde birtakım düzenlemeler ve değişiklikler yapan bir ön programdır.
	- Önişlemci programının bir girdisi bir de çıktısı vardır. Önişlemcinin girdisi kaynak dosyanın kendisidir. 
	Önişlemci programın çıktısı ise derleme modülünün girdisini
oluşturur. Yani kaynak program ilk aşamada önişlemci tarafından ele alınır.
Önişlemci modülü, kaynak dosyada çeşitli metinsel düzenlemeler, değişiklikler yapar. Daha sonra
değiştirilmiş ya da düzenlenmiş olan bu kaynak dosya, derleme modülü tarafından amaç koda dönüştürülür.
	- Yani önişlemcinin görevi kendi komutlarını yürütmek, Bu komutlara "pp directives" denir.
		- #(null directive)
		- #include
		- #define
		- #undef
		- #if 
		- #else
		- #elif
		- #endif
		- #ifdef
		- #ifndef
		- #line
		- #error
		- #pragma
	- Önişlemci komutlarını belirleyen yukarıdaki sözcükler, C dilinin anahtar sözcükleri değildir.
	- Sıra derleyiciye geldiğinde bunlar, önişlemci tarafından kaynak dosyadan silinmiş olur.
	- Önişlemci program, amaç kod oluşturmaya yönelik hiçbir iş yapmaz, kaynak kod içinde bazı metinsel düzenlemeler yapar.
	 Kendisine verilen komutları yerine getirdikten sonra, # ile başlayan satırları kaynak dosyadan siler.
	 Derleme modülüne girecek programda # ile başlayan satırlar artık yer almaz.
	
	
	 	 
	
	     
	     
#İnclude Önişlemci komutu:
	- #include <---.h> veya #include "----.h" olarak gösterilebilir.
	- #include komutu ile, ismi verilen dosyanın içeriği, bu komutun yazıldığı yere yapıştırılır. Bu komut ile önişlemci, 
	belirtilen dosyayı diskten okuyarak komutun yazılı olduğu yere yerleştirir. Bu komutla yapılan iş, metin düzenleyici 
	programlardaki "kopyala - yapıştır" (copy – paste) işlemine benzetilebilir.
	- Dosya ismi eğer açısal ayraç içinde verilmişse, sözkonusu dosya önişlemci tarafından, popüler olarak 
	"default directory" denilen  önceden belirlenmiş bir dizin içinde aranır.
	- Dosya ismi; eğer çift tırnak içinde verilmişse sözkonusu dosya, önişlemci tarafından kaynak dosyanın bulunduğu dizinde arar,
	 eğer burada bulamazsa sistem tarafından berlirlenen dizinde arar.
	
	
- **Başlık Dosyaları Neden Kullanılır?
	- Özellikle büyük programlar, modül ismi verilen ayrı ayrı parçalar halinde yazılır. Bu modüllerden bazılarının amacı,
	diğer modüllere hizmet vermektir. C ve C++ dillerinde, genel hizmet verecek kodlar (server codes), genel olarak iki ayrı dosya halinde yazılır. 
		- Fonksiyon tanımlamaları, global değişken tanımlamaları uzantısı .c olan dosyada yer alır. 
			- Bu dosyaya, kodlama dosyası (implementation file-Source file) denir. 
		- Hizmet alacak kodları (client codes) ilgilendiren bildirimler ise bir başka dosyada tutulur.
			- Bu dosyaya, başlık dosyası (header file) denir. 
	- Bir başlık dosyası, bir modülün arayüzüdür (interface). Modül dışarıyla olan ilişkisini arayüzü ile kurar.
	     
	     
	
	
# #Define Önişlemci komutu:

- #define önişlemci komutunun işlevi, metin düzenleyici programlardaki "bul - değiştir" (find - replace) özelliğine benzetilebilir. 
Bu komut kaynak kod içindeki bir yazıyı başka bir yazı ile değiştirmek için kullanılır. 
		- Object-like macro
	- Önişlemci komutu herhangi bir blokta da tanımlanabilir. Tanımlandığı yerden sonraki tüm kodlarda geçerlidir.
	- #define SIZE 100 komutu ile, kaynak kod içerisinde gördüğü her bir SIZE atomu yerine 100 atomunu yerleştirir.
	 Derleme modülüne girecek kaynak programda, SIZE atomu artık yer almaz.
	- Önişlemci komutları kullanılırken parantezler konusunda dikkatli olunmalıdır. Bir örnekle gösterelim.
	- 
```
#define MAX 100+200

int main()
{
	int a=5*MAX;
	printf("a= %d\n",a);
}
```
#
Yukarıdaki örnekte parentez kullanılmadığı için MAX yerine direk olarak 200+100 yazılınca oluşan ifade a = 5 * 100+200; olur. Bu da istenen sonucu karşılamayabilir.

#

- Önişlemci tanımlamalarında noktalı virgül kullanılmaz. Kullanılırsa önişlemci onu olduğu gibi (copy-paste) yaptığı için dil kuralına göre hatalar oluşturur.
- Aşağıdaki #define önişlemci komutları geçerli değildir:
		- #define + -
		- #define 100 200

- Bir kodda kullanılan isim sabit mi değişken mi nasıl ayırt edebiliriz?
	- C'de değişken isimleri küçük harfli olarak seçilirler.
	- ALL CAPS= tamamı büyük harfler.
	- C'de all caps isimler macrolarda kullanılmaktadır.
	

- Örnek olarak: 
#
```
#define SIZE 100

int main()
{
SIZE = 50;
}
// Bu kodun okunma şekli 100=50; olacaktır. Ve bu sentaks hatasıdır.
// Ancak bu kodu şu şekilde kullanırsak ;

#define SIZE a[0]

int main()
{
int a[100]

SIZE =4;---> olarak yazdığımızda bı kodda sentaks hatası yoktur.
}
``` 
#


# Ders 19 - 17/03/2021


- Fonksiyonel Makrolar
	- functional macro
	- function-like makro

- #define max2(a,b)   ((a)>(b))?(a):(b))
	- fonksiyonel makrolar kodu küçük(az) fakat sık çağırılan fonksiyonlara bir alternatif 

- Makro tanımında parantez kullanmamızın sebebini anlatan bir örnek;
```
#define square(a)   a*a
int main()
{
int x,y;
printf(" bir tamsayı girin:");
scanf("%d",&x);
y=square(x+1); // y=x+1*x+1; derleyici bu şekilde algılayacak.
}

//doğru olan tanım şekli #define square(a)  (a)*(a) şeklindedir.

```
#

- ub oluşturulmamasına dikkat edilmelidir.
```
#define square(a)   (a)*(a)
int main()
{
int x,y;
printf(" bir tamsayı girin:");
scanf("%d",&x);
y=square(x++); // y=(x++)*(x++); burada yan etki noktasına gelinmeden x iki kez kullanılmış olur ve bu tanımsız davranıştır.
}
```
   
#

- foo bir fonksiyon olsun.
```
#define SQUARE(a) ((a)*(a))
int main()
{
int y = 10;
int z = SQUARE(foo(y)),
//burada foo fonksiyonu 2 kez çağırılmış oldu. Eğer square bir fonksiyon olsaydı bir kez çağırılıp geri dönüş değeri ile makraya gidilecekti.
}
```
- bir mülakat sorusu: 

```
  int square(int x)
{
	return x * x;
}

#define square(a)  ((a)+(a))


int main()
{
	int ival;
	printf("bir tam sayı giriniz:");
	scanf("%d", &ival);
	int y = square(ival);
	printf("%d", y);

}


- Yukarıdaki fonksiyonda square komutu ile fonksiyon mu çağırılır makro mu??

          - Elbette ki önişlemci komutu çağırılır.önişlemci komutu derleyiciden önce çalışıyor.
           Önişlemci programı define komutunu yürütecek onun çıktısı derleyiciye gidecek.
    
           
	Eğer biz hem makro tanımlayıp hem fonksiyonu tanımlarsak ve seçimi programcıya bırakırsak;
		- fonksiyon çağırılmak istenirse (func)(a,b) şeklinde yazılır.
 ``` 
  
  
  #
  
- Fonksiyonel makrolar ile fonksiyonların karşılaştırmasını yapınız:

	- Makrolar kaynak kodu büyütme eğilimindedir.
       		 - Yani derlenmiş kodun boyutu üzerinde bir kaygınız var ise makro kullanmamanız daha sağlıklı olacaktır.
        	- Ancak ne kadar yer kaplasa da sizin için  kapladığı yerden çok hızı önemli ise daha hızlı olması için makrolar daha avantajlı.
              			- Hızlanmasının sebebi ise fonksiyona giriş ve çıkış kodları üretilmiyor oluşudur.
	- Fonksiyonlar türe bağlı, makrolar türden bağımsızdır.
	- Makro kullanımı durumunda debugger desteği daha az olabileceği göz önünde bulundurulmalıdır.
	- Makrolar, fonksiyonlara göre daha etkin kodun oluşturulmasını sağlayabilirler.
	
	
	
	
- Önişlemci programın kendi operatörleri vardır.
	- preprocessor operator
		- # operetörü  -----> stringificition operator(string yapma operatörü )
		- ## operatörü ------>token-pasting operator (atom yapıştırma operatörü)
		- defined operatörü


- #x -----> derleyiciye "x" bu şekilde görünür. 
 - örnek olarak:
 ```
 	#define str(a)  #a
	
	int main()
	{
	printf(str(github));
	}
	// Derleyicinin gördüğü printf("github");    olur.
	
	
```


- Örnek


```
#define iprint(x)  printf(#x "= %d\n",x)

int main()
{
int a=10;
int b=7;
int c=11;

iprint(a);
iprint(a+b);
iprint(a*a+ b*b+c*c);
//burada ekran çıktısı 
a=10
a+b=17
a*a+ b*b+c*c=590              olur.
}


```

#

- ## operatörü 
	- a##b --->ab olur. Bir nevi birleştirme operatörü.
 örnek:


```
	#define uni(a,b) a##b
	int main()
	{
		int counter =0
		uni(co,unter)=20;
		printf("%d",counter);
	
		// ekrana 20 yazılır.
	}
		
```	
```

#
- Define farklı bir kullanım şekli;
```
#define PUBLIC

PUBLIC int g=45;
PUBLIC int square(int x)
{
return x*x;
}
//Bu kodda PUBLIC sözcüğü derlendiğine derleyici, PUBLIC sözcüğünü görmez. 
```


# Conditional Compiling (koşullu derleme)

#undef	#elif
#if 	#endif
#else 	#ifdef
#ifndef


- Koşullu derlemede bir kural vardır. Eğer makronun tanımı yapılmamışsa makro sıfır olarak işleve alınır.

mesela;
```
#if MAX > 10
	typedef int word;
#endif--> bu kodda max 0 alınır ve koda girilmez. Ancak koşul ifadesi >-1 olsaydı eğer koşula direk girilecekti.
```

# Ders 20 - 19/03/2021

- Önişlemci komutlarında elseif merdiveni;

```
#define NEC 1

#if NEC==0

#else 

#if NEC ==1

#else
#endif
#endif------> Bu şekilde kullanılırsa her if için bir endif yazılması gerekir. Ancak aşağıdaki gibi kullanılırsa ;

#if NEC==0

#elif NEC ==1

#elif NEC==2

#endif
```


#

```
 - #ifdef NEC ----> NEC makrosu define edilmişse önişlemci bu aralığa girecek.
 
 #endif
 
 
 
 - #ifndef NEC -----> NEC makrosu tanımlanmadıysa bu aralığa girilecek.
 
 #endif
 
 ```
 
 #
 
 - Defined Operatörü 
 	- defined NEC
 		- Eğer defined komutunun terimi olan isim daha önce tanımlanmış bir simgesel var ise
 		 defined operatörü lojik 1 değerini üretir.yok ise lojik 0 değerini üretir.

#ifdef NEC ile #if defined NEC aynı işlevi yaparlar.
#ifndef NEC ile #if !defined NEC aynı işlevi yaparlar.

- Peki bunlar aynı işlevi yapıyorlarsa hangi noktalarda ihtiyacımız oluyor.

```
#ifdef EMRAH
#ifdef FURKAN
//KODLAR
#endif

yerine 

#if defined EMRAH && FURKAN 
//kodlar
#endif

- Sağladığı kolaylıktan dolayı defined operatörü daha sonradan çıkmıştır.
```

#


- Peki biz bu önişlemci komutlarında koşullu bildirmeleri nerelerede kullanıyoruz??
	- donanıma göre
	- işletim sistemine göre 
	- derleyiciye göre
	- dile göre
	- versiyon/ sürüm kontrolü
	- lokasyona göre


- Multiple inclusion guard (çoklu dahil etmeye karşı önlem gibi)

	- Önişlemci koşullu derleme koşullarının özel bir kullanım biçimidir. Ki bu komutları kullandığımız zaman bir başlık dosyasında
	 önişlemci programı o başlık dosyasına bir kere girer ikinci kez girmeye zorlarsanız ikinci kez girmez. 
	- Peki bunu nasıl sağlıyoruz?
bir başlık dosyasının içine ;
```
#ifndef NUTİLİTY_H
#define NUTİLİTY_H
//kodlar
#endif
---> şeklinde bir koşul ve makro tanımlanırsa ilk girişte koşulda sorgulanan makro tanımlanmadığı için girer ve kodu işler.
Eğer ikinci kez tanımladıysa koşuldaki makro, birinci girişindeki tanımladığı koşul geçemez.
```
- !!!! Multiple inclusion guard her başlık dosyasında olmalıdır. 



- #undef önişlemci komutu
	- #undef NEC
		- Bu önişlemci komutuyla NEC makro tanımsız kabul edilecektir.
		- Daha önce tanımlandıysa NEC makrosu, #undef NEC komutundan sonra tanımlanmamış olarak devam edecektir.
		
		
#### UNDEFİNED BEHAVİOUR

```
- Eğer önişlemci programı bir makronun farklı 2 tanımıyla karşılaşırsa bu durumda tanımsız davranış olur.
 #define SIZE 100
 #define SIZE 500
- Önişlemci programında name look up terimi yoktur. Bu derleyici ile alakalıdır.
```

- Yani biz bir makroyu kullandıktan sonra tekrar değer vermek istersek önce o makroyu #undef komutu ile içeriğini temizlememiz gerekir.



- Pre-defined Symbolic Constant(ön tanımlı sabit )
	- Dil tarafından tanımlı kabul edilen makrolara denir. 
		- __FILE__---->bulunduğu dosyanın ismi  ile yer değiştiren makro.
		- __LINE__---->bulunduğu line'ın numarasıyla yer değiştiren makro.
		- __DATE__---->derlendiği tarih ile yer değiştiren makro.
		- __TIME__---->derlendiği saat ile yer değiştiren makro.
		- __STDC__---->standart bir C derleyiciyse bu makro define edilmiş kabul edilir.
		- __func__---->bulunduğu fonksiyonun ismi ile yer değiştiren makro.



# Ders 21 - 22/03/2021

- Yorum satırları
	- Comment out: Belirli bir kod bütününün bir kısmını deneme amaçlı yorum satırı yapmaya denir.
	- Commit = Kodu repoya yüklemeye denir. Commit edilen kodda kesinlikle comment out bulunmamalı.
	- Mecbur değilseniz kodu büyük fonksiyonlar yazmaktan kaçının.
	- Genelde kodu büyük kodlarda yapılan hatalar; kod tekrarı , fonksiyonlara bölünmemiş olması.


- Go to deyimi:
	- Aynı fonksiyon içerisinde yapılan jump olayına "near jump (lokal jump)" denir.
	- long jump fonksiyonlar arası yapılan jump olayıdır.
	- goto kontrol deyimi C'de local jump yapar.
	- label (etiket): Bir deyimin yerini belirleyen özel isimler.
		- Etiketler function scope kuralına uyar.
		- Etiket aranırken name look-up gibi yukarı doğru değilde fonksiyonun her yerinde arama gerçekleşir.
		- Farklı bir fonksiyondaki etikete dallanamaz.
		- Dikkat: Eğer etiketten sonra herhangi bir deyim olmazsa bu bir sentaks hatasıdır.
	- İç içe döngülerin içinden tek seferde çıkmak için kullanım yaygındır.
	
	
	
- Switch Statement

	- switch(integer expr) --> parentez içerisindeki ifade tam sayı türünden olmak zorunda.
	
 Örnek sentaks: 
 ```
switch( int expr)
case1: statement 
case2: statement
.
.
.
default: // Eğer hiçbir case'e giriş yapmaması durumunda bu etikete girer.

```

Örnek:

```
void print_season(int month)
{
	switch(month)
	{
		case 12:  //fallthrough
		case 1:  //fallthrough
		case2:  printf("winter");break;
		case3:   //fallthrough
		case4:   //fallthrough
		case5: printf("spring"); break;
		case6:  //fallthrough
		case7:  //fallthrough
		case8: printf("summer");
		case9:   //fallthrough
		case10: //fallthrough
		case11: printf("autumn");
		
	}

}---> Case'lerde boşta kalan yani case'den sonra deyim olmadan switch'den çıkan bir case olmamalıdır.

```
- Fallthrouh: break komutu kullanmadan 2 case'i birleştirdiğinizde, bu durumu bilerek ve isteyerek yaptığınızı 
yorum satırıyla case'in yanına eklenmelidir ki kodu okuyan kişi, kodu yazan kişinin bunu bilinçli bir şekilde yaptığınızı anlasın.



  
  # Ders 22 - 24/03/2021
  
  
  - Derleyicilerin "kodların bağlanması için " Linker programına hitaben obje kod içine (özel bir notasyon ile) 
  yazdığı isimlere " external referance" denir.
  
  
  #### Tür Dönüşümleri
  
  - ival + dval ---> Bir int türünden değeri bir double türden değerle toplarsanız eğer derleyici arka planda tür dönüşümü yaparak ival'i,
  double türe dönüştürür. Bu olaya ;
  	- imlicit type conversion denir.
  		- implicit = örtülü , gizli , kapalı
  	- explicit type conversion : Kodu yazan kişinin bu kodda tür dönüşümü olacağını belirtmesine denir.
  		- type-cast operatörü
  	

- Nerelerde tür dönüşümü yapılıyor?
	- Basit aritmetik dönüşümler
	- Atama tür dönüşümleri
		- Bu dönüşümler geçici nesne (temprory obj) oluşturularak yapıldığı için aslında değişkenin türü değiştirilmiyor.
		
		
- a+b ---> bu işlemde en kapsamlı tür hangisiyse işlem o türde yapılıyor.

1 - long double
  - double
  - float
  
2 - unsigned long long
  - signed long long
  - unsigned long
  - signed long 
  - unsigned int 
  - signed int
  
  
3 -   "integral promotion"
    - unsigned short 
    - signed short 
    - unsigned char
    - signed char
    - char
    - _BOOL
    
    
    
- Rank : Büyüklük derecesi
 	- long double > double > float > long long > long > int

- Aynı türlerin operantlarının rank'ı aynı ise fakat türleri farklı ise, tür dönüşümü her zaman işaretsiz yöne yapılır.

- a+b ---> operantlar farklı rankta fakat büyük olan rank işaretli , küçük olan rank işaretsiz ise ,
 Bu durumda eğer işaretli olan tür işaretsiz olan türün bütün değerlerini tutabiliyorsa 
 tür dönüşümü işaretli ranki yüksek olan türe yapılacak. Aksi halde bunun işaretsiz türüne yapılacak.
 
 - Ranklar aynı işaretler aynı ise işlem yüksek rankta yapılır.
 - Ranklar farklı büyük rank işaretsiz ise yine yüksek rankta yapılır.
 - Rankler farklı büyük rank işaretli ise işlem
 		- ya yüksek rankta
 		- ya da yüksek rankın işaretsiz olanında yapılır.
 
 
```
//c++ 'da tür öğrenme kodu

#include <iostrem>
using namespace std;

int main()
{
	char c1=10;
	char c2=20; // işlemin sonucunun türü int olacak 
	
	cout << typeid (c1+c2).name()<<"\n";
}
--------------

short s1=10;
short s2=20; // int

--------------

unsigned int uval =5;
int ival =10// unsigned int 

--------------

long uval =10;
unsigned int ival = 10;

--------------

long long uval =5; // 8 byte 
unsigned int ival =10;//4 byte  --> long long

--------------  
  
 ``` 
  
  
  
- Yapılan tipik hatalar :

  
 ```
 
 int main()
 {
 	int x = -1;
	unsigned int y = 2;
	
	if (x >y)
		printf("evet dogru\n");
	else
		printf("hayir yanlıs\n");
 }
 ---> Bu kodda işaretli x, bellekte bit olarak tutulurken 1111 1111 1111 
 olarak yani işaret bitleri de olduğu için x>y algılanır.
 
 
 - int x = 10;
   double d1 = x/3;-->sonuç = 3 olur.
   double d2 = x/3.;---> sonuç = 3.333 olur.
   ```
   
   
  - Hatırlatma : Tam sayi türlerinde taşma tanımsız davranıştır.
  	- İşaretsiz türlerde taşma yoktur.
  	 	- İşaretsiz türlerde tüm işlemler modüler aritmetiğe göre yapılır.
  	 	
Örnek olarak ; 
	- Sistemdeki int türü 2 byte olsun.
	
		int ival=1000;
		ival*1000u;--> bunun sonucu 1000000 % 65536 olur.


- Atama tür dönüşümleri:

		 int x; 
		 x=expr; --> expr hangi türde olursa olsun, 
		 tür dönüşümü kendisine atama yapılan nesnenin türüne yapılacak.
		
- Küçük türden büyük türe atama  yapmakta bir sakınca yok.
- Ancak büyük tam sayı türünden küçük tam sayı türüne dönüşümden kaçınmak gerekir.
		 (tanımsız davranış değildir - veri kaybı oluşturur)
		 
- Gerçek sayı türlerinden tam sayı türlerine otomatik dönüşüm yapılmasına izin verilmemelidir.

Bir mülakat sorusu:

```
	int x = 10;
	int y = 20;
	double dval = (y > 10 ? x : 3.)/3;
	printf("dval = %f\n ",dval );
--> Ekran çıktısı 3.3333 olur .

```
- Koşul operatörünün 2. veya 3. operandları arasında tür dönüşümü uygulanır.
	- type-cost (tür dönüştürme ) operatörü
	- -> (tür)expr olarak kullanılır.


# Ders 23 - Tarih 26/03/2021

 Type cast 
 	- (int) dval  
 	
- Nerelerde kullanıyoruz??
	- Bu operatörü kullanmazsak işlem bizim istediğimiz türde yapılmayacak. İşlemin istediğimiz türde yapılmasını sağlamak için kullanılır.
	
- Bir soru:

```
	double dval ;
	printf("[-5 +5] araliginda bir gercek sayi giriniz:");
	scanf("%lf",&dval);
	printf("%lf ====> %d \n",dval,???);
	
	
	---> ??? yerine öyle bir ifade yazın ki matematiksel yuvarlama işlemini yapsın.
	
	??? ====> (int)(dval >= 0 ? dval + 0.5 : dval - 0.5)
```
  
  # Rastgele Sayı Üretimi 
  
  - Çekiliş 
  - Eşleşme
  - Şifreleme
  - Game programming 
  - Genetic algorithm 
  - Olasılık hesabı 
  - İstatistiksel hesaplamalar
  - Test kodlarındaki test datsı oluşturmak 
  - Bazı arama/sıralama algoritmaları
  
  
  
  	- iki kategoriye ayrılır.
  		- True random generations
  		- Pseudo random generations
  		
  
  
  pseudo random generation 
  	- Seed value ( algoritmayı başlatan değer - tohum değeri)
  	
- Endüstride en çok kullanılan random sayı algoritması 
	- Mersenne twister algorithm
		- Mersenne twister algoritmasının bu kadar çok kullanılmasının nedeni rastgeleliğin 
		birçok kriterini tam olarak karşılaması ve çokta yavaş olmaması.
	
  
  - Üniform Distribution : Üretilecek olan tüm olasılıkların ağırlığı aynı olması.
  
  - Bulunduğu kütüphane ve fonksiyon tanımları:
  	<stdlib.h>
	RAND_MAX
	int rand (void);
	void srand (unsigned int);
	
	
rand() --> fonksiyonun kullanıldığı seed (tohum) değeri 1 olduğu için üretilirken aynı sırada rastgele sayı üretilecektir.


	for (int i=0;i<5 ; i++)
	{
	printf(""%d",rand());
	}
-> Bu kodun üreteceği sayıların sırası belirlidir.(Default değer olan 1 değeri gönderilirç)
	 Ekran çıktısı:
	 41 19467 6334 26500 19169
	 	olur. Ve bu sıralama ve değerler tohum değeri(seed) sabit olduğu için her seferinde aynı olur.
		
- Farklı tohum değeri gönderilerek farklı sayılar üretilmek istenirse;
srand(num) fonksiyonuna değer gönderilmelidir. Srand fonksiyonuna gönderilen tohum değeri değiştikçe üretilen rastgele sayılar da değişir.

	
		for (unsigned int i=1; i<100 ; i++)
		{ 
			srand(i);
			printf("tohum değeri %u için sayı zincirinin ilk 100 sayısı \n",i);
			
			for (int k =0 ; k < 100; ++k)
				printf("%5d ", rand());
				
			getchar();  // her döngüde bir tuşa basana kadar beklemesi için
			system("cls");  // her döngü sonunda ekranı temizliyor.
		}
  
  
  % --> üniform dağılım için kullanılmamalı ! 
  		örneklerde kullanacağız ama üretimde kullanılmamalı.
		
	

- Rastgele büyük harf üretimi:

		for (;;)
		{ 
			putchar(rand() % 26 + 'A');
			_getch();
		}
		
		
- Rastgele alfa-numeric karakter yazdırımı:
	
		for(;;)
		{
			for(;;)
			{
				c=rand()%128;
				if(isalnum(c))
					break;
			}
		}
  
  - Yukarıdaki kodu bir C idiyomu ile yazalım:
  	
		int c;
		for(;;)
		{
			while(!ispunct(c=rand()%128))
			;// null statement
			
			putchar(c);
			_getch();
		}
		
- Yukarıdaki kodda fonksiyona argüman olarak gönderilen ifade atama operatörü ile oluşturulmuş
 Atama operatörünün ürettiği değer nesneye atanan değerdir. İspunct çağrısı punctration karakter olup olmadığını test ediyor. Punct değer olmadığı sürece while döngüsünde dönüyor.
 
 **Randomize idiyomu:
 
 - Calender time (takvim zamanı)
 	- Başarılı bir zaman noktasını (time point) orijin olarak alıyoruz.
 		- O orijin olarak alınan noktaya(değere) epoche denir.

<time.h> -> standart fonksiyon 

- Unix kökenli sistemlerde alınan bu orijin noktası(epoche) tarih olarak 01.01.1970'dir.

Bu idiyomun kullanım şekli ;

	#include <time.h> 
	srand((unsigned)time(NULL));
	for(int i=0; i<10; ++i)
	{
		printf("%d ",rand());
	}
	// Bu şekilde 10 adet rastgele sayı üretilmiş oldu.
  
  
  
  
  
        for(;;)
	{
		printf("%ld\r",time(NULL));// burada \r aynı satırın başına yazılmasını sağlar. yeni satıra geçilmez.
	}
 	---> Bu kodda ise epoche'den geçen saniye sayısı ekrana yazdırılır.
	
	
- Yazı-Tura sorusu:

	   #define NTOSS 1000000
	   #define HEADS 0
	   
	   int main()
	   {
	   	int heads_counter =0;
		forint i=0 ; i< NTOSS ; ++i)
			if(rand()%2==HEADS)
				++heads_counter;
		
		printf(" Tura gelme olasılığı : %.12f\n",(double)heads_counter/NTOSS);
	   }
  
  
  
  - Bir oyun algoritma örneği:
  	- 2 zar atılıyor.
  	- eğer bu iki zarın toplamı 
  	- 7 veya 11 olursa oyun kazanılır.
  	- 2,3 veya 12 olursa kaybedilir.
  	- 4,5,6,8,9 veya 10 olursa zar tekrar atılır ve aynı toplam bulunursa kazanılır. Ancak 7 atılırsa oyun kaybedilir.
  	- Yani örnek vermek gerekirse ;
  		- 7 atılırsa oyun kazanılır.
  		- 3 atılırsa kaybedilir.
  		- 9 atılırsa;
  			- ya tekrar 9 atılana kadar devam edilir ve 9 atıldığında kazanılır.
  			- ya da 7 atılana kadar devam edilir 7 atıldığında kaybedilir.
  		
- Bu oyunu oynaya oyuncunun kazanma olasılığını hesaplayan programı yazınız.


```

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



#define ngames 10'000'000

int roll_dice(void)
{
	int dice_x = rand() % 6 + 1;//mod operatörü kullanımı olasılık hesaplarında yanlıştır. algoritme örneği olarak!!
	int dice_y = rand() % 6 + 1;

	return dice_x + dice_y;

}
//if game returns 1, player wins
//if game returns 0, player loses

int game_(int dice)
{
	int new_dice;
	for (;;)
	{
		new_dice = roll_dice();
		if (new_dice == 7)
			return 0;
		if (new_dice == dice)
			return 1;
	}
}

int game(void)
{
	int dice = roll_dice();

	switch (dice)
	{
	case 7:
	case 11: return 1;
	case 2:
	case 3:
	case 12:return 0;
	default: return game_(dice);
	}
}

int main()
{


	int win_count = 0;

	for (int i = 0; i < ngames; ++i)
	{
		win_count += game();
	}
	printf("oyuncunun kazanma olasiligi %f \n  ", (double)win_count / ngames);
}


```

# Ders 24 31/03/2021

- Global değişken tnaımlamaktan çekinmek gibi bir durum var mı? var .
	 - int g; global değişken kaynak dosyadaki fonksiyonların ortaklaşa kullanıldığı bir değişken.
	 - Global değişkenler yerel değişkenlerin işimizi gördüğü yerde kullanılmamalıdır.(eğer bir mecburiyet durumu yoksa)
	 


- rand() ---> 0 ile RAND_MAX arasında rastgele değer üreten fonksiyon.

- Bir soru:

	- Birim kare içerisinde yarıçapı 1 olan bir çeyrek daire yerleştirilmiştir. 
	Çeyrek dairenin alanının karenin alanına oranını bulan programı yazınız.(pi/4)
	
```
#include <stdio.h>
#include <stdlib.h>
#define NPOINTS 100000


int main()
{
	int inside_cnt = 0;
	for (int i = 0; i < NPOINTS; ++i)
	{
		double dx = (double)rand() / RAND_MAX;
		double dy = (double)rand() / RAND_MAX;

		if (dx * dx + dy * dy <= 1)
			++inside_cnt;

	}
	printf("pi = %.12f \n ", 4. * inside_cnt / NPOINTS);
}
```
	
  
  - Bir ödev sorusu:
   	- Bir oyuncu oyuna 100 dolar ile  girebilmektedir ve kasanın 100 doları vardır.
   	- Her el oyuncu oyuna devam edebilmek için 10 dolar kasaya ödeme yapmaktadır.
   	- Kasa da yazı-tura atmaktadır. 	
   		- Eğer 2 kez yazı gelirse kasa , oyuncuya 35 usd verir.
   		- Eğer 4 kez tura gelirse kasa , oyuncuya 65 usd verir. 
   	- Oyuncunun parası 10 doların altına düştüğünde veya kasa oyuncunun kazandığı parayı ödeyemeyecek kadar parası kaldığında oyun biter.
   
  ```
  #define _CRT_SECURE_NO_WARNINGS

#include <math.h>

#include <conio.h>
#include <ctype.h>
#include "nutility.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NTOSS 100000
#define HEADS      0 
#define TAILS      1

int heads_or_tail(void)
{
	
		if (rand() % 2 == HEADS)
			return HEADS;
		return TAILS;
	
}



int main()
{
	while (1)
	{
		int win = 0, lose = 0;
		for (int i = 0; i < NTOSS; ++i)
		{
			
			int heads = 0, tail = 0, player = 100, bank = 100;

			while (player > 10)
			{
				player -= 10;
				bank += 10;

				if (heads_or_tail() == HEADS)
				{
					tail = 0;
					++heads;
					if (heads == 3)
					{

						bank -= 65;
						if (bank <= 0)
						{
							++win;
							goto bitis;
						}
						player += 65;
						heads = 0;
					}
				}
				else
				{
					heads = 0;
					++tail;
					if (tail == 2)
					{
						bank -= 35;
						if (bank <= 0)
						{
							++win;
							goto bitis;
						}
						player += 35;
						tail = 0;
					}
				}


			}
			++lose;

		bitis:
			;// null statement
		}

		printf("Bu oyunu kazanma olasiliginiz: %.12lf\n ", (double)win / NTOSS);
		_getch();
	}
} 


  ```
  
  # Diziler
  
  - Data structure: işleme sokulacak verilerin işleme sokulabilmesi için bellekte nasıl konumlandırılacağına ilişkin düzenek.

- C'nin standart kütüphanesinde dinamik dizi yoktur. Sadece fixed array mevcuttur.
  
  - Time Complexity: Bir algoritmanın çalışması için gerekli olan süredir.
   Ancak buradaki süre saniyelerin hesaplanmasıyla değil, kaç tane işlem gerçekleştirdiğine göre yapılmaktadır.
   
   - Big O terimleri ve Senaryoları:
   	- O(1) -> Constant
	- O(N) -> Linear
	- O(N^ 2) → Quadratic
	- O(log N) → Logarithmic
	- O(N log N) → Linearithmic
	- O(c^N)→ Exponential
	- O(N!) → Factorial

- int a[100]; --> ilk değer verilmezse çöp değer ile hayata başlar.

- void func(void)
  {
 	 int ax[5];---> çöp değer ile 
  	 static int sa[40]; ---> 0 değeri ile hayata başlar.
  }
  
  
  - C dilinde bir fonksiyonun parametresi bir dizi olamaz. 
  Diziler fonksiyonlardan fonksiyonlara call by value olarak aktarılmıyor.
  - C dilinde bir fonksiyonun geri dönüş değeri türü dizi olamaz.
 
    
    	void func(int a[5])
	{	}---> Dikkat : parametre bir dizi gibi görünse de bir pointer değişkendir.7
	İlerleyen konularda ayrıntılı değineceğiz.
	
	[] ---> index/ subscript
	
#### Undefined Behaviour
#
Dizinin boyutu dışında veya negaitif bir terimine atama yapmak tanımsız davranıştır.
#


- a[5] ---> l vale expression.
	- a[5]++
	- ++a[5]
	- &a[5]
	
	
- Bir dizi ismi bir ifade içinde kullanıldığında (birkaç istisnai durum hariç) 
her zaman dizinin ilk elemanının adresine dönüştürülür.
	- Yani a bir ifade içinde kullanıldığında &a[0] gibi düşünülebilir.
  
  
  
  
# Ders 25 02.04.2021

- Array Decay 
	- Array to pointer conversion 

	- int a[10]
	- a ===> &a[0]
	
- Bir dizi tanımlandıktan sonra dizinin ismini bir ifade içerisinde kullanıyorsunuz ve derleyici 
dizi ismini dizinin ilk elemanının adresine dönüştürüyor. İşte buna array decay deniyor.



- Bir mülakat sorusu:

- Aşağıdaki programda 10 adet rastgele şifre üretilmek istenmiştir. 
Ancak şifrelerin hepsi aynı olmaktadır. Hata nerede yapılmıştır???

```
int random_char(void)
{
	int c;
	while(!isalnum(c = rand() % 128)
		; // null statement
		
	return c;
}

void printf_random_password(void)
{
	srand(time(NULL));
	int len = rand() % 5 + 6;
	for (int i=0; i < len; ++i)
	{
		putchar(randam_char());
	}
	putchar('\n');
}
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		printf_random_password();
	}
}
```
  
- Cevap: Main fonksiyonundaki for döngüsü çok hızlı döndüğü için srand fonksiyonuyla
tohum değeri verme işlemi bir döngünün içerisinde olmamasına dikkat edilmelidir. En uygun yeri 
main fonksiyonun başıdır.


- Dizilere ilk değer verilmesi:
	- int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	- int [3] = {1, 2, 3, 4} // geçersiz (boyut aşımı)
	- Dizinin boyutundan daha az ilk değer diğer değerler default olarak 0 ilk değeri alır.
	- int a[5]; ---> çöp değer ile başlar.
	- int a[3] = {1, 2, 3,} --> trailing comma
	- int a[]; --> sentaks hatası
	- int a[] = {1, 2, 3, 4,5} --> sentaks hatası yok. Dizinin boyutu otomatik olarak 3 algılanır.

- Dizinin boyutunu belirten ifade sabit ifadesi olmalıdır.

		 int x = 5; 
		 int a[x]; --> geçerli değildir.
		 
		 
		 
- int a[] = {[5] = 67, [3] = 45, [1] = 11};// designated initializer
	- 6 elemanlı olarak tanımlamış olur ve değer verilmeyen elemanlar 0 olarak varsayılır.


- Bir döngü içerisinde a[i] ve i[a], ikiside a dizisinin i. elemanı anlamına gelir.


  - Rastgele sayılarala bir dizi oluşturup elemanları toplamını bulan program:


  ```
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  #define SIZE 20
  #define asize(x)  (sizeof(x) /sizeof(x[0]))
  void set_array_random(int* p, int size)
  {
	while (size--)
		*p++ = rand() % 1000;
  }
  void print_array(const int* p, int size)
  {
	for (int i = 0; i < size; ++i)
	{
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n----------------------------------------------\n");
  }
  
  int main()
  {
  	int a[SIZE]
 	 int sum = 0;
 	 randomize();
 	 set_array_random(a,SIZE);
	 print_array(a,SIZE);
	 for(int i = 0; i < SIZE; ++i)
	 {
	 	sum += a[i];
	 }
  	printf("sum = %d\n ",sum);
  }
  
  ```
  
  - Rastgele oluşturulan bir dizide tek elemanların aritmetik ortalamasını bulunuz.
  
  ```
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  #define SIZE 20
  #define asize(x)  (sizeof(x) /sizeof(x[0]))
  void set_array_random(int* p, int size)
  {
	while (size--)
		*p++ = rand() % 1000;
  }
  void print_array(const int* p, int size)
  {
	for (int i = 0; i < size; ++i)
	{
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n----------------------------------------------\n");
  }
  
  int main ()
  {
  	int a[SIZE];
	int add_sum = 0;
	int add_cnt = 0;
	
	randomize();
	set_array_random(a,SIZE);
	print_array(a,SIZE);
	
	for(int i = 0; i < SIZE; ++i)
	{
		if(a[i] % 2 != 0)
		{
			odd_sum += a[i];
			++odd_cnt;
		}
	}
	if(odd_cnt)----> paydanın 0 olma ihtimali her zaman göz önünde bulundurulmalıdır.
		printf("teklerin ortalamasi = %f\n",(double)odd_sum/odd_cnt);
	else
		printf(" dizide tek sayi yok.");
  }
  ```
  
  
  - Fundamental Algorithms
  	- Linear search (Doğrusal Arama);
  - 3 farklı Algoritmada ekrana girilen değeri dizinin içinde bulan 
  ve hangi indiste olduğunu gösteren program aşağıdadır.
  
  
  ```
    #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  
  #define SIZE 20
  #define asize(x)  (sizeof(x) /sizeof(x[0]))
  void set_array_random(int* p, int size)
  {
	while (size--)
		*p++ = rand() % 1000;
  }
  void print_array(const int* p, int size)
  {
	for (int i = 0; i < size; ++i)
	{
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n----------------------------------------------\n");
  }
  
  int main()
  {
  	int a[SIZE];
	randomize();
	set_array_random(a,SIZE);
	print_array(a,SIZE);
	int sval;
	printf("Aranacak degeri giriniz:");
	scanf("%d",&sval);
	
	// ilk algoritma
	int i ;
	int fount = 0;
	for(i = 0; i < SIZE; ++i)
	{
		if(a[i] == sval)
		{
			found = 1;
			break;
		}
	}
	if(found)
	{
		printf("bulundu dizinin %d elemani",i);
	}
	else 
		printf("bulunamadi\n"
		
	
	//ikinci algoritma
	int i; 
	for (i = 0; i<SIZE; ++i)
	{
		if(a[i] == sval)
			break;
	}
	if(i < SIZE)
		printf("bulundu dizinin %d elemani.\n",i);
	else
		printf("bulunamadi\n");
	
	
	//Üçüncü algoritma
	
	int i;
	for(i = 0; i<SIZE && a[i] != sval; ++i)
		; // null statement
	
	if(i < SIZE)
		 printf("bulundu dizinin %d elemani",i);
	else 	
		printf("bulunamadi");
		
  }
  ```
  
   
  #### Sizeof Operatörü
  
  - Anahtar sözcükte operatör olan tek anahtar sözcük.
  - Compile-time operator
  	- Diğer operatörlerden farklı olarak bu operatörün ürettiği değer derleme zamanında derleyici 
  	tarafından bir sabit olarak elde edilecek.
	
- sizeof operatörü bir türün storage ihtiyanının kaç byte olduğunu gösterir.
- sizeof operatörünün ürettiği değer derleyiciye bağlı olan işaretsiz tam sayı türünde bir değerdir.

- Kullanım şekli:

		sizeof(int)
		printf("sizeof(int) = %zu\n",sizeof(int));
		
		

  
- Sabit değer ürettiğine dair;

		int x = 10;
		int a[x];---> sentaks hatası
		int a[sizeof(double)] ---> sentaks hatası değil
	
- sizeof operatörünün operantı herhangi bir ifade olabilir. Bu durumda derleyici operant 
olan ifadenin türüne bakar ve o türün storage değerini elde eder.
	- Bu kullanımda ifadenin parentez içerisinde olması gerekmiyor.

- Örnek olarak : 

		int x = 9;
		printf("%zu\n", sizeof x + 5);--> ekran 9 değeri yazdırılır.
		printf("%zu\n",sizeof (x + 5));---> ekrana 4 değeri yazdırılır.
		
		char c;
		printf("%zu\n",sizeof c);---> ekrana 1 yazdırılır.
		printf("%zu\n",sizeof +c);---> ekrana 4 değeri yazdırılır.
		
		
- Unevaulated Context 
	- Bazı ifadedeki işlemler için derleyici işlem kodu üretmiyor.
- Dilin kuralları diyor ki, sizeof operatörünün operandı olan ifade için derleyici işlem kodu üretmez.

		int x = 10;
		printf("%zu\n ",sizeof(x++));
		printf("%d\n",x);--> burada x değeri sizeof operatörünün
		içerisindeki ++ operatörünün etkisine maruz kalmadığı için 
		x değeri ekrana 10 olarak yazdırılır.

- Mesela ;

		int foo(void)
		{
			printf("foo fonksiyonu çağırıldı.");
			return 1;
		}
		
		int main()
		{
			unsigned int x  = sizeof(foo());
		}--> foo fonksiyonu çağırılmaz. foo fonksiyonunun geri dönüş türünün byt'ı yazdırılır.
		
		
		

- Array decay de nadir istisnalardan :

		int a[10]; 
		sizeof(a);---> array decay uygulanmaz.
- Örnek olarak:

		char buf[200];
		int a[50];
		double da[20];
		
		printf("sizeof(buf) = %zu \n",sizeof(buf));-->200*1byte =200
		printf("sizeof(a) = %zu\n",sizeof(a));---> 50*4byte= 200
		printf("sizeof(da) = %zu\n",sizeof(da);---> 20*8 = 160
		
		
- sizeof(a[0]) = dizinin bir teriminin byte'ını verir.
- sizeof(a) --> dizinin kaç byte yer kapladığını verir.
- sizeof(a) / sizeof(a[0]); --> dizinin eleman sayısını verir.

- Örnek kullanım:

		int a[] = { 2, 5, 7, 9, 11, 13,}
		for (int i = 0;i < sizeof(a) / sizeof(a[0]); ++i);
			printf("%d ",a[i]);
			
			
			
- Mülakat Sorusu:

		int a[5] = {0, 1, 2, 3, 4};
		for ( int i =-2; i < sizeof(a) / sizeof(a[0]); ++i)
			printf("%d ", a[i+2]);
			
- Yukarıdaki kodun ekran çıktısı ne olur??
	- Ekrana hiçbirşey yazılmaz. Sebebi ise sizeof operatörü işaretsiz tam sayı türündendir. 
	İşaretli -2 sayısı işaretsiz tam sayı türüne dönüştürüldüğünde çok yüksek bir sayı olarak
	dönüşür. Ve bu yüksek sayı ile dizinin boyutu olan ifade kıyaslandığında for döngüsüne 
	girilmeden program biter.
	

		
  
  
  # Ders 26 - 05.04.2021
  
  		int x = 10;
		printf("%zu\n",sizeof(x > 5 ? 1: 2.4)); 
		---> Burada koşul operatörünün ikinci operatörü olan 1 sayısı üretilir ancak double olarak üretileceği için 
		sizeof operatörünün ürettiği değer 8 olacaktır. Yani koşul operatöründe otomatik tür dönüşümü sadece 
		üretilecek değere göre değil de 2. ve 3. operanttan uygun olana yapılır.
  
  
  - Rastgele sayi üreten bir dizi tanımlansın. Dizinin içerisinde sadece 
  1 adet olan aynı sayıda başla olmayan elemanlar ekrana yazdırılsın.
  	- Print all unique elements of an array.
  	
``` 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


#define SIZE		10
#define randomize()  srand((unsigned)time(NULL))



int main()
{
	
	int str[SIZE];
	randomize();
	
	for (int i = 0; i < SIZE; ++i) {
		str[i] = rand() % 20;
		printf("%3d ", str[i]);
	}
	printf("\n\n");

	/***1. Çözüm***
	* O(n) karmaşıklığında
	
	for (int i = 0; i < SIZE; ++i) {
		int cnt = 0;
		for (int k = 0; k < SIZE; ++k) {
			if (str[i] == str[k] && i != k)
				++cnt;
		}
		if (!cnt)
			printf("%3d ",str[i]);
	}*/

	/***1. Çözüm break statement ile***
	* O(n) karmaşıklığında (complexity)
	
	int i, j;
	for (i = 0; i < SIZE; ++i) {
		
		for (j = 0; j < SIZE; ++j) {
			if (i != j && str[i] == str[j])
				break;
		}
		if (j == SIZE)
			printf("%3d ", str[i]);
	}*/
	 
	/***2. Çözüm*** --> Bu çözüm logaritma karmaşıklığı yönünden avantajlı 
	lakin bellek kullanımı bakımından da dezavantajlı olduğu göz önünde bulundurulmalıdır.
	* O(2n) karmaşıklığı (complexity) ile
	
	int cnt[20] = { 0 };
	for (int i = 0; i < SIZE; ++i)
		++cnt[str[i]];

	for (int i = 0; i < 20; ++i) {
		if (cnt[i] == 1)
			printf("%3d ", i);
	}*/



}
```
  
  
  
  - Max Subsequence Algorithm
  	- Subsequence: Bir dizinin içerisinde ardışık n tane elememan. Yani bir tür alt dizi.
  	- Max Subsequence: Öyle bir alt dizi bulunacak ki bu alt dizinin elemnaları 
  	toplamı bu dizide bulunabilecek en büyük toplam olacak.  
		- Bu kuralın uygulanabilmesi için dizinin elemanlarından en az biri negatif olmalıdır.
  
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	10

int main()
{				
	int a[9] = { 2, -5, -8, 4, -3, 6, -5, 7, -1 };

	print_array(a, 9);
	
	int max_so_far = a[0];
	int max_ending_here = 0;
	int start = 0, end = 0, s = 0;

	for (int i = 0; i < 9; ++i) {
		max_ending_here += a[i];
		if (max_so_far < max_ending_here) {
			max_so_far = max_ending_here;
			end = i;
			start = s;
		}
		if (max_ending_here < 0) {
			max_ending_here = 0;
			s = i + 1;
		}
	}
	printf("Maksimum contiguous sum is %d \n", max_so_far);
	printf("Start index is %d\n", start);
	printf("End index is %d\n", end);
}
	
```
  
  
- Sıralama	
	- Sorting Algorithm
  
 - Sorting, belirli bir kurala göre dizinin verilerini konumlandırmak.
 	- Sorting Criteria --> Sıralama Kriteri


- Bubble Sort Algorithm:

        
        int a[SIZE];
        randomize();
        set_array_random(a, SIZE); 
        print_array(a, SIZE);

        for (int i = 0; i < SIZE - 1; ++i) {
		for (int k = 0; k < SIZE - i - 1; ++k) {
			if (a[k] > a[k + 1]) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
        }
        print_array(a, SIZE);
	
 
 - Tek sayıların sol tarafta sıralı olduğu çiftlerin ise sağ tarafta sıralı olduğu program:
 
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	for (int i = 0; i < SIZE - 1; ++i) {
		for (int k = 0; k < SIZE - i - 1; ++k) {
			if ((a[k] > a[k + 1] && a[k] % 2 == a[k + 1] % 2) || (a[k] % 2 == 0 && a[k + 1] % 2 != 0)) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	print_array(a, SIZE);
}
-----------------------------------------------------------------------------------------------------
if ((a[k] > a[k + 1] && a[k] % 2 == a[k + 1] % 2) || (a[k] % 2 == 0 && a[k + 1] % 2 != 0))
- Yukarıdaki koşul ifadesini yakından incelediğimizde eğer -yan yana olan iki indexten;
	- İkiside tek veya ikiside çift ise ve sol index sağdakinden büyükse yer değiştirilir.
	- Ya da soldaki çift ve sağdaki tek ise yer değiştirilir.
```
 
  
  - Merge Algoritması
  	- İki diziyi sıralı bir şekilde birleştirme.
  	
```	
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	20



int main()
{
	int a[SIZE];
	int b[SIZE];
	int c[SIZE * 2];

	set_array_random(a, SIZE);
	sort_array(a, SIZE);
	print_array(a, SIZE);

	set_array_random(b, SIZE);
	sort_array(b, SIZE);
	print_array(b, SIZE);

	int idx_a = 0;
	int idx_b = 0;


	for (int i = 0; i < SIZE * 2; ++i) {
		if (idx_a == SIZE)
			c[i] = b[idx_b];
		else if (idx_b == SIZE)
			c[i] = a[idx_a];
		else if (a[idx_a] < b[idx_b])
			c[i] = a[idx_a++];
		else
			c[i] = b[idx_b++];
	}
	print_array(c, SIZE * 2);

} 	
	
```  
 
  - Binary Search 
   	- Sıralı bir veri yapısında bir değer aramaya yönelik bir örnek.
   		- O(log n) karmaşıklığında.
   		
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	10



int main()
{
	int a[SIZE];
	int num;
	
	randomize();
	set_array_random(a, SIZE);
	sort_array(a, SIZE);
	print_array(a, SIZE);
    
	printf("Bir sayi giriniz: \n");
	scanf("%d", &num);

	int idx_first = 0;
	int idx_last = SIZE - 1;
	int idx_mid;

	while (idx_first <= idx_last) {
		idx_mid = (idx_first + idx_last) / 2;
		if (num == a[idx_mid])
			break;
		if (a[idx_mid] > num)
			idx_last = idx_mid - 1;
		else
			idx_first = idx_mid + 1;
		
	}
		
	if (idx_first > idx_last)
		printf("Aranan sayi bulunamadi \n ");
	else
		printf("Aranan sayi %d indiste bulundu\n", idx_mid);
}
```

# Ders 27 - 07.04.2021
  
  - Partition Algorithm
  	- Bir dizi tanımlayın. Tekler başta, çiftler sonra olacak şekilde sıralayın. 
  	Partisyen noktasının indeksini yazdırın.
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	10



int main()
{
	int a[SIZE];
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	for (int i = 0; i < SIZE; ++i) {
		for (int k = 0; k < SIZE - i - 1; ++k) {
			if ((a[k] > a[k + 1] && a[k] % 2 == a[k + 1] % 2) || (a[k] % 2 == 0 && a[k + 1] % 2 != 0)) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	print_array(a, SIZE);
	int i;
	for (i = 0; i < SIZE; ++i) {
		if (a[i] % 2 == 0)
			break;
	}
	if (i == SIZE)
		printf("Cift sayi yoktur.\n");
	else
		printf("partisyen noktasi %d. sayidir.", i + 1);

}

```
  
  
# String Literals (Yazılar)

- char str[100];
- '\0' ---> null character
- '0'  ---> sıfırn kod numarası [48 ASCII]
  
  - Yazının son karakterinden sonra artık yazının başka bir karakteri olmadığı için
  dizinin o elemanına özel bir değer atanıyor. Bu null karakterdir.
  
  - char[100];
  	- Bu yazının alabileceği en uzun yazı uzunluğu 99'dur. En az 0 uzunluğunda olur. Sebebine gelecek olursak, 
  	100 karakterlik bir dizi ve sonunda null karakter olacağı için 99 karakter alabilir.
	
Örnek: 
```
	int main()
	{
		char str[100];// Eğer burada dizi global isim 
		//alanında tanımlanırsa dizinin diğer elemanlarına 0 değeri atandığı için ub olmaz.
		
		str[0] = 'C';
		str[1] = 'A';
		str[2] = 'N';
		
		for (int i = 0; str[i] != '\0'; ++i) 
			putchar(str[i]);
		
	}// Undefined Behavior olur. Çünkü dizi for döngüsü içerisinde çöp değerleri de kullanıldı.
	// Eğer str[3] = '\0'; eklenirse undefined behavior olmaz.
```
  - String diziler için for döngüsü idiyomları:
  	- for (int i = 0; str[i] != 0; ++i);
  	- for (int i = 0; str[i], ++i);
  	
- C'de yazının uzunluğunu bir fonksiyon çağırmadan ya da bir döngü oluşturmadan bulma şansımız yok.
!!!Yazının boyutu ile dizinin boyutunu karıştırmamak lazım.!!!

- İnitialization
	- char str[100] = { 'R', 'A', 'S', 'I', 'T' };
		- Burada neden UB yok?
			- Bir dizinin ilk değer almasında verilen değerlerin sayısı dizinin boyutundan
			daha az ise geriye kalan bütün elemanlar sıfırlanır. 
			
	- char str[] = { 'R', 'A' };
		- Bu şekilde döngüde kullanılırsa UB olur. Çünkü dizinin boyutu belirtilmediği için
		dizinin boyutu 2 elemanlı alındı. Bu yüzden de dizinin son elemanı 'A' oldu. Yani null statement olmadığı
		için UB oldu.
  
  - char str[] = { 'R', 'A', 'S', '\0' };
  - printf("%zu", sizeof(str));--> Ekrana 4 yazdırılır. 4x1.
  - Yazının uzunluğu ise 3'tür.



- char str[3] = { 'a', 'b', 'c' };	
  for (int i = 0; str[i] != '\0'; ++i)
  	putchar(str[i]);
	- UB olur. Döngü diziyi taşıracaktır.
  
  
  
  - char str[] = "furkan";
    printf("sizeof(str) = %zu\n",sizeof(str));---> ekrana 7 yazdırılır.
    
    
    
    
   - char str[SIZE];
     printf("Bir yazı giriniz:\n ");
     scanf("%s", str);
     	- scanf fonksiyonuna str dizisi array decay olarak adres gönderilmiş.
     	- &str[0] olarak da gönderilebilirdi.
	- Ancak &str olarak gönderilemez. Bu şekilde gönderimin farklı bir anlamı vardır.
     for (int i = 0; str[i] != '\0'; ++i)
     	putchar(str[i]);
		- Bu şekilde içinde boşluk olmayan yazılar alınıp ekrana yazdırılır ancak boşluktan sonrası yazdırılmaz.
		
    
    - str[0] = "ali"; --> Bu c'de bir sentaks hatası değil ama yanlıştır.
     Bir tam sayı değişkene bir adres atamış oluyorsunuz.
     
     
     
     - char[SIZE] = "erdinc kaya";
       printf("isim : %s\n",str);
       		- Tüm ismi yazar.
       		

     
     - **puts fonksiyonu:
     	- Variadic bir fonksiyon değildir.
     
      		char name[100] = "ali";
		char surname[100] = "ertolga";
		
		puts(name); --> ali'yi ekrana yazdırır ve '\n' karakterini kendisi verir.
		
	

  void sgets (char*p)
  {
  	int c;
	while ((c = getchar()) != '\n')
		*p++ = (char)c;
	*p = '\0';
  }
	
  int main()
  {
  	char str[SIZE];
	printf("Bir yazi giriniz: ");
	sgets(str);
	printf("yazi : [%s] \n", str);
  }--> Bu kodda boşluk karakteri olsa dahi tüm satırı diziye alabilecektir.
  
  
  
  
  - Yazının uzunluğunu bulan program:
  
  		char str[SIZE];
		printf("Bir yazi girin: ");
		sgets(str);
		
		int len = 0;
		for (int i = 0; str[i] != 0; ++i)
			++len;
		printf("dizinin uzunlugu : %d", len);
		
		// ya da
		int i;
		for (i = 0; str[i] != '\0'; ++i)
			; // null statement
			
		printf("Uzunluk : %d\n", i);

- Bir yazı girilsin. Girilen yazı ilk olarak girildiği gibi ekrana yazdırılsın.
Sonra sonuna ! konularak yazdırılsın.

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{

	char str[SIZE];
	printf("Bir yazi giriniz: ");
	sgets(str);

	/*** 1. Çözüm***
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		putchar(str[i]);
	printf("\n");
	str[i++] = '!';
	str[i] = '\0';

	for (i = 0; str[i] != '\0'; ++i)
		putchar(str[i]);*/

	/*** 2. Çözüm***
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		; // null statement
	printf("[%s] \n",str);
	
	str[i++] = '!';
	str[i] = '\0';
	printf("[%s] \n",str);*/

}

```

- İki kelime toplayan kod:

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE];

	printf("iki kelime giriniz:");
	scanf("%s%s", s1, s2);

	int i;
	for (i = 0; s1[i] != '\0'; ++i) {
		s3[i] = s1[i];
	}
	int k;
	for (k = 0; s2[k] != '\0'; ++k)
		s3[i + k] = s2[k];
	s3[i + k] = '\0';

	printf("[%s] +[%s] = [%s] ", s1, s2, s3);
}
	
	
```

  
- Ekrana bir yazı girilsin. Girilen yazıda ekrana girilen karakter aratılıp kaç tane olduğu ekrana yazılsın.
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{
	char str[SIZE];

	printf("Bir yazi giriniz:\n");
	sgets(str);

	printf("Ekrana bir karakter giriniz: ");
	int c = getchar();
	
	int cnt = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		if (c == str[i])
			++cnt;
	}
	printf("%d tane \n", cnt);


}
---> Eğer büyük-küçük harf duyarlılığı olmasın dersek

	if(toupper(s[i] == toupper(c))
     olarak if ' i güncelleyebiliriz.
```



 
- Ekrana bir yazı girilecek. Yazıda her harften kaç tane olduğunu ekrana yazdıran program.

```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{
	char str[SIZE];
	int cnt[26] = { 0 };

	printf("Ekrana bir yazi giriniz: \n");
	sgets(str);

	int i;
	for (i = 0; str[i] != '\0'; ++i) {
		if (isalpha(str[i])) {
			
			++cnt[toupper(str[i]) - 'A'];
		}
	}

	for (int k = 0; k < 26; k++) {
		if(cnt[k] != 0)
			printf("[%c]  [%d]\n", 'A' + k, cnt[k]);
	}
}
```
  
  
  - İlave bir dizi kullanmadan girilen 2 kelimenin yerlerini değiştir.
  ```
  #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{
	char str[SIZE];
	printf("Aralarinda tek bir bosluk karakteri olan iki isim giriniz: \n");
	sgets(str);
	printf("[%s] \n", str);

	

	int i;
	int idx_first1, idx_first2, idx_last1, idx_last2;
	idx_first1 = 0;
	for (i = 0; str[i] != ' '; ++i)
		; // null statement
	idx_last1 = --i;
	idx_first2 = i + 2;
	for (; str[i] != '\0'; ++i)
		;
	idx_last2 = --i;
	printf("[%d  %d] [%d   %d] \n", idx_first1, idx_last1, idx_first2, idx_last2);

	//[ahmet necati]
	//[necati ahmet]
	//[nahmet ecati]
	//[neahmet cati]
	//[necahmet ati]
	//[necaahmet ti]
	//[necatahmet i]
	//[necatiahmet ]


	for (int j = 0; idx_first2 != idx_last2 + 1; ++j) {
		for (int k = idx_first2++ - 1; k >= j; k--) {
			printf("%d\n", k);
			char temp = str[k];
			str[k] = str[k + 1];
			str[k + 1] = temp;
		}
			++idx_first1;
			++idx_last1;
	printf("[%d  %d] [%d   %d] \n", idx_first1, idx_last1, idx_first2, idx_last2);
	printf("[%s] \n", str);
	}
	//[6  10] [12   11]
	//[necatiahmet ]
	for (int j = idx_last1; j > idx_first1 - 1; --j) {
		char temp = str[j];
		str[j] = str[j + 1];
		str[j + 1] = temp;
	}
	printf("[%d  %d] [%d   %d] \n", idx_first1, idx_last1, idx_first2, idx_last2);
	printf("[%s] \n", str);
	
	pline();
	printf("[%d  %d] [%d   %d] \n", idx_first1, idx_last1, idx_first2, idx_last2);
	printf("[%s] \n", str);
	

}
	
  ```
  
 - Ekrana bir yazı girilecek bir de karakter girilecek .
  Girilen karakter girilen yazıdan çıkarılacak ve yazının girilen karaktersiz hali ekrana yazdırılacak.
  
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100



int main()
{
	char source[SIZE];
	char dest[SIZE];
	printf("Ekrana bir yazi giriniz: \n");
	sgets(source);
	printf("[%s]\n", source);

	printf("Ekrandaki yazidan hangi karakterin cikmasini istersiniz? \n");
	int c = getchar();
	int idx_write = 0;
	for (int i = 0; source[i] != '\0'; ++i) 
		if (source[i] != c) 
			dest[idx_write++] = source[i];
	dest[idx_write] = '\0';
	printf("[%s] \n", dest);

	
}
```
 - Yukarıdaki programı bir de ek bir dizi kullanmadan yapalım.
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"


#define SIZE	100


int main()
{
	char str[SIZE];
	printf("Bir yazi giriniz: \n");
	sgets(str);
	printf("Bir karakter giriniz: \n");
	int c = getchar();

	int idx_write = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		if (str[i] != c)
			str[idx_write++] = str[i];
	str[idx_write] = '\0';
	printf("[%s] ", str);

}
```

 - Reverse Algorithm
 	- Bir veri yapısındaki öğeleri ters çeviren algoritma
 ```
 #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"
#include <time.h>

#define SIZE	100


int main()
{
	char str[SIZE];
	
	printf("Bir yazi giriniz:\n");
	sgets(str);
	
	int len = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		++len;
	}

	printf("[%s] \nboyut : %d\n", str, len);

	for (int i = 0; i < len / 2; ++i) {
		char temp = str[i] ;
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	
	printf("[%s] \n", str);



}
 ```
	
  - Ya da
  
  
  ```
  #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"
#include <time.h>

#define SIZE	100


int main()
{

	int a[SIZE];
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	for (int i = 0; i < SIZE / 2; ++i) {
		int temp = a[i];
		a[i] = a[SIZE - i - 1];
		a[SIZE - i - 1] = temp;
	}

	print_array(a, SIZE);

}
  
  ```
  
- Örnek mülakat sorusu:
	- Bir yazının tersten ve düzden okunuşu aynı ise polindrom sayıdır.
	
- Para hazır, ama Rıza harap.

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"
#include <time.h>

#define SIZE	100


int main()
{
	
		char str[SIZE];
		char temp[SIZE];

		printf("bir yazi giriniz: \n");
		sgets(str);
		printf("[%s]\n", str);

		int len = 0;
		for (int i = 0; str[i] != '\0'; ++i)
			if (isalpha(str[i]))
				temp[len++] = toupper(str[i]);

		int i;
		for (i = 0; i < len / 2; ++i) {
			if (temp[i] != temp[len - 1 - i])
				break;
		}

		if (i == len / 2)
			printf("palindrom yazidir.");
		else
			printf("palindrom degildir.");
	
}
```
  
 - Ekrana bir yazı girelim ve kaç kelimeden oluştuğunu ekrana yazdıralım.
 
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "nutility.h"
#include <time.h>

#define SIZE	  100
#define OUTWORD		0
#define INWORD	    1


int main()
{
		char str[SIZE];

		printf("bir yazi giriniz: \n");
		sgets(str);
		printf("[%s]\n", str);
		
		int word_flag = OUTWORD;
		int word_cnt = 0;

		for (int i = 0; str[i] != '\0'; ++i) {
			if (isspace(str[i]))
				word_flag = OUTWORD;
			else if (word_flag == OUTWORD) {
				word_flag = INWORD;
				++word_cnt;
			}
		}
		printf("%d kelime var.", word_cnt);	
}
``` 
  
# Ders 28   09.04.2021
  
  
 - İki yazının eşitliğini sınamak.
 
  
  ```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define SIZE	100



int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("Iki adet yazi giriniz:\n");
	scanf("%s%s", s1, s2);

	int flag = 0;
	int i = 0;

	while (s1[i] == s2[i]) {
		if (s1[i] == '\n') {
			flag = 1;
			break;
		}
		++i;
	}

	if (flag)
		printf("İki yazi birbirine esit degildir.\n");
	else
		printf("iki yazi birbirine esittir.\n");
}
  ```
  
  
  - Bir mülakat sorusu:
 	- İki değişkeni ara bir değişken tanımlamadan yer değiştiriniz.
 	
		int x, y;
		printf("Iki tam sayi giriniz: \n");
		scanf("%d%d", &x, &y);
		x ^= y; y ^= x, x ^= y;
		
		printf("x = %d , y = %d \n", x, y);


- Unique rand 
 	- #define URAND_MAX   10   , makrosu tanımlıyken fonksiyonun işlevi 0 dahil 9 dahil rastgele bir tamsayı üretmeli.
 	- Her üretilen sayı unique olmalıdır. 
 	- İşlev tüm rastgele sayıları ürettikten sonra geri dönüş değeri olarak -1 değeri döndürmelidir.

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <time.h>

#define URAND_MAX	10

int urand(void)
{
	static int flags[URAND_MAX];
	static int cnt = 0;

	if (cnt == URAND_MAX)
		return -1;
	
	int num = 0;

	while (flags[num = rand() % URAND_MAX])
		;
	cnt++;
	flags[num] = 1;

	return num;
}

int main()
{
	randomize();
	for (int i = 0; i < URAND_MAX; ++i)
		printf("%d ",urand());

	printf("\n");
	printf("hata degeri %d", urand());

}

``` 

- Reverse Copy Algorithm
	- Ekrana girilen sayıyı tersden ekrana yazdıran program:

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <time.h>

#define SIZE	100



int main()
{
	
	char source[SIZE];
	char dest[SIZE];

	printf("Bir yazi giriniz:\n");
	sgets(source);

	printf("[%s] \n", source);

	int len = 0;
	for (int i = 0; source[i] != '\0'; ++i)
		++len;

	printf("%d\n", len);

	int x = 0;

	while (len != 0)
		dest[x++] = source[--len];

	dest[x] = '\0';

	printf("[%s]", dest);

}
```

- Yazıdan sayıya dönüşüm yapmak:


```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <time.h>
#include <ctype.h>
#define SIZE	100



int main()
{
	
	char str[SIZE];

	printf("Bir yazi giriniz: \n");
	scanf("%s", str);
	printf("[%s]\n", str);

	int num = 0;

	for (int i = 0; str[i] != '\0'; ++i) 
		num = 10 * num + str[i] - '0';
		
	
	/***8lik sayi sisteminde***
	for (int i = 0; str[i] != '\0'; ++i)
		num = 8 * num + str[i] - '0';*/

	/***2lik sayi sisteminde***
	for (int i = 0; str[i] != '\0'; ++i)
		num = 2 * num + str[i] - '0';*/
   


	/***16lik sayi sisteminde***
	for (int i = 0; str[i] != '\0'; ++i) {
		if (isdigit(str[i]))
			num = 16 * num + str[i] - '0';
		else if (isxdigit(str[i]))
			num = num * 16 + 10 + toupper(str[i]) - 'A';
			
	}*/

	printf("sayi = %d", num);


}
```

  
  
  
- İnline Expansion
	- Bir fonksiyon çağrısında, derleyici çağrılan fonksiyonun tanımını görüyor ise ve eğer uygun bulduğu taktirde 
	fonksiyona giriş çıkış kodunu üretip linker a referans ismi yazmak yerine doğrudan linker ı bypass ediyor.
	Ve bu fonksiyonun derlenmiş koduna yerleştiriyor.
		- Bu işlem fonksiyon makrolarındaki gibi gerçekleşmez.
	
		int square (int x, int y)
		{
			return x * x + y * y;
		}
  		int main()
		{
			int a = 10;
			int b = 20;
			int x = square(x, y);
		}
  
 - Yukarıdaki kodda derlenirken fonksiyon satırı az olduğundan optimize edilip fonksiyon kaldırılıp o kodu 
  fonksiyonsuz kullanılmasına denir. 
	  	- Fonksiyonel makrolardan çok dah güvenlidir.
	  		
- Derleyicinin inline expansion yapması için;
	- Dereyici fonksiyon tanımını mutlaka görmeli.
	- Derleyicinin yaptığı analizle bu açılımdan bir fayda sağlamayacağı sonucunu çıkarmış olmalı.
	- Optimizasyon switchleri
	- Fonksiyondaki kod çok komleks olmamalı.

- İnline anahtar sözcüğü ;
	
		inline int square(int x, int y)
		{
			return x * x + y * y;
		}
  - Bir fonksiyon yukarıdaki gibi tanımlandığında, derleyiciden eğer uygunsa bu fonkiyonu bulunduğu yerde açmasını istiyoruz.
  - İnline fonksiyon başlık dosyalarında tanımlanmalıdır.
  - Normal bir fonksiyon başlık dosyalarında tanımlanmamalı.(linker hatası).
  
  
  # Pointers (İşaretçiler, Göstericiler)
  
  - Pointer adres anlamında kullanılan bir sözcük.
  - Öyle ifadeler olacak ki bu ifadeler bir değişkenin adresi anlamına gelen ifadeler.
  	
		int x = 10;
		&x --> x'in adresi
		
		
 - T x;
 	- Eğer bir ifade T türünden bir nesnenin adresi anlamına geliyorsa o ifadenin türü T* olarak kabul ediliyor.
 	- İnt türden nesne adresi anlamına gelen ifadenin adres türü int* 'dir.
 		 - double*
 		 - char*
	- Farklı türden nesnelerin adresleri farklı türdendir.
	
	
	int x; ---> türü int olan bir değişken
	int* ptr ---> ptr, int türden bir nesnenin adresini (deger olarak) tutacak degisken.
		- ptr is a pointer to int
	
	
	
	
# Ders 29 12/04/2021

  
 #include <stdio.h>
 
 int *gp; --> int türden bir nesnenin adresine tanımlamak amaçlı kullanılmış global pointer değişken
 
 void func(int *ptr)
 {
 	char *p; --> Otomatik ömürlü yerel pointer değişken.
	static double *dp ---> double türken bir nesnenin adresini tutması için tanımlanmış static bir yerel değişken.
 }
  
  - Otomatik ömürlü pointer değişken ilk değer verilmezse çöp değerler hayata başlarlar.
  - Global ömürlü pointer değişkene ve static ömürlü yerel değişkene ilk değer verilmezse ilerde ayrıntılı 
  inceleyeceğimiz özel bir adres sabitiyle hayata başlatılıyor.
  	- Null pointer
  
  
  - Sistemde nesne adresleri hangi türden nesnenin adresi olursa olsun aynı miktarda yer kaplıyor.

	32 bitlik sistem ---> 4 byte
	64 bitlik sistem ---> 8 byte 
	bazı sistemler -----> 2 byte
	

	
  
  		printf("sizeof(char) = %zu \n", sizeof(char));//1
		printf("sizeof(char) = %zu \n", sizeof(char));//4

		printf("sizeof(short) = %zu \n", sizeof(short));//2
		printf("sizeof(short) = %zu \n", sizeof(short));//4

		printf("sizeof(int) = %zu \n", sizeof(int));//4
		printf("sizeof(int) = %zu \n", sizeof(int));//4

		printf("sizeof(double) = %zu \n", sizeof(double));//8
		printf("sizeof(double) = %zu \n", sizeof(double));//4
  
  
  
  
 - int *p1, p2;---> burada iki değişkende pointer değişken değildir.
   p1 --> int* türden
   p2 --> int türden
   
  
 - Her iki değişkenin de pointer olması için

		int *p1, *p2; //olmalı.
		
	

- Bir pointer değişkene adres olmayan ifade atanmaz.

		int x = 10;
		int* p;
		p = x;
		
		
- int a[10]; // buradaki köşeli parantez declaratördür.
  a[5];// Buradaki köşeli parantez operatördür.
  
  
  Pointer Operators:
  
  öncelik seviye tablosu
  
  1-->   []    ->
  2-->   &      *
  
  + [] --> subscript/index operator
  + -> --> member selection op./arrow op
  + &  --> address of op. /adres of
  + *  --> dereferencing / indirection (içerik op)


**Adress of Operator (&)

- 2. öncelik seviyesinde ve sağdan sola öncelik seviyesine sahip.
- Unary prefix

- Adres operatörünün operantının L value expression olması gerekiyor.
- Adres operatörü ile oluşturulan ifadeler R value olmak zorunda.

		int x = 10;
		&x = 15; ---> yanlış kullanımdır. (sentaks hatası) &x R value olduğu için değer ataması yapamayız.
	

  
  
 - int * ptr = &x; ---> Bir pointera ilk değer verilmesi.
  	- Ptr'nin değeri x'in adresi.


- int x = 10;
  int y = 20;
  int * ptr = &x; ---> initialize edildi.
  ptr = &y; ----> ptr'ye y'nin adresi atandı.
  
  - Eğer ptr, bir pointer değişken ise ve ptr'nin değeri x isimli değişkenin adresi ise 
  	- ptr'nin değeri x'in adresi
  	  ptr, x'i gösteriyor demek aynı anlamda.
	  ptr, x'e işaret ediyor.
	  ptr points to x
	  
	  

- int x = 10;
  int y = 20;
  
  int* p1 = &x;
  int* p2 = &y;
  
  p1 = p2; // Bu kod sonrasında p1 y'yi gösteriyorken p2 de y'yi gösteriyordur.
  
 
 
 
 - Pointer değişken söz konusu olduğunda iki ayrı adresten bahsedilebilir.

		int x = 10;
		int* ptr = &x;
		
		//ptr x'in adresini gösterir.
		//&ptr ise ptr'nin adresini gösterir.
		
- int x = 10;
  int *ptr = &x; --> ptr, x'in adresini tutuyor.
  int * p = ptr; --> p, ptr de tutulan  x'in adresini tutuyor.
  

- double x;
  int* p = &x;// Yanlış kullanımdır.(sentaks hatası değildir)
  
  
  - C'de yanlış olmakla beraber farklı adres türleri arasında tür dönüşümü vardır.

 
  - int a[10] = { 0 };
    a ---> &a[0] array decay
    
    int *p = a; // Burada a dizisini p pointer değişkenine atamıyoruz. a dizisinin ilk değerinin adresini atıyoruz.
    
    
  - array decay'in iki istisnası vardı. Pointerlarla ilgili olanu hatırlayalım.
  sizeof operatöründe array decay uygulanmaz.
  	
		int a[5] = { 0 };
		printf("%zu\n", sizeof(a));---> dizinin boyutunu gösterir: 5x4 byte = 20
  		printf("%zu\n", sizeof(&a[0]));----> pointer türü boyutu: 4 byte
		

   - printf işlevi ile bir adresi formatlı olarak std. çıkış akımına yazdırabilirsiniz.
		- Kullanılan format: conversion specifier %p
		
			int x = 10;
			int* ptr = &x;
			printf("&x = %p\n " , &x); --> x'in adresi
			printf("ptr = %p\n" , ptr); --> x'in adresi
			printf("&ptr = %p\n", &ptr); --> ptr'nin adresi
			


 - &x = ptr ; --> Burada x'in adresi değiştirilmeye çalışılmış ancak C'de böyle birşey pek söz konusu değil.

- int a[5] = { 0 };
  int b[5] = { 0 };
  a = b; --> derleyici bunu şu şekilde algılar : &a[0] = &b[0]
   	Ve hata verir. &a[0] L value değildir.
	
**Deferencing / indirection Operatörü ( İçerik Operatörü)

- 2. Öncelik seviyesine sahip
- unary prefiks op.

- İçerik operatörünün operantı adres olmak zorundadır.


- int x = 10;
  int* ptr = &x;
  int a[10] = { 0 };
  *x --> hata verir. x adres değil.
  *&x --> sağdan sola öncelik yönü olduğu için (&x) adres olduğu için hata vermez.
  *a  --> &a[0] array decayden dolayı hata vermez.
  		- Yani sonuç olarak;
  		  *(op) --> burada op adres olmak zorunda.
		  

- İçerik operatörü, operantı olan nesneye erişimi sağlıyor.

- int x = 10;
  *&x = 45; // buradaki kod ile x = 45 yazılması aynı anlama gelir ikiside x'e 45 atamasını yapar.
  	- Ancak tabiki piyasada böyle bir kullanım söz konusu değildir. 
  		- Sadece obfuscation (kodun okunmasını zorlaştırmak amaçlı) kullanılabilir.


- int [] = { 10, 20, 30 };
   *a =22; --> a[0] = 20 oldu.
   
   
- int x = 33;
  int *p = &x;
  *p =77; // x, 77 yapıldı.
   
  
  - İçerik operatörüyle oluşturulan ifade her zaman L value expressiondur.
  
  
  - a[++x] --> x + 1 inci eleman
    ++*a --> ++a[0] 
    
  
  - Pointer (gösteren)
    Pointee (gösterilen)
    
    
    
- int a = 5;
  int b = 8;
  int c = 11;
  
  int *ptr;
  ptr = &y;
  *ptr *= 2;
  ptr = &b;
  *ptr *= 2;
  ptr = &c;
  *ptr *= 2;
   	- Yukarıdaki kod parçacığında a, b, c değerleri iki katına çıkartılmış.
  
  
  - Call by reference

		void func(int* ptr)
		{
			*ptr = 677;
		}
  		int main()
		{
			int x = 10;
			func(&x); --> x değeri 677 olur.
		}
		

- scanf("%d", &x);
  	- scanf'e x'in adresini gönderecek olmamızın sebebi, x'i değiştirecek olması. İşte bu sebeple bu çağrı call by reference olmak zorunda.


- swap fonksiyonu (call by reference)

		void swap(int* a, int* b)
		{
			int temp = *a;
			*a = *b;
			*b = temp;
		}
		int main()
		{
			int x,y;
			printf("iki tamsayi giriniz: ");
			scanf("%d%d ", &x, &y);
			swap(&x, &y);
			
		}--> swap fonksiyonuna x ve y'nin adresleri gönderildi çünkü x ve y'nin değeri fonksiyonun içerisinde değiştirilmek isteniyor.
		Bu yüzden call by reference olmalı.
		

- swap fonksiyonuna farklı bir argüman gönderim şekli örneği:
	
		void swap(int* a, int* b)
		{
			int temp = *a;
			*a = *b;
			*b = temp;
		}
		int main()
		{
			int x = 35, *p1 = &x;
			int y = 45, *p2 = &y;
			
			swap(p1, p2);
			
		}
  
  - Bir örnek:
  
  		void foo(int* a, int*b)
		{
			*a *= *b;
		}
		void func(int* p, int*q)
		{
			*p += *q;
			foo(p, q);
		}
		int main()
		{
			int x = 5, y = 9;
			func(&x, &y);
			printf("x = %d\n, x);
			printf("y = %d\n, y);
			
		}
	
- Eğer bir fonksiyonun sahip olduğu değişkenin çağrılan bir fonksiyon tarafından değiştirilmesi söz konusu ise "call by reference" şarttır.


  		void iscan(int* ptr)
		{
			int c;
			*ptr = 0;
			while ((c = getchar()) != '\n') {
				*ptr = *ptr * 10 + c - '0';
			}
		}

		int main()
		{
			int x;
			printf("bir sayi giriniz:");
			iscan(&x);
			printf("x = %d", x);
		}
  
  
  # Ders 30 - 14.04.2021
  
  - call by reference 
    pass by reference --- same meaning
    
   

- Neden bir fonksiyonun parametre değişkeni pointer olabilir?
	- Bazı fonksiyonlar kendilerini çağıran koda bir değer iletmek istiyorlar.
	  Şimdiye kadar değer iletmenin tek bir yolunu gördük. Geri dönüş değeri.
	  Oysa şimdi bir fonksiyonun başka bir fonksiyona değer iletmesi için ikinci bir mekanizma daha var.
	  Fonksiyona adres gönderilir ve fonksiyonda gönderilen adresten nesneye ulaşılarak nesneye veriler yazılır.
	  
	 
- Örnek olarak iki farklı fonksiyonda dairenin alanı:

1. alternatif:
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "nutility.h"

#define SIZE	10

double get_circle_area(double radius)
{
	return 3.1415926 * radius * radius;
}

  
int main()
{
	double r, area;
	printf("Yaricap giriniz: ");
	scanf("%lf", &r);
	area = get_circle_area(r);
	printf("dairenin alani = %lf ", area);

}
```
2. alternatif  (pointer ile oluşturma)
```

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "nutility.h"

#define SIZE	10

void get_circle_area(double radius, double* parea)
{
	*parea = 3.1415926 * (radius) * (radius);
}

  
int main()
{
	double r, area;
	printf("Yaricap giriniz: ");
	scanf("%lf", &r);
	get_circle_area(r, &area);
	printf("dairenin alani = %lf ", area);

}
```
  
- Bir fonksiyonun varlık nedeni bir değer hesaplaması ise;
   iki ayrı yapı söz konusu olabilir.
  		- Alt fonksiyonda hesaplanan değeri geri dönüş değeri mekanizması yazılan ana fonksiyona iletmesi.
  		- Alt fonksiyonun hesapladığı değeri ana fonksiyondan gönderilen adresteki nesneye yazması. (Pointer kullanarak)


- Hem okunurluk açısından hem de ekstra bir değişken kullanılmamak isteniyorsa geri dönüş mekanizması ile fonksiyon oluşturmak seçilebilir.

- Peki hangi durumlarda pointer kullanarak fonksiyon oluşturuyoruz ?
  
- Return statement ile bir geri dönüş değeri gönderdiğimizde aslında derleyici şöyle bir kod üretiyor. Derleyici fonksiyonun geri dönüş değerinin 
yazılacağı bir bellek alanı ayırıyor. Yani bir geçici nesne oluşturuyor.
	
		geçici_nesne = return statement;
		double area = geçici_nesne;
		
Derleyici özel bir optimizasyon yapmaz ise iki kez blok kopyalaması söz konudur.

- Şimdi eğer iletilecek değer 4 byte , 8 byte gibi büyük olmayan değer ise fonksiyonun geri dönüş değeri mekanizması oluşturmak herhangi bir dezavantaj 
oluşturmuyor. Ancak ilerleyen süreçte karşımıza öyle değerler çıkacak ki bunlar 4 byte , 8 byte gibi değil de 50, 100, 500 byte gibi değerler olacak.
Bu tür değerleri geri dönüş mekanizması ile iletirsek tipik bir fonksiyon çağrısı ve geri dönüş değerini bir değişkende saklama kodunda sizin programın çalışma
zamanında maliyetiniz 2 kat artacak.

- Peki pointerlarla nasıl yapıldığını incelersek;  biz fonksiyona sadece adres gönderdiğimiz için adresde derleyiciye göre değişmekle birlikte 
4 byte yani nesne bellekte ne kadar büyük yer kaplasa da siz adresi gönderdiğiniz için ara kopyalama işlemi yapılmıyor.

- Bu yüzden C'de tipik olarak hesaplanan değer tekse ve bu değer int, double gibi türlerse her zaman tercihimiz return statement olur. Fakat
ne zaman ki hesaplanacak değerin bellekte kapladığı yer çok büyük oluyor.  
işte o zaman gereksiz maliyetten kaçınmak için fonksiyonun parametre değişkeni pointer yapılıyor.

- Özetlersek; Neden fonksiyonun parametresi pointer olur?
	- Geri dönüş mekanizmasını kullanmayıp gönderilen adresteki nesneye yazmak.
	- Kullanılacak nesnenin storage ihtiyacı fazla ise
	- Bir fonksiyon çağırılan koda birden fazla değer iletecekse. Call by value ile return statement
	  sadece bir değer döndürebiliyorken call by reference ile istenilen kadar geri dönüş değeri üretilebilir.
	  
	  
- C dilinde bir fonksiyon başka bir fonksiyona bir dizi gönderecek ise call by reference zorunludur.
- Diziler farklı fonksiyonlarda sadece adres aktarımı ile kullanılabilir.


**Const anahtar sözcüğü ve Const semantiği:

- const int x = 45; --> yazıldığında derleyiciye x'in 45 değeri ile hayata başladığını ve bu değerin x'in ömrünün sonuna kadar değişmeyeceği bilgisi 
veriliyor.

- Neden const değişkenler kullanırız?
	- Yazan programcının kendisine yardımcı olabilmesi için. Mesela ilk yüz asal sayıyı tutan bir sabit dizi düşünelim.
	progra akışında bu diziden kaçıncı asal sayı istenirse olde edilmek amacıyla tanımlanmış olsun. Program akışında herhangi bir sebeple dizinin herhangi
	bir elemanı değiştirilmeye çalışılırsa bu dizinin kullanım amacı bozulacaktır.
	- Okuyana yardımcı olmak.
	- Derleyiciye yardımcı olmak. Derleyiciler bir değişkenin veya bir dizinin hayatı boyunca değişmeyeceğini bilirlerse eğer 
	daha iyi bir kod optimizasyonu yapacaktır.

- const anahtar sözcüğü ile bir değişkene ilk değer verilmeden tanımlanırsa bu yanlıştır. Yani siz x'in çöp değerinin 
ömrü boyunca değişmeyeceği bilgisini veriyorsunuz.

- C dilinde const anahtar sözcüğü ile tanımlanan değişkenler, sabit ifadesi gereken yerlerde kullanılamazlar.

		const int size = 299;
		int a[size] = { 0 };//Geçerli değil.
		
- const x = 10;
  int*P = *&x;
  *p = 35; -- Bu UB dir. Sentaks hatası aşılmış ancak sonucun nasıl olacağı belirsizdir.
  
  
  **Pointer Değişkenler ve Const
  
  - İki kullanım mevcuttur.
  	- int *const ptr = &x;
  	- int const *ptr = &x;
  	
1- int *const ptr = &x; şeklinde kullanım:
	- const pointer
	
		int x = 10;
		int* cont ptr = &x;
 - Yukarıda ptr hayata x'in adresiyle gelecek ve hep x'in adresini tutacak.
	- Ptr hayatu boyunca x'i gösterecek.

- Eğer pointera başka bir adres atamayı denerseniz sentaks hatası.

		ptr = &y;// hata
		*ptr = 98;// x'e 98 atanmış ptr de herhangi bir değişiklik yapılmadığı için kesinlikle karıştırılmamalı.
		
2- int const *ptr = &x; veya const int *ptr = &x;
	- pointer to const int

Bu pointerın gösterdiği nesneye bu pointer yoluyla eriştiğinizde (*ptr), bu nesneye karşılık gelen nesneye bir atama yapamazsınız.
Yani ptr adeta diyor ki benim vasıtamla benim gösterdiğim nesneye salt okuma(access) amaçlı erişebilirsiniz.

		*ptr =  45; --> hata
		int b = *ptr; --> geçerli
		ptr = &y; --> geçerli
		
		
- Yani const ne'den önce gelirse const olan o dur.
	
		int *const p = &x; // p'ye atama yapamazsın.
		const int *p = &x; // *p'ye atama yapamazsın.
		

- const int * const ptr = &x; // Bu durumda iki anlamda birleşiyor.
	- const pointer to const int

		ptr = &x; // hata
		*ptr = &x; // hata
		

- T bir tür olmak üzere
	- void func(T *p)
		- mutator
		- setter
		- set function
		- Yukarıdaki fonksiyon sizden adresinin aldığı değişkeni değiştireceğini anlatıyor.

	- void func(const T* p)
		- getter
		- accessor
		- Bu fonksiyon sizden aldığı adresteki nesnede herhangi bir değişiklik yapılmayacağını sadece okuma amaçlı alındığını anlatıyor.


**Pointer Aritmetiği:

- C dilinde;
	-  bir adresle bir tamsayı toplanabilir.
	-  bir adresle bir tamsayı çıkartılabilir.
- Tüm bu işlemler geçerlidir.

		ptr + i;//legal
		ptr - i;//legal
		i - ptr;//illegal-geçersiz
		Bu ifadelerin sonucu da adrestir.
		
- C dilinde bir adresle 1 toplandığında bir sonraki (aynı türden) nesnenin adresini elde ederiz.

		int a[0] = { 0 };
		printf("&a[0]  = %p\n", &a[0]); // a[0] 'ın adresi
		printf("&a[0] + 1  = %p\n", &a[0] + 1);// a[1]'in adresi


- a + 5 ile &a[5] aynıdır. a + 5 ile kasıt &a[0] adresindeki nesneden 5 nesne sonrasındaki nesne kastedilmiştir.
- &a[5] ise 5. indisteki elemanın adresi kastedilmiştir.

- a[5] ile *(a + 5) aynıdır.


		int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int *ptr = a;
		
		for (int i = 0; i < 10; ++i) {
			printf("%d %d %d %d \n", a[i], *(a + i), *(i + a), *ptr);
			++ptr;
		}--> yukarıdaki printf'in içerisindeki tüm formatlar aynı nesneyi gösterir.
		
  
  # Ders 31 - 16.04.2021 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
