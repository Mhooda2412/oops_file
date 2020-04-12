// WAP to create a structure Student and add functions to read and show details.
#include <iostream>
#define MAX 100
using namespace std;

struct Student
{
    char name[50];
    int roll;
    float marks;
} s[MAX];

void SetValue(int n) {
  cout << "Enter information of students: " << endl;
  for(int i = 0; i < n; ++i)
    {

        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;
        cout << endl;
    }
}

void GetValue(int n){
  cout << "Displaying Information: " << endl;
  for(int i = 0; i < n; ++i)
  {
    cout << "\nRoll number: " << i+1 << endl;
    cout << "Name: " << s[i].name << endl;
    cout << "Marks: " << s[i].marks << endl;
  }
}

int main() {
  int n;
  cout<<"Number of record to enter: "<<endl;
  cin>>n;
  SetValue(n);
  GetValue(n);
  return 0;
}
