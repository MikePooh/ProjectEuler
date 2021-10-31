#include <iostream>

int main()
{
	for (int i = 20; ; i++)
	{
		bool flag = true;
		for (int j = 2; j <= 20; j++)
		{
			if (i % j) {
				flag = false;
				break;
			}
		}
		if (flag) {
			std::cout << i << std::endl;
			return 0;
		}
	}
	return 0;
}