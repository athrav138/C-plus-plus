# include <iostream>
using namespace std;

int main(){

  int num;
  cout<<"Enter the number:";
  cin>>num;

  if(num>0){
    cout<<"The "<<num<<" number is Positive\n";
  }
  else if(num<0){
    cout<<"The "<<num<<" number is Negative\n";
  }
  else{
    cout<<"The "<<num<<" number is Zero\n";
  }
  
  return 0;
}