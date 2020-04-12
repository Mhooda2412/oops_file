// WAP to implement a class Customer that throws Negative Balance Exceptions.
#include<string.h>
#include<iostream>

using namespace std;

class Customer{
private:
  char name[50];
  long acc_no;
  int balance;
public:
  Customer(char name[] , long acc_no){
    strcpy(this->name, name);
    this->acc_no = acc_no;
  }

  void addBalance(){
    cout<<"Enter the balance to add"<<endl;
    cin>>balance;
  }
  void withdraw(){
    int withd;
    cout<<"Enter the amount to withdraw "<<endl;
    cin>>withd;
    try{
      if(balance-withd<0){
        throw "Negative Balance Exception";
      }
      else{
        balance = balance-withd;
      }
    }catch(const char* a){
      std::cout << a << '\n';
    }

  }
  void  display() {
    cout << "name" << name <<'\n';
    cout << "account no" << acc_no<<'\n';
    cout << "balance" <<balance<< '\n';
  }

};

int main() {

  char str[] = "manish";
  Customer ch(str,2112);
  ch.addBalance();
  ch.withdraw();
  return 0;
}
