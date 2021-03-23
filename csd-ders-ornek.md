
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

	
