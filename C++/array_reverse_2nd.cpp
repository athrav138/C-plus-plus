# include <iostream>
using namespace std;


int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int std[n],std2[n];

  cout<<"Enter all five elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i<<" :";
    cin>>std[i];
  }

  cout<<"Entered all  elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cout<<std[i]<<" ";
  }


  for(int i=n-1,j=0;i>=0,j<=n;i--,j++){
    std2[i]=std[j];
  }
  
    cout<<"\n\nEntered all five elements of array in reversed order: "<<endl;
for(int i=0;i<n;i++){
    cout<<std2[i]<<" ";
  }
}a





