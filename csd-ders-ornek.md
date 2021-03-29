
#### Sonsuz Döngü (İnfinite loop) Örnek:
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
//e ya da h tuşuna basmasini istiyoruz
// e ya da h dışındaki tuşlara basıldığında prpgram tepki vermeyecek
//sadece e ya da h tuşuna basılınca döngüden çıkacak.



int main()
{
	int ch;
	printf("evet mi hayir mi? \n");

	while ((ch = _getch()) != 'e' && ch != 'h')
		; // Null Statement;
	
	putchar(ch);
	if (ch == 'e')
		printf(" \nevet dediniz.\n");
	else
		printf("\nhayir dediniz\n");
```

	
#### Break deyimini daha iyi anlayabilmek için bir örnek:

```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
a da h tuşuna basılınca döngüden çıkacak.



int main()
{
	

	int c;
	int ival;
	int cnt = 0;
	int sum=0;
	int min, max;



	while (1)
	{
		printf("tam sayi girecek misiniz(e) (h)?--->");
		while ((c = _getch()) != 'e' && c != 'h')
			;//Null Statement
		printf("%c\n", c);

		if (c == 'h')
			break;
		printf("tam sayiyi giriniz:  ");
		ival = (rand() % 2 ? 1 : -1) * rand();
		printf("%d\n", ival);

		if (cnt == 0)
			min = max = ival;
		max = ival > max ? ival : max;
		min = ival < min ? ival : min;

		++cnt;
		sum += ival;


	}
	if (cnt == 0)
		printf("hic sayi girmediniz..\n");
	else 
	{
		printf("%d sayi girdini.\n ", cnt);
		printf(" ortalama : %d\n ", sum / cnt);

	}

}
```





#### ASAL SAYI ÖRNEK

```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isprime(int val)
{
	if (val<=1)
		return 0;
	if (val % 2 == 0)
		return val == 2;
	if (val % 3 == 0)
		return val == 3;
	if (val % 5 == 0)
		return val == 5;

	for (int i = 7; i * i <= val; i+=2)
	{
		if (val % i == 0)
			return 0;


	}

	return 1;

}

int main()
{
	int low, high, count = 0;
	printf("Bir aralik giriniz:");
	scanf("%d%d", &low, &high);

	for (int i = low; i < high; i++)
	{
		if (isprime(i)) {
			printf("%d ", i);
			++count;
		}

	}
	printf("\n [%d  %d] araliğinda %d adet asal sayi vardir.", low, high, count);


}
```

#### Prime Factors (asal çarpanlarını yazdırma)


```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int isprime(int val)
{
	if(val <= 1)
		return 0;
	if (val % 2 == 0)
		return val == 2;
	if (val % 3 == 0)
		return val == 3;
	if (val % 5 == 0)
		return val == 5;

	for (int i = 7; i * i <= val; i+=2)
	{
		if (val % i == 0)
			return 0;


	}

	return 1;
}

void print_prime_factors(int val)
{
	
	int x = val;
	for (int i = 0; i < val; i++)
	{
		if (isprime(i)) {
		
			while (x % i == 0)
			{
				printf("%3d", i);
				x /= i;
			}

		}
	}
	
	

}

int main()
{
	int val;
	printf("input the integer : ");
	scanf("%d", &val);
	print_prime_factors(val);

}
```

#### Prime Factors (asal çarpanlarını yazdırma) (alternatif)
```
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void print_prime_factor(int x)
{
	int val = 2;
	while (x != 1)
	{
		while (x % val == 0) {
			printf("%3d", val);
			x /= val;
		}

		++val;
	}

}

int main()
{
	
	int val;
	printf("enter the integer: ");
	scanf("%d", &val);
	print_prime_factor(val);



}

```
