#include <stdio.h>

int main() {
	
	/* A program to print odd & even 
	numbers in range start to end. */

	// get 2 inputs - start and end
	// for start -> end
	// print odd or even

	int start, end;

	printf("Enter numbers ");
	scanf("%d %d", &start, &end);

	for (int i=start; i <= end; i++) {
		if (i % 2 == 0) {
			printf("%d is even\n", i);
		}
		else {
			printf("%d is odd\n", i);
		}
	}

	
	return 0;
}