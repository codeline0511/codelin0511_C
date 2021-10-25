#include<stdio.h>

int bin(int n);

int main(void)
{
	int num;
	printf("Pleaes enter a number:");
	scanf("%d", &num);
	bin(num);
	printf("\n");

	return 0;
}
int bin(int n)
{
	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		bin(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}