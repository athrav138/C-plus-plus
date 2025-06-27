# include <iostream>
using namespace std;


int main(){
  int n,sum=0;
  cout<<"Enter the size of array: ";
  cin>>n;
  int std[n];

  cout<<"Enter all five elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i<<" :";
    cin>>std[i];
  }

  for(int i=0;i<n;i++){
    sum+=std[i];
  }

  cout<<"The sum of all array elements are: "<<sum;
  
  
}