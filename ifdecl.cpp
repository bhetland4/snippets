#include <iostream>

int main()
{
   for (int i=0; i < 7; ++i) std::cout << " " << i;
   std::cout << "\n";

   float a[10];
   for (int i=0; i < 10; ++i) a[i] = i * 2.2f;

   // The extra declaration after ; in the 'if' is valid C++17 onwards.
   // That expression is the one actually used for the if-test.
   int y = 9;
   if (int i = int(a[4] / 3.3f); /*int*/ y = i*2 /* /5 */)
   {
      std::cout << a[4] << " / 3.3 = " << i << " rounded down\n";
      std::cout << "Times two: " << y << "\n";
   }
   //std::cout << "i is now: " << i << "\n";
   std::cout << "y is now: " << y << "\n";

   for (const auto i: a) std::cout << " " << i;
   std::cout << "\n";
}

