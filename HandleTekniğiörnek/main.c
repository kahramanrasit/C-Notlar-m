#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Rutility.h"
#include "date.h"
#include "Student.h"
#include "studentlist.h"

#define NLIST		1000

int main()
{
	ListHandle a[NLIST];

	for (int i = 0; i < NLIST; ++i) {
		a[i] = create_list();
	}

	randomize();
	Student s;

	for (int i = 0; i < NLIST; ++i) {
		int n = rand() % 11 + 10;
		while (n--) {
			set_student_random(&s);
			push_front(a[i], &s);
		}
	}

	for (int i = 0; i < NLIST; ++i) {
		printf("%d. listede %zu ogrenci var\n", i + 1, get_size(a[i]));
		print_list(a[i]);
		(void)getchar();
		system("cls");
	}

	for (int i = 0; i < NLIST; ++i) {
		destroy_list(a[i]);

	}

}


/* Raşit KAHRAMAN */
