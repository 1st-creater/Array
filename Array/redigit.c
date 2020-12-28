#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	long n;
	int digit;
	bool digit_seen[10] = { false };

	printf("Enter a number: ");
	scanf_s("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated digit");
	else
		printf("No repeated digit");
}