# include <iostream>
using namespace std;

int main(){
    int n,num,count=0;
    cout<<"Enter n:";
    cin>>n;
  int std[n];
  
  cout<<"Enter the element that greater number you want to count:";
  cin>>num;
  
  cout<<"Enter elements of array: \n";
  for(int i=0;i<n;i++){
      cout<<"Enter element "<<i<<" :";
      cin>>std[i];
  }
  
  for(int i=0;i<n;i++){
    if(num<std[i]){
        count++;
    }
      
  }

  cout<<"The number of elements greater than "<<num<<" in an array are: "<<count;

 
  
}