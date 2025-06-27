#include <iostream>
using namespace std;

int sumdigit(int n);

int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;

    int sum=sumdigit(n);

    cout<<"Sum of digits of "<<n<<" is : "<<sum;

 return 0;
}

int sumdigit(int n){
    if(n==0){
        return 0;
    }
    int rem=n%10;
    return rem+(sumdigit(n/10));
}
