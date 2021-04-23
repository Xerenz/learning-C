/*
	Calculate a^b using loops.

	Hints:

	1. Inputs a, b
	2. initialise pow = 1
	3. while b then pow *= a; b--
	4. print pow
*/

#include <stdio.h>

int main() {

	int a, b, pow = 1;

	printf("Enter a, b of a^b ");
	scanf("%d %d", &a, &b);

	int exp = b;

	while (exp) {
		pow *= a;
		exp--;
	}

	printf("%d^%d = %d\n", a, b, pow);

	return 0;
}