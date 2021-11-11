#include <iostream>

bool isPrime(int number)
{
   for (int i = 2; i < number; i++)
      if (number % i == 0) return false;
   return true;
}

int main()
{
   int count = 0;
   
   for (int i = 2; ; i++) {
      if (isPrime(i)) {
         count++;
         if (count == 10001) {
            std::cout << count << " " << i << std::endl;
            break;
         }
      }      
   }
   return 0;
}