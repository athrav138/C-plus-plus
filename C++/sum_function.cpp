# include <iostream>
using namespace std;

int sum(int a,int b);

int main(){
  
  int x,y;
  
  cout<<"Enter the first number: ";
  cin>>x;

  cout<<"Enter the second number: ";
  cin>>y;

  int add=sum(x,y);

  cout<<"The sum of two numbers x="<<x<<" y="<<y<<" are:"<<add;

}

int sum(int a,int b){

  return a+b;
  
}