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
  
  if(temp==rev){
      cout<<"The "<<temp<<" is the palindrome";
  }
  else{
    cout<<"The "<<temp<<" is not the palindrome";
  }

  return 0;
}
