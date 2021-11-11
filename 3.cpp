#include <iostream>

int main()
{
    long number = 600851475143;
    for(long i = 2; i < number; i++) {
        if(!(number % i)) {
            bool flag = true;
            for(long j = 2; j < i; j++) {
                if (!(i % j)) {
                    flag = false;
                    break;
                }
            }
            if (flag) std::cout << i << std::endl;
        }
    }   
    return 0;
}