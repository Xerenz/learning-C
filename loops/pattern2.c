#include <stdio.h>

int main() {
	
	/* A program to print pattern 
	
		*
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

	*/

	// ith row 2*i - 1 stars
	// travel through rows
	// travel through columns

	int rows;

	printf("Enter number of rows ");
	scanf("%d", &rows);

	for (int i=1; i <= rows; i++) {
		for (int k=1; k <= rows-i; k++) {
			printf(" ");
		}
		for (int j=1; j <= 2*i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}










