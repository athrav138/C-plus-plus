# include <iostream>
using namespace std;

int main(){

 int num;
 cout<<"Enter the number: ";
 cin>>num;

 if(num%5==0 || num%3==0){
  cout<<"The number is divisible by 5 and 3 both is :"<<num;
 }
 else{
  cout<<"The number is not divisible by 5 and 3 both is :"<<num;
 }

  return 0;
}