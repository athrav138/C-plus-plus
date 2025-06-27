# include <iostream>
using namespace std;

int main(){

  int num;
  cout<<"Enter number: ";
  cin>>num;

  switch(num){
    case 0:
    cout<<"The "<<num<<" number is zero";
    break;

     case 1:
    cout<<"The "<<num<<" number is one";
    break;

     case 2:
    cout<<"The "<<num<<" number is two";
    break;

    default:
    cout<<"The number is not from 0,1 and 2";
    break;
  }

  return 0;
}