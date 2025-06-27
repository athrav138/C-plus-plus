# include <iostream>
using namespace std;

int main(){
int i,j,n;
cout<<"Enter number of row:";
cin>>n;
  for( i=0;i<n;i++){
    for( j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }

cout<<endl<<endl<<endl;

for( i=0;i<n;i++){
    for( j=0;j<n;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  
  cout<<endl<<endl<<endl;

for( i=0;i<n-1;i++){
    for( j=0;j<n;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
 
 cout<<endl<<endl<<endl;

for( i=0;i<n;i++){
    for( j=0;j<n-1;j++){
      cout<<"* ";
    }
    cout<<endl;
  }


  return 0;
}