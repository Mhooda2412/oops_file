// WAP to implement template function that interchanges two data values.

#include<iostream>
using namespace std;
template <class T>

void Swap(T &x, T &y) {
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x, y;
    cout << "Enter Two Numbers :";
    cin >> x>>y;
    cout << "\nBefore Swap :\n";
    cout << "\nx value is :" << x;
    cout << "\ny value is :" << y;
    Swap(x, y);
    cout << "\nAfter Function Templates :\n";
    cout << "\nx value is :" << x;
    cout << "\ny value is :" << y;
    return 0;
}
