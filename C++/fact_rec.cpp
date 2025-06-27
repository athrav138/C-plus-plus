#include <iostream>
using namespace std;

int fact(int n);

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;

    int factn=fact(n);

    cout<<"Factorial of "<<n<<" is : "<<factn;

 return 0;
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
