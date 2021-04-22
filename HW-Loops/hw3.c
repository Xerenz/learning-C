/*
	Calculate a^b using loops.

	Hints:

	1. Inputs a, b
	2. initialise pow = 1
	3. while b then pow *= a; b--
	4. print pow
*/

//TODO: calculate a^b using for loop

#include <stdio.h>

int main(){
	//declare and intialize the variables we want
	int a,b, pow=1,i=1;

	//read the number 
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the power :");
	scanf("%d",&b);

	//for loop
	for ( i = 1; i <=b ; i++)
	{
		//update the power with increase in i value
		pow *= a;
	}

	//print the pow
	printf("%d raise to %d = %d \n",a,b,pow);
	
}