#ifndef RUTILITY_H  //Multupli inclusion guard
#define RUTILITY_H



#include <stddef.h>

/*Makrolar*/

#define isleap(y)			 ((y)%4 == 0&&((y)%100!=||(y)%400==0))
#define randomize()			 srand((unsigned)time(NULL))
#define asize(x)			 (sizeof(x) /sizeof(x[0]))
#define random_elem(x)		 (x[rand() % asize(x)])


/*Fonksiyon Tanımları*/

int isprime(int val);
void pline(void);
int ndigit(int);
void set_array_random(int* p, size_t size);
void print_array(const int* p, size_t size);
void sort_array(int* p, size_t size);
void sgets(char* p);
void swap(int* px, int* py);
int day_of_week(int d, int m, int y);
void gswap(void* vpx, void* vpy, size_t sz);

void print_date_time(const struct tm* p);

const char* random_name(void);
const char* random_surname(void);
const char* random_town(void);






#endif
