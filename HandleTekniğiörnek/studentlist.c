#include "studentlist.h"
#include "Student.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	Student s; // data
	struct Node* pnext;
}Node;


struct List {
	Node* gpfirst;
	size_t gcount;

};

ListHandle create_list(void)
{
	ListHandle pd = (ListHandle)malloc(sizeof(struct List));
	if (!pd) {
		fprintf(stderr, "bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}
	pd->gcount = 0;
	pd->gpfirst = NULL;

	return pd;
}

void destroy_list(ListHandle h)
{
	make_empty(h);
	free(h);
}

void push_front(ListHandle h, const Student* p)
{
	Node* pnewnode = (Node*)malloc(sizeof(Node));
	if (!pnewnode) {
		printf("bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}

	pnewnode->s = *p;
	pnewnode->pnext = h->gpfirst;
	h->gpfirst = pnewnode;
	++h->gcount;
}


void get_first(ListHandle h, Student* p)
{
	if (is_empty(h)) {
		printf("bos liste hatasi\n");
		exit(EXIT_FAILURE);
	}

	*p = h->gpfirst->s;
}

void pop_front(ListHandle h)
{
	if (is_empty(h)) {
		printf("bos liste hatasi\n");
		exit(EXIT_FAILURE);
	}
	Node* ptemp = h->gpfirst;
	h->gpfirst = h->gpfirst->pnext;
	free(ptemp);
	--h->gcount;
}

void make_empty(ListHandle h)
{
	while (!is_empty(h))
		pop_front(h);
}


size_t get_size(ListHandle h)
{
	return h->gcount;
}

int is_empty(ListHandle h)
{
	return h->gpfirst == 0;
}

void print_list(ListHandle h)
{
	for (Node* p = h->gpfirst; p != NULL; p = p->pnext) {
		print_student(&p->s);
	}
	printf("--------------------------------------------------------\n");
}


