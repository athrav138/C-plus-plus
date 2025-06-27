# include <iostream>
using namespace std;

int main(){
  int std[5];
  int size=10,aa[size]={1,2,3,4,5,6,7,8,12,34};

  cout<<"Enter all five elements of array: "<<endl;
  for(int i=0;i<5;i++){
    cout<<"Enter element "<<i<<" :";
    cin>>std[i];
  }

  cout<<"Entered all five elements of array: "<<endl;
  for(int i=0;i<5;i++){
    cout<<std[i]<<" ";
  }

  cout<<"\n\nEntered all five elements of array in reversed order: "<<endl;
  for(int i=4;i>=0;i--){
    cout<<std[i]<<" ";
  }
  
}