# include <iostream>
using namespace std;

int main(){

  int a,b,c;
  
  cout<<"Enter the side 1:  ";
  cin>>a;

  cout<<"Enter the side 2:  ";
  cin>>b;

  cout<<"Enter the side 3:  ";
  cin>>c;

 if(a>b && a>c){
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<a;
 }
else if(b>c && b>a){
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<b;
}
else if(c>a && c>b){
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<c;
}
else{
  cout<<"The numbers are equal\n";
}
 
  return 0;
}