#include <iostream>
#include <cmath>

int main()
{
	int sum = 0;
	int squareSum = 0;
	for (int i = 1; i <= 100; i++)
	{
		int square = i * i;
		sum += i;
		squareSum += square;
	}
	int sumSquare = pow(sum, 2);
	std::cout << sumSquare - squareSum << std::endl;
	return 0;
}