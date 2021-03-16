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
