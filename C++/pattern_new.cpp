# include <iostream>
using namespace std;

int main(){
    
char ch, i,j;
int n,x,y;

cout<<"Enter character of row(character in lowercase):";
cin>>ch;

cout<<"Enter the number of row: ";
cin>>n;

for( x=1,i='a';x<=n,i<=ch;x+=2,i+=2){
    for( y=1;y<=x;y++){
      cout<<y<<" ";
    }
    cout<<endl;
    
     for( j='a';j<=i;j++){
      cout<<j<<" "<<++j<<" ";
    }
    cout<<endl;
  }

  

  return 0;
}