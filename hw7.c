#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 5

float p_calc_avr_stdev(float num[], int size, float *mean, float *stdev)
{
	float sum = 0;
	float ssum = 0;
	float variance;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += num[i];
	}
	*mean = sum / size;

	for (i = 0; i < size; i++)
	{
		ssum += (num[i] - *mean) * (num[i] - *mean);
	}
	variance = ssum / size;
	*stdev = sqrt(variance);
}

int main()
{
	float num[SIZE];
	int i;
	float mean, p_mean, p_stdev;

	printf("Enter 5 real numbers:");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%f", &num[i]);
	}

	p_calc_avr_stdev(num, SIZE, &p_mean, &p_stdev);

	print("\nStandard Deviation = %f", p_stdev);

	return 0;
}