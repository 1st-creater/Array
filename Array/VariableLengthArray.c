#include <stdio.h>

int main(void)
{
	// array variable�� ���̰� constant expression�� �ƴϾ �ȴ�.

	// reverse2.c
	int i, n;

	printf("How many numbers do you want to reverse? ");
	scanf_s("%d", &n);

	int a[n];  // c99���� ����, ���� c99������ ����, c11���������� �ȵ�

	printf("Enter %d numbers: ", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	printf("In reverse order: ");
	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}