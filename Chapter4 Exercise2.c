#include<stdio.h>
int main(void) {
	char name[40];
	int width;
	printf("Please input your name:");
	scanf_s("%s", name, sizeof(name));
	width = printf("\"%s\"\n.", name);
	width -= 4;
	printf("\"%20s\".\n", name);
	printf("\"%-20s\".\n", name);
	printf("\"%*s\".", (width + 3), name);
	return 0;

}