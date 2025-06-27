# include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  
  cout<<"The even numbers are: ";
  for(int i=1;i<=n;i++){
    if(i%2==0){
      cout<<i<<" ";
    }
  }

  cout<<"\n\nThe odd numbers are: ";
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      cout<<i<<" ";
    }
  }

  

  return 0;
}