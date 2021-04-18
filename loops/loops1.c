#include <stdio.h>

int main() {
	
	/* A program to print odd & even 
	numbers in range 0 to n. */

	// input n
	// for loop 0 -> n
	// print odd or even

	int num;

	printf("Enter number ");
	scanf("%d", &num);


	for (int i=0; i <= num; i++) {
		if (i % 2 == 0) {
			printf("%d is an even number\n", i);
		}
		else {
			printf("%d is an odd number\n", i);
		}
	}




	return 0;
}