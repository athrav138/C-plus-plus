# include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;

  int i=1;
  do{
  cout<<" "<<i<<". Hello World!\n";
    i++;
  }while(i<=n);

  return 0;
}