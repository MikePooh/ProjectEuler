#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main()
{	
	std::vector<int> palindroms;
	for(int factor1 = 999, factor2 = 999; factor1 > 100;)
	{				
		int number = factor1 * factor2;
		int num = number;
		int reverse = 0;
		
		int i = 0;
		while (num > 0) {
			num /= 10;
			i++;
		}
		i--;
		
		num = number;
		
		for (int j = 0; i >= 0; i--, j++)
		{
			int extent = pow(10, i);
			double d = num / extent;
			int trans = static_cast<int>(d);
			reverse += trans * pow(10, j);
			num = num % extent;
		}
		if (reverse == number) {
			palindroms.push_back(number);
		}
		factor2--;
		if (factor2 < 100) {
			factor1--;
			factor2 = 999;
		}
	}
	std::sort(palindroms.begin(), palindroms.end());
	std::cout << palindroms.back() << std::endl;
	return 0;
}