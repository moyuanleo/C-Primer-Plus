#include<stdio.h>
#define MIN_PER_HOUR 60
int main(int argc, char* argv[]) {
	int input;
	printf("CONVERT MINUTES TO HOURS!\n");
	printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT):");
	while (~(scanf_s("%d", &input))&&input>0) {
		printf("CONVERT TO %d HOUR AND %d MINUTES\n", 
			input / MIN_PER_HOUR, input % MIN_PER_HOUR);
	}
	return 0;
}
