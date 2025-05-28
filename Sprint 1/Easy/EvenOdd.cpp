#include <iostream>
using namespace std;

// Function to check a number is even or odd.
void evenOdd(int num)
{
   if (num % 2 == 0)
   {
      cout << num << " is an Even Number" << endl;
   }
   else
   {
      cout << num << " is an Odd Number" << endl;
   }
}

int main()
{

   int N;
   cin >> N;
   evenOdd(N);
   return 0;
}