/*
	Write a program in C to read n numbers
	from keyboard and find their sum and average.

	Hints :

	1. Input n
	2. initialise int sum = 0
	3. for loop 0 -> n input number sum += number
	4. print sum and average 
*/

#include <stdio.h>

int main() {

	int n, num, sum = 0;

	printf("Enter number of terms ");
	scanf("%d", &n);

	printf("Enter numbers ");

	for (int i=0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
	}

	float average = sum / n;

	printf("Sum of numbers = %d\nAverage of numbers = %f\n", sum, average);

	return 0;
}