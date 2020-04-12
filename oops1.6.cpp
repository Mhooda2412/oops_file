// WAP for matrix addition, subtraction and multiplication.

#include <iostream>
#include <stdlib.h>
#define MAX 100
using namespace std;

typedef struct {
	int matrix[MAX][MAX];
}array2D;

typedef struct{
  int row;
  int column;
}Vector;

Vector getVector(){
  Vector vector;
  cout << "Enter the number of rows:" << '\n';
  cin >> vector.row;
  cout << "Enter the number of columns:" << '\n';
  cin >> vector.column;
  return vector;
}

array2D GetInput(int row ,int column){
		int i,j;
		array2D input;
		for(i=0;i<row;++i){
			for(j=0;j<column;++j){
				cin >> input.matrix[i][j];
			}
		}
		return input;
}

void Add() {
  int i,j,sum[MAX][MAX];
	array2D first_matrix,second_matrix;
  Vector vector;
  vector = getVector();
  cout << '\n'<<"Enter the elements of first matrix" << '\n';
  first_matrix = GetInput(vector.row,vector.column);
  cout << '\n'<<"Enter the elements of second matrix" << '\n';
  second_matrix = GetInput(vector.row,vector.column);
  cout << '\n'<<"Sum of two matrices:" << '\n';
  for(i=0;i<vector.row;++i){
		for(j=0;j<vector.column;++j){
			sum[i][j] = first_matrix.matrix[i][j]+second_matrix.matrix[i][j];
			cout << '\t'<<sum[i][j];
		}
		printf("\n");
	}
}

void Sub() {
  int i,j,sub[MAX][MAX];
	array2D first_matrix,second_matrix;
  Vector vector;
  vector = getVector();
  cout << '\n'<<"Enter the elements of first matrix" << '\n';
  first_matrix = GetInput(vector.row,vector.column);
  cout << '\n'<<"Enter the elements of second matrix" << '\n';
  second_matrix = GetInput(vector.row,vector.column);
  cout << '\n'<<"Subtraction of two matrices:" << '\n';
  for(i=0;i<vector.row;++i){
		for(j=0;j<vector.column;++j){
			sub[i][j] = first_matrix.matrix[i][j]-second_matrix.matrix[i][j];
			cout << '\t'<<sub[i][j];
		}
		cout<<"\n";
	}
}

void Multi(){
  int i,j,k,mul[MAX][MAX];
  array2D first_matrix,second_matrix;
  Vector vector1,vector2;
  cout<<"\n For First Matrix\n";
  vector1=getVector();
  cout<<"\n For second Matrix\n";
  vector2=getVector();
  if(vector1.column != vector2.row){
  	 cout<<"\nMultiplication is not possible\n";
  }else{
    cout<<"\n Enter the elements of first matrix\n";
    first_matrix = GetInput(vector1.row,vector1.column);
    cout<<"\n Enter the elements of second matrix\n";
    second_matrix = GetInput(vector2.row,vector2.column);
    cout<<"\nMultiplication of two matrices:\n";
    for(i=0;i<vector1.row;++i){
      for(j=0;j<vector2.column;++j){
        mul[i][j]=0;
        for(k=0;k<vector1.column;++k){
          mul[i][j]+=first_matrix.matrix[i][k]*second_matrix.matrix[k][j];
        }
        cout<<'\t'<< mul[i][j];
      }
      cout<<"\n";
    }
     }
}

void menu(int *choice){
  cout<<"\n[1]--> Addition of Two Matrix";
  cout<<"\n[2]--> Subtraction of Two Matrix";
  cout<<"\n[3]--> Multiplication of Two Matrix";
  cout<<"\n[4]--> Exit\n";
  cin>>*choice;
}


int main() {
  int choice;

    do {
      menu(&choice);
      switch (choice) {
        case 1: Add();
                break;
        case 2: Sub();
                break;
        case 3: Multi();
                break;
        case 4: exit(1);
                break;
        default: cout<<"\n Invalid Input";
      }
      } while(1);

  return 0;
}
