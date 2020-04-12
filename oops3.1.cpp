// WAP to show the working of a class Student add functions to read and show details.
#include <iostream>
using namespace std;

class Student{
private:
  int rollno;
  char name[50];
  int marks;
public:
  void  setValue() {
    cout << "Enter rollno" << '\n';
    cin>>rollno;
    cout << "Enter name" << '\n';
    cin>>name;
    cout << "Enter marks" << '\n';
    cin>>marks;
  }
  void  display() {
    cout << "Rollno: " << rollno << '\n';
    cout << "Name: " << name<< '\n';
    cout << "Marks: "<<marks << '\n';
  }
};

int main() {
    Student student[100];
    int n;
    cout<<"Enter the number of record"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
      cout<<"Enter the record of student "<<i+1<<endl;
      student[i].setValue();
    }
    cout<<"Displaying  all record"<<endl;
    for(int i =0;i<n;i++){
      student[i].display();
    }
  return 0;
}
