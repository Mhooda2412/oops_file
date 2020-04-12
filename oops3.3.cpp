// WAP to overloaded function area ( ) for calculating the area of triangle and circle
#include <iostream>
using namespace std;

class Area{
public:
  void area(int base ,int height){
    cout<<"Area of triangle :-- "<<((base*height)/2)<<endl;
  }
  void area(float r){
    int pi=3.14;
    cout<<"Area of circle :-- "<<(pi*r*r)<<endl;
  }
};
int main() {
  int base,height;
  float r;
  Area triangle,circle;
  cout << "Enter the base and height of triangle" << '\n';
  cin>>base>>height;
  triangle.area(base,height);
  cout << "Enter the radius " << '\n';
  cin>>r;
  circle.area(r);
  return 0;
}
