# include <iostream>
using namespace std;

int main(){
char ch;
char i,j;
cout<<"Enter character of row(character in lowercase):";
cin>>ch;
  for( i='a';i<=ch;i++){
    for( j='a';j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }

cout<<endl<<endl<<endl;

 for( i='a';i<=ch;i++){
    for( j='a';j<=ch;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }





  return 0;
}