#include <iostream>

int main()
{
    int sum = 2;
    int num1 = 1;
    int num2 = 2;
    while (num2 < 4000000) {
        int s = num1 + num2;
        if (!(s % 2)) sum += s;
        num1 = num2;
        num2 = s;
    }
    std::cout << sum;
    return 0;
}