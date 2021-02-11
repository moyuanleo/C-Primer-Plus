#include<stdio.h>
int main(void) {
	char name[40];
	printf("Please input your name:");
	scanf_s("%s", name, sizeof(name));
	double hight;
	printf("Please input your hight:");
	scanf_s("%lf", &hight);
	printf("%s, you are %.1f cm tall\n",name,hight);
	return 0;
}