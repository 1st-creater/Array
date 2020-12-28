#include <stdio.h>
#define N 10

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);

	printf("In reverse order: ");
	for (i = 9; i >= 0; i--)
		printf("%d ", a[i]);

	return 0;
}