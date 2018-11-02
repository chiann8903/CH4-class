#include<stdio.h>
#include<stdlib.h>
int add(int);
main() {
	int x = 100;
	int y = add(x);
	printf("x=%d\n", x);
	system("pause");
}
int add(x) {
	x++;
	printf("x=%d\n", x);
	return x;
}