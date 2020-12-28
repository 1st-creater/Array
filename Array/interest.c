#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
	int num_rate, num_year, year, i;
	double value[5];

	printf("Enter interest rate: ");
	scanf_s("%d", &num_rate);
	printf("Enter number of years: ");
	scanf_s("%d", &num_year);


	printf("\nYears");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", num_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_year; year++) {
		printf("%3d   ", year);
		for (i = 0; i < NUM_RATES; i++) {
			value[i] += (num_rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
	
	return 0;
}