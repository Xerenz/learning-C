#include <stdio.h>

int main() {
	
	/* A program to print prime 
	numbers in range start to end. */

	// Input start and end
	// for num in start -> end
	// if num is prime then print num

	// number should only be divisible by 1 and num
	// start counting from 2
	// end till num / 2

	// 11 - 2, 5
	// 15 - 2, 7

	int start, end, flag;

	printf("Enter numbers ");
	scanf("%d %d", &start, &end);

	for (int i=start; i <= end; i++) {
		for (int j=2; j <= i/2; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			printf("%d is not prime\n", i);
		}
		else {
			printf("%d is prime\n", i);
		}
	}

	return 0;
}








