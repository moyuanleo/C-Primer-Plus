#include<stdio.h>
int main(void) {
	char name[40], surname[40];
	int wname, wsurname;
	printf("Please input your first name:");
	scanf_s("%s", name, sizeof(name));
	printf("Please input your last name:");
	scanf_s("%s", surname, sizeof(surname));
	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	printf("\n%*d %*d", wname, wname, wsurname, wsurname);
	return 0;
}