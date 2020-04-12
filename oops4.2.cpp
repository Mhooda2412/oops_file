// WAP to create class COMPLEX and overload Binary + operator to add objects. Use member functions.

#include<iostream>
using namespace std;

class complex{
int real,imag;
public:
  void set(){
    cout<<"enter real"<<endl;
    cin>>real;
    cout<<"enter imag"<<endl;
    cin>>imag;
}
complex operator+(complex &t2){
  complex temp;
  temp.real=real+t2.real;
  temp.imag=imag+t2.imag;
  return(temp);

}
void display(){
  cout<<"the sum is"<<real<<"+i"<<imag;
}
};

int main(){
  complex t1,t2;
  t1.set();
  t2.set();
  t1=t1+t2;
  t1.display();
  return(0);
}
