// WAP to find the reverse of an inputted number.
#include <iostream>
using namespace std;

int main() {
  int number,rev=0,rem;
  cout << "Enter a positive integer: " << '\n';
  cin >> number;
  while (number>0) {
    rem = number%10;
    rev = rev*10+rem;
    number = number/10;
  }
  cout << "Reverse of an inputted number: "<<rev<< '\n';

  return 0;
}
