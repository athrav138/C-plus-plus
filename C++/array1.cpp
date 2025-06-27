# include <iostream>
using namespace std;

void change(int arr[]){

  arr[3]=34;
  
}
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int std[n];

  cout<<"Enter all five elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i<<" :";
    cin>>std[i];
  }

  cout<<"Entered all five elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<std[i]<<" ";
  }

  change(std);

  cout<<"\n\nEntered all five elements of array in reversed order: "<<endl;
  for(int i=4;i>=0;i--){
    cout<<std[i]<<" ";
  }
  
}