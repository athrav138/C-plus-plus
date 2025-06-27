# include <iostream>
# include <cmath>
using namespace std;

int fact(int n);

int main(){
int n,r;

cout<<"Enter n:";
cin>>n;

cout<<"Enter r:";
cin>>r;

if(n>r){

int factn=fact(n);
int factr=fact(r);
int nr=n-r;
int factnr=fact(nr);

int combination=factn/(factr*factnr);

cout<<"The combination of "<<n<<" and "<<r<<" are : "<<combination;
}
else{
  cout<<"The combination is not possible\n";
}
}

int fact(int n){
  if(n==0 || n==1){
    return 1;
  }
  
  return n*fact(n-1);
}