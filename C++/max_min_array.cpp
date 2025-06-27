# include <iostream>
using namespace std;


int main(){
  int n,max,min;
  cout<<"Enter the size of array: ";
  cin>>n;
  int std[n];

  cout<<"Enter all five elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i<<" :";
    cin>>std[i];
  }

  max=std[0];
  for(int i=0;i<n;i++){
      if(std[i]>max){
          max=std[i];
      }
  }

  cout<<"The maximum of all array elements is: "<<max;
  
  min=std[0];

  for(int i=0;i<n;i++){
      if(std[i]<max){
          max=std[i];
      }
  }
  
    cout<<"\nThe minimum of all array elements is: "<<min;

  
  
}