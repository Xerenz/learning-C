/* 

	Write a program to find the sum 
	of series : 1 + 12 + 123 + 1234 + 12345 + ... + 123456789 

	Hint:

	1 = 0 * 10 + 1
	12 = 1 * 10 + 2
	123 = 12 * 10 + 3
	1234 = 123 * 10 + 4

*/

#include <stdio.h>

int main() {

	int sum = 0, num = 0, i = 1;

	while (i < 10) {
		num = num * 10 + i; // 1, 12, 123, 1234
		sum = sum + num; // 1, 1 + 12 = 13, 13 + 123 = 136, 136 + 1234 = 1370
		i++; // 2, 3, 4, 5
	}

}





















