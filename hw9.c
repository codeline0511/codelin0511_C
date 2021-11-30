#include <stdio.h>
#include <math.h>

struct City
{
	char name[20];
	char country[20]; 
	int popultion; 
};
int main(void)
{
	struct City arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("Name> ");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country> ");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("Population > ");
		scanf_s("%d", &arr[i].popultion);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].popultion);
	}
	return 0;
}