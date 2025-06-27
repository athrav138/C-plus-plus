# include <iostream>
# include <cmath>
using namespace std;

int swap(int *a,int *b);

int main(){
  int a,b;

  cout<<"Enter first number: ";
  cin>>a;

  cout<<"Enter second number: ";
  cin>>b;

  cout<<"The number for swaping are a="<<a<<" b="<<b<<" \n";

  swap(&a,&b);

  cout<<"The number after swaping are a="<<a<<" b="<<b<<" \n";


}

int swap(int *a,int *b){
      *a=*a+*b;
      *b=*a-*b;
      *a=*a-*b;
}