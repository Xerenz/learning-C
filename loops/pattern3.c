#include <stdio.h>

int main() {
	
	/* A program to print pattern 
	
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

        num stars = 2*(rows - i) + 1

			
	*/

	int rows;

	printf("Enter number of rows ");
	scanf("%d", &rows);

	for (int i=1; i <= rows; i++) { // i is the i th row
		for (int k=0; k < i-1; k++) { 
			printf(" "); // print spaces before stars
		}
		for (int j=1; j <= 2*(rows - i) + 1; j++) { // 2 * (rows - i) + 1 -> number of stars
			printf("*"); // print stars
		}
		printf("\n");
	}

	
	return 0;
}