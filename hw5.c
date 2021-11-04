#include<stdio.h>

void odd_num(int n[]);
void even_num(int n[]);

int main(void)
{
	int arr[5];
	int i;
	printf("5개의 정수를 입력하세요:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	odd_num(arr);
	even_num(arr);
	return 0;
}
void odd_num(int n[])
{
	int i;
	printf("홀수 출력:");
	for (i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 1)
			printf("%d", n[i]);
	}
	printf("\n");
}
void even_num(int n[])
{
	printf("짝수 출력:");
	for (int i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 0)
			printf("%d", n[i]);
	}
	printf("");
}