#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 999; i > 0; i--)
        if (!(i%3) || !(i%5)) sum += i;
    std::cout << sum;
    return 0;
}