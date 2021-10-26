#include <iostream>
#include <unordered_set>

int sumOfMultiplesOf3And5(int n)
{
	int sum = 0;

	std::unordered_set<int> seen;
	for (int x = 5; x < n; x += 5)
	{
		sum += x;
		seen.insert(x);
	}

	for (int x = 3; x < n; x += 3)
	{
		if (seen.find(x) == seen.end())
		{
			sum += x;
		}
	}
	
	return sum;
}

int main() {
    std::cout << sumOfMultiplesOf3And5(10) << std::endl;
	  std::cout << sumOfMultiplesOf3And5(1000) << std::endl;
    return 0;
}
