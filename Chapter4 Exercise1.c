#include<stdio.h>
int main(void) {
	char name[40];
	char surname[40];
	printf("Please input your first name:");
	scanf_s("%s", name);
	printf("Please input your last name:");
	scanf_s("%s", surname);
	printf("Hello, %s, %s", name, surname);
	return 0;

}