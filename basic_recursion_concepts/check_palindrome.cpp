#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int curr, int n, string val)
{
  if (curr >= n / 2)
    return true;
  if (val[curr] != val[n - curr - 1])
    return false;

  return checkPalindrome(curr + 1, n, val);
}

int main()
{
  string val;
  cout << "Enter any string: ";
  cin >> val;
  int n = val.size();
  if (checkPalindrome(0, n, val))
  {
    cout << val << " is Palindrome";
  }
  else
  {
    cout << val << " is not Palindrome";
  }
  return 0;
}

// In Big-O notation, constants are ignored. so we write O(n/2) ≈ O(n)

// Time Complexity - O(n)
// Space Complexity - O(n)