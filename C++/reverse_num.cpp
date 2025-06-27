# include <iostream>
using namespace std;

int main(){

  int num,temp,rem,rev=0;
  cout<<"Enter number: ";
  cin>>num;

  temp=num;

  while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
  }

  cout<<"The reverse of number in "<<temp<<" is :"<<rev;

  return 0;
}