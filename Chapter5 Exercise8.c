#include<stdio.h>
int main(int argc, char* argv[]) {
	printf("This program computes moduli.\n");
	printf("Enter a interger to server as the second operand:");
	int first, second;
	scanf_s("%d", &second);
	printf("Now enter the first operand:");
	scanf_s("%d", &first);
	while (first > 0) {
		printf("%d %% %d is %d\n", first, second, (first % second));
		printf("Enter next number for first operand( <= 0 to quit)");
		scanf_s("%d", &first);
	}
	printf("Done\n");
	return 0;
}