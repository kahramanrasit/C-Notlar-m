#pragma once

#include "date.h"


typedef struct Student {
	int no;
	char name[16];
	char surname[24];
	char town[20];
	Date bdate;

}Student;


Student* set_student_random(Student*);
void print_student(const Student*);
int cmp_student(const Student*, const Student*);

