
#define _CRT_SECURE_NO_WARNINGS
#include "date.h"

int main()
{
	Date x;

	set_date(&x, 2, 4, 1987);
	print_date(&x);	// 2 Nisan 1987 Persembe
	set_date_today(&x);
	print_date(&x);// 9 ağustos 2021 pazartesi
	set_date_str(&x, "03-05-1999");
	print_date(&x); // 3 Mayis 1999 Sali

}


===============================================================================================
  
#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include "nutility.h"
  
int main()
{
	randomize();
	Date mydate;

	for (int i = 0; i < 100; ++i) {
		set_date_random(&mydate);
		print_date(&mydate);
	}

}



===============================================================================================

#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include "nutility.h"
  
  
int main()
{
	Date mydate;

	printf("dogum tarihinizi giriniz:");
	scan_date(&mydate);
	print_date(&mydate);

}
  
===============================================================================================
#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include "nutility.h"
  
 void set_date_array(Date* p, size_t size)
{
	while (size--)
		set_date_random(p++);
}


void print_date_array(const Date* p, size_t size)
{
	while (size--)
		print_date(p++);
}

int dcmp(const void* vpx, const void* vpy)
{
	return cmp_date((const Date*)vpx, (const Date*)vpy);
}

int main()
{
	size_t n;

	printf("kac tane tarih girilecek? : ");
	scanf("%zu", &n);
	Date* pd = (Date*)malloc(n * sizeof(Date));
	if (!pd) {
		printf("bellek yetersiz\n");
		return 1;
	}
	
	randomize();
	set_date_array(pd, n);
	clock_t start = clock();
	qsort(pd, n, sizeof(Date), &dcmp);
	clock_t end = clock();
	printf("siralama bitti sure %f saniye \n", (double)(end - start) / CLOCKS_PER_SEC);
	(void)getchar();
	print_date_array(pd, n);

	free(pd);

}

===============================================================================================

  #define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include "nutility.h"
  
  
int main()
{
	Date bdate;
	Date todays_date;

	printf("dogum tarihinizi giriniz: ");
	scan_date(&bdate);
	printf("dogum tarihiniz: ");
	print_date(&bdate);
	set_date_today(&todays_date);
	printf("bugunun tarihi: ");
	print_date(&todays_date);
	int ndays = date_diff(&todays_date, &bdate);

	printf("bugun hayatinizin %d. gunu \n", ndays);
}
===============================================================================================
  
  
#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include "nutility.h"
  
  
int main()
{
	Date bdate;
	Date future_date;

	printf("dogum tarihinizi giriniz: ");
	scan_date(&bdate);
	printf("dogum tarihiniz: ");
	print_date(&bdate);
	ndays_date(&future_date, &bdate, 20000);
	print_date(&future_date);
}

===============================================================================================
  
  
  
  
  
  
  

  
  

