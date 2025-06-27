# include <iostream>
using namespace std;

int main(){

  int num,fact=0;
  cout<<"Enter number: ";
  cin>>num;

  fact=1;
  for(int i=1;i<=num;i++){
    fact*=i;
    cout<<"The factorial of number "<<i<<" is : "<<fact<<endl;
  }
  

  return 0;
}