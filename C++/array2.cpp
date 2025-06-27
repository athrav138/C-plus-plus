# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
  int std[n];
  
  cout<<"Enter elements of array: \n";
  for(int i=0;i<n;i++){
      cout<<"Enter element "<<i<<" :";
      cin>>std[i];
  }
  
  for(int i=1;i<n;i++){
      if(i%2==0){
          std[i]+=10;
      }
      if(i%2!=0){
          std[i]*=2;
      }
  }

  cout<<"Updated array :"<<endl;
  for(int i=0;i<n;i++){
    cout<<std[i]<<" ";
  }

 
  
}