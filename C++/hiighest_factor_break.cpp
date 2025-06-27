
# include <iostream>
using namespace std;

int main(){

int num,highest;
cout<<"Enter number :";
cin>>num;
int a=num-1;

for(int i=a;i>=1;i--){
  if(num%i==0){
        highest=i;
          break;
  }
}

cout<<"\nThe highest factor of "<<num<<" is :"<<highest;

  return 0;
}
