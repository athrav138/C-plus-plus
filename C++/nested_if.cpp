# include <iostream>
using namespace std;

int main(){

  int num;
  cout<<"Enter the number: ";
  cin>>num;

  if(num>0){
    if(num%2==0){
      cout<<"THe "<<num<<" number is positive even\n";
    }
    else{
      cout<<"THe "<<num<<" number is positive odd\n";
    }
  }
  else if(num<0){
    if(num%2==0){
      cout<<"THe "<<num<<" number is Negative even\n";
    }
    else{
      cout<<"THe "<<num<<" number is negative odd\n";
    }
  }
  else{
    cout<<"THe number is zero\n";
  }


  return 0;
}