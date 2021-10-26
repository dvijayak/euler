#include <iostream>

int sumOfEvenFibonacci(int n)
{
	int sum = 2;

	int fib1 = 1, fib2 = 2;
	while (true)
	{
		int fibi = fib1 + fib2;
		if (fibi > n)
			break;
		fib1 = fib2;
		fib2 = fibi;

		if (fibi % 2 == 0)
		{
			sum += fibi;
		}
	}
		
	return sum;
}

int main() {
    std::cout << sumOfEvenFibonacci(10) << std::endl;
    std::cout << sumOfEvenFibonacci(4000000) << std::endl;
    return 0;
}
