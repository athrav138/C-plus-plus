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

if(n<0 || r<0){

  cout<<"The n or r should non-negative number.";

}

else if(n>=r){

int factn=fact(n);
int nr=n-r;
int factnr=fact(nr);

int permut=factn/factnr;

cout<<"The permutation of "<<n<<" and "<<r<<" are : "<<permut;

}

else{

  cout<<"The permutation is not possible\n";

  }

  return 0;
}

int fact(int n){

  if(n==0 || n==1){
    return 1;
  }
  
  return n*fact(n-1);
}