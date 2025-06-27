
# include <iostream>
using namespace std;

int main(){
int n,start,mul,i,j;
cout<<"Enter how many terms you require: ";
cin>>n;

cout<<"Enter start: ";
cin>>start;

cout<<"Enter factor: ";
cin>>mul;

for(int i=0;i<n;i++){
  cout<<" "<<start<<" ";
  start*=mul;
}


  return 0;
}
