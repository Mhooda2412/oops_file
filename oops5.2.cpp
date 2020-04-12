// WAP to overload binary +operator to add two objects of user defined Time class with data members HH MM SS.
#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
  int h,m,s;
  public:
  void read(){
      cout<<"\nEnter hour,minutes and seconds\n";
      cin>>h>>m>>s;
  }
  void print(){
    cout<<"\nTime is-> "<<setfill('0')<<setw(2)<<h;
    cout<<":"<<setfill('0')<<setw(2)<<m;
    cout<<":"<<setfill('0')<<setw(2)<<s<<endl;
  }
  Time operator+(Time t2){
    Time t;
    t.h=h+t2.h;
    t.m=m+t2.m;
    t.s=s+t2.s;
    return t;
  }
};
int main()
{
  
  Time t1,t2,t3;
  t1.read();
  t1.print();
  t2.read();
  t2.print();
  t3=t1+t2;
  cout<<"\nTime1+ Time2:\n";
  t3.print();
  return 0;
}
