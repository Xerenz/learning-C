/*
	Write a program to find the sum
	of natural numbers in range start to end.

	Hints:

	1. Input start and end, scanf("%d %d")
	2. initialise int sum = 0
	3. for loop start -> end and sum += i
*/

#include <stdio.h>

int main() {

	int start, end, sum = 0;

	printf("Enter start and end ");
	scanf("%d %d", &start, &end);

	for (int i=start; i <= end; i++) {
		sum += i;
	}

	printf("Sum of natural numbers from %d to %d = %d\n", start, end, sum);

	return 0;
}