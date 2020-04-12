// W AP a program to demonstrate constructor function overloading.
#include <iostream>
using namespace std;
class Area
{
public:
  Area()
  {
    cout << "Class and object successfully created" << endl;
  }
  Area(int length, int breadth)
  {

    cout << "Area of the rectangle =" << length * breadth << endl;
  }
  Area(int side)
  {

    cout << "Area of the square = " << side * side << endl;
  }
};

int main()
{
  Area obj1;
  Area obj2(5, 6);
  Area obj3(5);    
  return (0);
}
