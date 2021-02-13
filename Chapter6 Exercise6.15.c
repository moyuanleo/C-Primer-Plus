#include<stdio.h>
#include<string.h>
int main(viod) {
	char data[256];
	printf("Enter the char in a line :");
	int i = 0;
	do {
		scanf_s("%c", &data[i],sizeof(data));
	} while (data[i] != '\n' && ++i);//可能会溢出，未检查输入字符的数量
	printf("The reserve char of the data: ");
	for (i--; i >= 0; i--) {
		printf("%c", data[i]);
	}
	printf("\nDone!\n");
	return 0;
}