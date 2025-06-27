# include <iostream>
using namespace std;

int main(){

  int num,temp,count=0,rem;
  cout<<"Enter number: ";
  cin>>num;

  temp=num;

  while(num!=0){
    rem=num%10;
    count++;
    num/=10;
  }

  cout<<"The number of digits in "<<temp<<" is :"<<count;

  return 0;
}