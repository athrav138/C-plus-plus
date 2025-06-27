
# include <iostream>
using namespace std;

int main(){

int num,highest;
cout<<"Enter number :";
cin>>num;

cout<<"The factors of "<<num<<" are: ";
for(int i=1;i<=num;i++){
  if(num%i==0){
      if(i==num){
          break;
      }
      highest=i;
    cout<<" "<<i<<" ";
  }
}

cout<<"\nThe highest factor of "<<num<<" is :"<<highest;

  return 0;
}
