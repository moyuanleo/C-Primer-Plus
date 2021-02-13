#include<stdio.h>
//#include<string.h>
int main(viod) {
	int rabund = 5;
	int weeks = 1;
	while (rabund<150){
		printf("At %d weeks, Rabund has %4d friends \n", weeks, rabund);
		rabund = 2 * (rabund - weeks++);
	}
	printf("Done!\n");
	return 0;
}