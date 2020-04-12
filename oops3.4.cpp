// WAP to create Student class and add constructors, other functions and destructor.
#include <iostream>
#include<string.h>
using namespace std;

class student
{
int roll;
char name[25];
char addr[100];
int std;
char div;
long cont;
public:
void get_data();
void display(void);
student();
~student();
};
student::student(void)
{
cout<<"object is created "<<endl;
}
student::~student(void)
{
cout<<"object is destroyed!!!"<<endl;
}
void student::get_data()
{
cout<<"Enter Roll no "<<endl;
cin>>roll;
cout << "Enter name" << '\n';
cin>>name;
cout << "Enter Address" << '\n';
cin>>addr;
cout << "Enter Std" << '\n';
cin>>std;
cout << "Enter Div" << '\n';
cin>>div;
cout << "Enter Contact" << '\n';
cin>>cont;
}
void student::display(void)
{
cout<<endl;
cout<<"Roll : "<<roll<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Address : "<<addr<<endl;
cout<<"Std : "<<std<<endl;
cout<<"Div : "<<div<<endl;
cout<<"Contact : "<<cont<<endl;
cout<<endl;
}
int main()
{
  student stud;
  stud.get_data();
  stud.display();
  return 0;
}
