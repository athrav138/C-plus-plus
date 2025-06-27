# include <iostream>
using namespace std;

int main(){

  int num,temp,rem,arm=0;
  cout<<"Enter number: ";
  cin>>num;

  temp=num;

  while(num!=0){
    rem=num%10;
    arm+=rem*rem*rem;
    num/=10;
  }

if(temp==arm){
  cout<<"The armstrong of number  "<<temp<<" is ";
}
else{
 cout<<"The "<<temp<<" is not armstrong number";
}
  return 0;
}