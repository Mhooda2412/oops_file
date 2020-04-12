// WAP to demonstrate the concept of Inheritance use person and student class for the same

#include<iostream>
using namespace std;

class Person{
private:
  char name[30];
  int age;
  char gender;
public:
  void getBasicInfo(){
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";
    cin >> name;
    cout << "Age?: ";
    cin >> age;
    cout << "Gender?: ";
    cin >> gender;

  }
  void putBasicInfo(){
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
  }
};

class Student:public Person{
private:
  int totalM;
  int perc;
  char grade;
public:
  void getResultInfo(){
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks?: ";     cin >> totalM;
    perc= (float)((totalM*100)/500);
    cout << "Grade?: ";cin >> grade;
  }
  void putResultInfo(){
    cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
  }
};
int main() {
  Student std;
  std.getBasicInfo();
  std.getResultInfo();
  std.putBasicInfo();
  std.putResultInfo();
  return 0;
}
