#### Eşkena Üçgenin Alanı:

               #define _CRT_SECURE_NO_WARNINGS
               #include <stdio.h>
               #include <math.h>




                int main()
                {
               	double side;

                printf(" eskenar ucgenin bir kenariniz giriniz:");
	              scanf("%lf", &side);

	              printf("eskenar ucgenin alanı: %lf olur.", (side*side * sqrt(3)) / 4);



                }
		
		
		
		
#### Bagaj sınırı örneği

- Havalimanına gittiğinizde el bagajının sınırı 9 kg , normal bagajın sınırı 18 kg olsun. Bu sınırlar aşıldığında her kg başı 5 tl ek ödeme alınacaktır. Bu programı yazınız.

```
 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




int main()
{
	int hluggage, luggage;

	printf("El bagajiniz kac kg?\n");
	scanf("%d", &hluggage);
	printf("Bagajiniz kac kg?\n");
	scanf("%d", &luggage);

	if (luggage <= 18 && hluggage <= 9)
		printf("Ek fiyat odemenize gerek yoktur.");
	else if (luggage > 18 && hluggage <= 9)
		printf("odeyeceginiz ek miktar: %d", (luggage - 18) * 5);
	else if (luggage <= 18 && hluggage > 9)
		printf("odeyeceginiz ek miktar: %d", (hluggage - 9) * 5);
	else if (luggage > 18 && hluggage > 9)
		printf("odeyeceginiz ek miktar: %d", (luggage - 18 + hluggage - 9) * 5);
	else
		printf("yanlıs deger girildi.");

 
	


}
```

#### konsolda bir sayı girilsin. bu sayının basamakları toplamı ve basamaklarının yer değiştirilmiş hali ekrana yazılsın


```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int sumvalue(int y)
{
	int retval=0;
	while (y != 0)
	{
		retval += y % 10;
		y /= 10;
	}
	return retval;
}
int chvalue(int x)
{
	int val = 0,y;
	while (x != 0)
	{
		y = x % 10;          
		val = val * 10 + y;
		x /= 10;
	}
	return val;
}

int main()
{
	int val;

	printf("bir sayi giriniz: ");
	scanf("%d", &val);

	printf("basamaklarinin toplami: %d\n", sumvalue(val));
	printf("basamaklarinin yer degistirmis hali: %d\n", chvalue(val));
}
```



#### Diziler Örnekler

```

int main()
{
	
	int digit[] = { 75,58,57,32,15,86 };

	int sum = 0;


	for (int i = 0; i < 6; i++)
	{

		sum += digit[i];

	}
	printf("dizideki sayilarin toplami:  %d", sum);

}

```

#### diziler örnek:

```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main()
{
	int dizi[100];

	int  sayi;

	printf("Eleman sayisi:  ");
	scanf("%d", &sayi);

	for (int i = 0; i < sayi; i++)
	{
		printf("dizinin %d . degerini giriniz: ", i + 1);
		scanf("%d", &dizi[i]);

	}

	printf("\n\n");

	for (int i = 0; i < sayi; i++)
	{
		printf("dizinin %d. degeri = %d\n", i + 1, dizi[i]);

	}
	int sum = 0;
	int average = 0;
	for (int i = 0; i < sayi; i++)
	{
		
		sum += dizi[i];

	}
	average = sum / sayi;
	printf("dizi icerisindeki sayilarin toplami:%d\n", sum);

	printf("dizi icerisindeki sayilarin ortalamasi:%d\n", average);

	

}

```

#### Yıldızlarla Kelebek Çizdirme:
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>




int main()
{

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");

		}

		if (i == 1)
			printf("        *");//8

		else if (i == 2)
			printf("      **"); //6
		else if (i == 3)
			printf("    ***");//4
		else if (i == 4)
			printf("  ****"); //2
		else if (i == 5)
			printf("*****");
		printf("\n");
	}
	for (int j = 5; j > 0; j--)
	{
		for (int i = j; i > 0; i--)
			printf("*");
		if (j == 5)
			printf("*****");
		else if (j == 4)
			printf("  ****");
		else if (j == 3)
			printf("    ***");
		else if (j == 2)
			printf("      **");
		else if (j == 1)
			printf("        *");

	
		
		printf("\n");
	}
}


/*   *        *  //8 boşluk
     **      **  //6 boşluk
	 ***    ***  //4
	 ****  ****  //2
	 **********  //0
	 **********  //0
	 ****  ****  //2
	 ***    ***   //4
	 **      **   //6
	 *        *   //8    */

```

