// WAP to define a class circle and add functions to perform following tasks. Read, display and calculate area.
#include <iostream>
using namespace std;

class Circle{
private:
  int r;
  float pi,area;


public:
  Circle(){
    pi=3.14;
  }

  void Area(){
    cout << "Enter the radius" << '\n';
    cin>>r;
    area = pi*r*r;
  }

  void getArea(){
    cout<<"Area of circle of radius "<<r<<" is :- "<< area <<endl;
  }

};
int main() {
  Circle circle1,circle2;
  circle1.Area();
  circle1.getArea();

  circle2.Area();
  circle2.getArea();


  return 0;
}
