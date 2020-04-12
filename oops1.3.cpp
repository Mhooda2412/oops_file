// WAP to find the sum of the digits of a number.
#include <iostream>
using namespace std;

int main() {
  int number,sum=0,rem;
  cout << "Enter a positive integer: " << '\n';
  cin >> number;
  while (number>0) {
    rem = number%10;
    sum = sum+rem;
    number = number/10;
  }
  cout << "Sum of the digits of a number: "<<sum<< '\n';

  return 0;
}
