#include <iostream>
using namespace std;

int pow(int n,int p);

int main() {
    int n,p;
    cout<<"Enter number:";
    cin>>n;
    
    cout<<"Enter power: ";
    cin>>p;

    int power=pow(n,p);

    cout<<"The "<<p<<" power of "<<n<<" is :"<<power;

 return 0;
}

int pow(int n,int p){
  if(p==1){
      return n;
  }
  return n*(pow(n,p/2)*n);
}
