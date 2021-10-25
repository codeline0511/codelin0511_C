#include <stdio.h>
int main(void)
{
	double num1;
	double num2;
	printf("Please enter kilometer:");
	scanf("%lf", &num1);

	num2 = num1 / 1.609 ;
	printf("%.1lf km is equal to %.1lf miles \n",num1, num2);
}