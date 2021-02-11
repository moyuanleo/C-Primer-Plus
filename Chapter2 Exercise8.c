#include<stdio.h>

int one_three(void);
int two();

int main(void) {
	printf("starting now:\n");
	one_three();
	printf("Done!");
	return 0;
}

int one_three(void) {
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int two(void) {
	printf("two\n");
	return 0;
}