// Sum of N Numbers using parameterized recursion
// n = 6 => 6 + 5 + 4 + 3 + 2 + 1 = 21

#include <iostream>
using namespace std;

void sumOfNum(int curr, int sum , int n)
{
  if (curr > n)
  {
    cout << "Sum of N Numbers using parameterized recursion: " << sum;
    return;
  }
  sumOfNum(curr + 1, sum + curr, n);
}

int main()
{
  int n;
  cout << "enter any num: ";
  cin >> n;

  sumOfNum(1, 0,n);

  return 0;
}