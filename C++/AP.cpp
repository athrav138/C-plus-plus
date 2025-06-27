
# include <iostream>
using namespace std;

int main(){
int n,start,diff,i,j;
cout<<"Enter how many terms you require: ";
cin>>n;

cout<<"Enter start: ";
cin>>start;

cout<<"Enter difference: ";
cin>>diff;

for( i=1,j=start;i<=n;i++,start+=diff){
  cout<<" "<<start<<" ";
}


  return 0;
}
