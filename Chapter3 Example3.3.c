#include<stdio.h>
int main(void) {
	long long int x = 10000000000;
	printf("dec = %lld; octal = %llo; hex = %llx\n", x, x, x);//八进制输出，十六进制输出
	printf("dec = %lld; octal = %#llo; hex = %#llx\n", x, x, x);//八进制输出带0，十六进制输出带0x

	return 0;
}