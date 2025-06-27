#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter n upto odd numbers required: ";
   / cin>>num;

    cout<<"The odd numbers from 1 to n are: ";
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            continue;
        }
        cout<<""<<i<<" ";
    }
    return 0;
}
