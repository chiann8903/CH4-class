#include<stdio.h>
#include<stdlib.h>
int add(int*);
main() {
	int x = 100;
	int y = add(&x);
	printf("x=%d\n", x);
	system("pause");
}
int add(int *xptr) {
	(*xptr)++;
	printf("*xptr=%d\n", *xptr);
	return *xptr;
}