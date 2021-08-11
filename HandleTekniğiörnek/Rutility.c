#include "Rutility.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


static int icmp(const void* vp1, const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}
int isprime(int val)
{
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;

}
void pline(void)
{
	printf("\n--------------------------------------------------------------------------------------\n");
}
int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_count = 0;

	while (val) {
		++digit_count;
		val /= 10;
	}
	return digit_count;

}
void set_array_random(int* p, size_t size)
{
	while (size--)
		*p++ = rand() % 10;
}
void print_array(const int* p, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n-------------------------------------------------------------------------------\n");
}
void sort_array(int* p, size_t size)
{
	qsort(p, size, sizeof(int), &icmp);
}
void sgets(char* p)
{
	int c;

	while ((c = getchar()) != '\n')
		*p++ = (char)c;

	*p = '\0';
}
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
void gswap(void* vpx, void* vpy, size_t sz)
{
	char* px = (char*)vpx;
	char* py = (char*)vpy;

	while (sz--) {
		char temp = *px;
		*px++ = *py;
		*py++ = temp;
	}
}
int day_of_week(int d, int m, int y)
{
	return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}


void print_date_time(const struct tm* p)
{
	const char* const pmons[] = {
		"Ocak",
		"Subat",
		"Mart",
		"Nisan",
		"Mayis",
		"Haziran",
		"Temmuz",
		"Agustos",
		"Eylul",
		"Ekim",
		"Kasim",
		"Aralik"
	};
	static const char* const pdays[] = {
		"Pazartesi",
		"Sali",
		"Carsamba",
		"Persembe",
		"Cuma",
		"Cumartesi",
		"Pazar"
	};
	printf("%02d %s %d %s %02d:%02d:%02d\n",
		p->tm_mday, pmons[p->tm_mon], p->tm_year + 1900, pdays[p->tm_wday],
		p->tm_hour, p->tm_min, p->tm_sec);
}

const char* random_name(void)
{
	static const char* const pnames[] = {"Ali", "Veli", "Mehmet", "Ihsan", "Sinan" };

	return random_elem(pnames);
}


const char* random_surname(void)
{
	static const char* const psurnames[] = { "Kahraman", "Yilmaz", "Ozturk", "Yuceer" };

	return random_elem(psurnames);
}

const char* random_town(void)
{
	static const char* const ptowns[] = { "Istonbul", "Kirsehir", "Yozgat", "Antalya", "Sakarya" };

	return random_elem(ptowns);
}
