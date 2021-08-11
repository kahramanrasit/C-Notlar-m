#include "studentlist.h"
#include "Student.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	Student s; // data
	struct Node* pnext;
}Node;


struct List {
	Node* pfirst;
	size_t count;

};

ListHandle create_list(void)
{
	ListHandle pd = (ListHandle)malloc(sizeof(struct List));
	if (!pd) {
		fprintf(stderr, "bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}
	pd->count = 0;
	pd->pfirst = NULL;

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
	pnewnode->pnext = h->pfirst;
	h->pfirst = pnewnode;
	++h->count;
}


void get_first(ListHandle h, Student* p)
{
	if (is_empty(h)) {
		printf("bos liste hatasi\n");
		exit(EXIT_FAILURE);
	}

	*p = h->pfirst->s;
}

void pop_front(ListHandle h)
{
	if (is_empty(h)) {
		printf("bos liste hatasi\n");
		exit(EXIT_FAILURE);
	}
	Node* ptemp = h->pfirst;
	h->pfirst = h->pfirst->pnext;
	free(ptemp);
	--h->count;
}

void make_empty(ListHandle h)
{
	while (!is_empty(h))
		pop_front(h);
}


size_t get_size(ListHandle h)
{
	return h->count;
}

int is_empty(ListHandle h)
{
	return h->pfirst == 0;
}

void print_list(ListHandle h)
{
	for (Node* p = h->pfirst; p != NULL; p = p->pnext) {
		print_student(&p->s);
	}
	printf("--------------------------------------------------------\n");
}


