#include <stdio.h>

int main(void)
{
	// array variable의 길이가 constant expression이 아니어도 된다.

	// reverse2.c
	int i, n;

	printf("How many numbers do you want to reverse? ");
	scanf_s("%d", &n);

	int a[n];  // c99에서 가능, 오직 c99에서만 가능, c11같은데서도 안됨

	printf("Enter %d numbers: ", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	printf("In reverse order: ");
	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}