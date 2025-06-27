# include <iostream>
using namespace std;

int main(){
    int n,sume=0,sumo=0;
    cout<<"Enter n:";
    cin>>n;
  int std[n];
  
  cout<<"Enter elements of array: \n";
  for(int i=0;i<n;i++){
      cout<<"Enter element "<<i<<" :";
      cin>>std[i];
  }
  
  for(int i=0;i<n;i++){
      if(i%2==0){
          sume+=std[i];
      }
      if(i%2!=0){
          sumo+=std[i];
      }
  }

 cout<<"The sum of array elements with even  indices is :"<<sume<<endl;
 cout<<"The sum of array elements with odd  indices is :"<<sumo;
 
  
}