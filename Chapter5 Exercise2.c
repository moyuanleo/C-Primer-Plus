#include<stdio.h>

int main(int argc, char* argv[]) {
	int counter, i = 0;
	printf("PRINT CONTINUE 10 NUMBERS!\n");
	printf("PLEASE INPUT THE START NUMBER:");
	scanf_s("%d", &counter);
	while (i++ < 11) {
		printf("%d\n", counter++);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
}