// WAP to concatenate two strings using your defined Function
#include <iostream>
using namespace std;

void concat(char *str1 , char *str2){
  int i,j;
  for(i = 0; str1[i] != '\0'; ++i);
      j=0;
   while(str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
   }
   str1[i] = '\0';
   cout<<"String after concatenation: "<<str1;
}

int main() {
  char str1[100],str2[100];
  cout<<"Enter the First String"<<endl;
  cin>>str1;
  cout<<"Enter the Second String"<<endl;
  cin>>str2;
  concat(str1,str2);

  return 0;
}
