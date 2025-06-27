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

 if(a>b){
  if(a>c){
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<a;
  }
  else{
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<c;
  }
 }
else {
  if(b>c){
cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<b;
  }
  else{
    cout<<"The numbers are a="<<a<<" b="<<b<<" c="<<c<<" and the greatest among these three are "<<c;
  }

}

  return 0;
}