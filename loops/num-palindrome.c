#include <stdio.h>

int main() {
	
	/* Check if a number is 
	palindrome or not */

	// 1001, 1221, 13131, 333, 334433

	// 123 - 321

	// Input a number
	// find reverse of the number
	// check if reverse = number
	// print palindrome or not

	// 123 - 321
	// 123 = 100 + 20 + 3
	// 321 = 300 + 20 + 1

	// 123/10 = 12, remainder = 3
	// 12/10 = 1, remainder = 2
	// 1/10 = 0, remainder = 1
	// 0*10 + 3 = 3
	// 3*10 + 2 = 32
	// 32*10 + 1 = 321

	// 1234 = 1000 + 200 + 30 + 4
	// 4321 = 4000 + 300 + 20 + 1



	int num, reverse = 0, buff, remainder;

	printf("Enter number ");
	scanf("%d", &num);

	buff = num; // buff = 123 // set buff = num

	// 123

	// while buff 


	while (buff != 0) {
		remainder = buff % 10; // 123 % 10 = 3, 12 % 10 = 2
		printf("remainder=%d\n", remainder);
		buff = buff / 10; // 123 / 10 = 12, 12 / 10 = 1
		printf("buff=%d\n", buff);

		reverse = reverse*10 + remainder; // 0*10 + 3 = 3, 3*10 + 2 = 32
		printf("reverse=%d\n\n", reverse);
	}

	if (num == reverse) {
		printf("%d is palindrome\n", num);
	}
	else {
		printf("%d is not palindrome\n", num);
	}
	
	// check if num = reverse then print num is palindrome
	// else print num is not palindrome

	return 0;
}









