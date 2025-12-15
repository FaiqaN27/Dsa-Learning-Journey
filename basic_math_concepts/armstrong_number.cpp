// An Armstrong number is a number that equals the sum of its digits raised to the power of the number of digits.
// 153  --> Number of digits = 3
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 ✅ → is an Armstrong number.

#include <bits/stdc++.h>
using namespace std;

int checkArmstrong(int n, int len)
{
  int sum = 0;
  while (n > 0)
  {
    int rem = n % 10;
    n = n / 10;

    int power = 1;
    for(int i=0; i<len; i++){
      power*=rem;
    }
    
    sum += power;
  }
  return sum;
}

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  int temp = n;
  int len = 0;
  while (temp > 0)
  {
    len++;
    temp = temp / 10;
  }
  int valid = checkArmstrong(n, len);
  valid == n ? cout << "Number is Armstrong" : cout << "Number is not Armstrong";

  return 0;
}

// Time Complexity - O(d log d)
// Space Complexity - O(1)