#include <stdio.h>

int main() {
	
	/* A program to print pattern 

	*
	* *
	* * *
	* * * *
	* * * * *

	*/

	// ith row has i stars
	// travel through rows
	// travel through columns

	int rows;

	printf("Enter number of rows ");
	scanf("%d", &rows);


	for (int i=1; i <= rows; i++) {
		for (int j=1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}



	
	
	return 0;
}









