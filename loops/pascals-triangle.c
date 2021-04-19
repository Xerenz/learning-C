#include <stdio.h>

//declare a function for finding the factorial of a number
int fact();

int main() {
	
	/* A program to print pascals triangle
	
		   1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1

	*/

/* algorithm code going to use

  START
  Step  1 - Take number of rows to be printed, n.
  Step  2 - Make outer iteration I for n times to print rows
  Step  3 - Make inner iteration for J to (N - 1)
  Step  4 - Print single blank space " "
  Step  5 - Close inner loop
  Step  6 - Make inner iteration for J to I
  Step  7 - Print nCr of I and J
  Step  8 - Close inner loop
  Step  9 - Print NEWLINE character after each inner iteration
  Step 10 - Return
STOP
  */

 //declare a varibles we are going to use:
    int num,i,j;
    //here the num for take the number of rows form the user.

    //ask user to enter the number of rows wanted;
    printf("Enter the number of rows:");
    scanf("%d",&num);

    for(i = 0; i <= num; i++) {

      // loop for spacing
      for(j = 0; j <= num-i; j++)
         printf("  ");
        
      //loop for printing the numbers.
      for(j = 0; j <= i; j++)

         printf(" %3d", fact(num) / ( fact(num-j) * fact(j)));

         /* here I use a starage notation right? I will explain it 
            % - means "print value here"
            3 - means "use at least 3 spaces to display, padding as needed"
            d - means eans "The variable will be an integer"

         */

      printf("\n");
   }

	return 0;
}


// function for the factorial
   int fact(int n){

     int k = 1,i;

     for(i=2;i<=n;i++){
       k = k*i;
     }

     return k;

   }