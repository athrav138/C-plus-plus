# include <iostream>
# include <cmath>
using namespace std;

int max(int a,int b);

int main(){

  int a,b;

  cout<<"Enter first number: ";
  cin>>a;

  cout<<"Enter second number: ";
  cin>>b;

  cout<<"THe max from a="<<a<<" b="<<b<<" is: "<<max(a,b);
  

}

int max(int a,int b){

  if(a>b){
    return a;
  }
  else{
    return b;
  }

}
