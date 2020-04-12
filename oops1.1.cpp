// WAP to check whether the number is prime or not.
// Manish Kumar

#include <iostream>
using namespace std;

int main() {
  int number ,i;
  bool isPrime = true;
  cout << "Enter a positive integer: " << '\n';
  cin >> number;
  for(i = 2; i <= number / 2; ++i)
  {
      if(number % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
