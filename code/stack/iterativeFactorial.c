#include <stdio.h>

int factorial(int n)
{
	int previous = 0xdeadbeef;	

	if (0 == n) {
		return 1;
	}

	previous = factorial(n-1);
	return n * previous;
}

int iter_factorial(int n)
{
	int result = 1;
	for(; n > 0; n--) {
		result *= n;
	}
}

int main2(int argc)
{
	int answer = iter_factorial(5);
	printf("%d\n", answer);
}

int main(int argc)
{
	int answer, i;
	for (i = 0; i < 1000; i++) {
		answer = iter_factorial(523000);
	}
}
