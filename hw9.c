#include <stdio.h>
#include <math.h>

struct City
{
	char name[20];
	char country[20]; 
	char popultion[20];
};
int main(void)
{
	struct City arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("Name> ");
		gets(arr[i].name);
		printf("Country> ");
		gets(arr[i].country);
		printf("Population > ");
		gets(arr[i].popultion);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) 
	{
		printf("%d. %s in %s with a population of %s people\n", i+1, arr[i].name, arr[i].country, arr[i].popultion);
	}
	return 0;
}