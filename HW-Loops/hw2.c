/*
	Write a program in C to read n numbers
	from keyboard and find their sum and average.

	Hints :

	1. Input n
	2. initialise int sum = 0
	3. for loop 0 -> n input number sum += number
	4. print sum and average 
*/

//TODO: print sum of N natural numbers and their avarage

#include <stdio.h>

int main(){
	//declare variables num , sum , avarage , i;
	int num,i, sum =0 ;
	float avarage;
	//read the number
	printf("Enter the Number:");
	scanf("%d",&num);
	//for loop for finding the sum
	for ( i = 0; i <= num; i++)
	{
		//update value of sum till the loop is working 
		sum += i ; //same as the meaning of sum=sum+i 
	}
	//print sum 
	printf("sum  = %d\n",sum);

	//avarage 
	avarage = (sum / num);

	//print avarage 
	printf("avarage = %f\n",avarage); 
	return 0;
}