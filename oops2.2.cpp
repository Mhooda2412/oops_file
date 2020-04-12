// WAP to find the length of a string.
#include <iostream>
#define MAX 100
using namespace std;

int main() {
  char str[100];
  int i;
    cout<<"Enter a string: \n";
    cin>>str;
    for(i=0; str[i]!='\0'; ++i);
    cout<<"\nLength of input string: "<<i;
    return 0;
}
