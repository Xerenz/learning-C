/*
	Write a program to find the sum
	of natural numbers in range start to end.

	Hints:

	1. Input start and end, scanf("%d %d")
	2. initialise int sum = 0
	3. for loop start -> end and sum += i
*/

//TODO: find the sum of N natural Numbers;

#include <stdio.h>

int main(){
	//declare and intialize the variables num (for storing the input number), sum (calculating the sum and assign it zero first ) 
	//and i (for runnig the for loop)
	int num , sum=0 ,i;  
	//read the number
	printf("Enter a Number:");
	scanf("%d",&num);
	//for loop for finding sum
	for ( i = 0; i <= num; i++)
	{
		//update value of sum till the loop is working 
		sum += i ; //same as the meaning of sum=sum+i 
	}
	
	//print sum
	printf("sum of Natural Numbers till %d is = %d \n",num,sum);

	return 0;
}