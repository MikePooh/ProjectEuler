#include <iostream>
#include <cmath>

int main()
{
    int sum = 1000;

    for (int a = 1; a <= sum; a++) {
        for (int b = a + 1; b <= sum; b++) {
            int c = 1000 - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                std::cout << a << " " << b << " " << c << " " << a * b * c;
                return 0;
            }
        }
    }
    return 0;
}
