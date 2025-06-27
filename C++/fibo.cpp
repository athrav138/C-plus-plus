#include <iostream>
using namespace std;

int fib(int n);

int main() {
    
    int n;
    cout<<"Enter which place number you want in fibonacci sequence: ";
    cin>>n;
    
    for(int i=0;i<=n;i++)
    cout<<fib(i)<<" ";
 

    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    return fib(n-1)+fib(n-2);
}