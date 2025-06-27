# include <iostream>
using namespace std;

int main(){

 int num;
 cout<<"Enter the number: ";
 cin>>num;

 if(num>99 && num<=999){
  cout<<"The number is three digit is :"<<num;
 }
 else{
  cout<<"The number is not three digit is :"<<num;
 }

  return 0;
}