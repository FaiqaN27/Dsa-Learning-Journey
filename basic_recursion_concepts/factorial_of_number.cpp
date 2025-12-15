#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;

  return n * factorial(n - 1);
}

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;

  cout << "Factorial of " << n << " is " << factorial(n);

  return 0;
}

// Time Complexity - O(n)
// Space Complexity - O(n) due to stack space waiting for functions to return value