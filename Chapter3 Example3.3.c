#include<stdio.h>
int main(void) {
	long long int x = 10000000000;
	printf("dec = %lld; octal = %llo; hex = %llx\n", x, x, x);//�˽��������ʮ���������
	printf("dec = %lld; octal = %#llo; hex = %#llx\n", x, x, x);//�˽��������0��ʮ�����������0x

	return 0;
}