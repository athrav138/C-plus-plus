# include <iostream>
using namespace std;

int main(){
int i,j,n;
cout<<"Enter number of row:";
cin>>n;
  for( i=1;i<=n;i++){
    for( j=1;j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }

cout<<endl<<endl<<endl;

 for( i=1;i<=n;i++){
    for( j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
  
  cout<<endl<<endl<<endl;

 for( i=1;i<=n;i++){
    for( j=1;j<=n;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
  cout<<endl<<endl<<endl;

 for( i=1;i<=n;i++){
    for( j=1;j<=n;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }

cout<<endl<<endl<<endl;
 for( i=1;i<=n;i++){
    int a=1;
    for( j=1;j<=i;j++){
      cout<<a<<" ";
      a+=2;
    }
    cout<<endl;
  }

cout<<endl<<endl<<endl;
    int b=1;

 for( i=1;i<=n;i++){
    for( j=1;j<=i;j++){
      cout<<b<<" ";
      b++;
    }
    cout<<endl;
  }

  return 0;
}