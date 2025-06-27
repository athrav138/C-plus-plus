# include <iostream>
using namespace std;

int main(){

 int num;
 cout<<"Enter number you want the table:";
 cin>>num;
int n=num;
 int i=1;

 do{
  cout<<" "<<num<<" ";
  num+=n;

  i++;
 }while(i<=10);

  return 0;
}