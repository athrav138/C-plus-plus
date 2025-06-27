# include <iostream>
# include <cmath>
using namespace std;

int main(){

  int a=34;
  int *ptr=&a;//storing the address of variable to pointer variable

  cout<<"The value of a: \n";
  cout<<a<<endl;//using normal variable
  cout<<*ptr<<endl;//using pointer variable

  cout<<"\nThe address of a: \n";
  cout<<&a<<endl;//using normal variable
  cout<<ptr<<endl;//using pointer variable

  cout<<"\nChanging the value of variavle without using the variable:\n";
  *ptr=17;
  cout<<*ptr;
  
}