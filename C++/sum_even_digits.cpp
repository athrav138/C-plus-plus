# include <iostream>
using namespace std;

int main(){

  int num,temp,rem,sum=0;
  cout<<"Enter number: ";
  cin>>num;

  temp=num;

  while(num!=0){
    
    rem=num%10;
    if(rem%2==0)
    sum=sum+rem;
    num/=10;
  }

  cout<<"The sum of digits in "<<temp<<" is :"<<sum;

  return 0;
}