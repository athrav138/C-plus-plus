# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
  int std[n];

  for(int i=1;i<=n;i++){
      std[i-1]=i*i;
  }

  cout<<"Square of all natural numbers from 1 to n is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<std[i]<<" ";
  }

 
  
}