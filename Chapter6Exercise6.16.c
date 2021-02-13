#include<stdio.h>
#include<string.h>
int main(void) {
	float daphne, deirdre;
	daphne = deirdre = 100.0;
	int year = 0;
	do {
		daphne = daphne + 100 * 0.1;
		deirdre = deirdre + deirdre * 0.05;
		year++;
	} while ((deirdre - daphne) < 0);
	printf("%d years later.\nDaphne = %f.\nDeirdre = %f.\n",
		year, daphne, deirdre);
	printf("Done!\n");
	return 0;
}