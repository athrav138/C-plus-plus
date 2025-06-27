# include <iostream>
using namespace std;

int main(){

  char ch='a';
  cout<<"The ASCII value of uppercase letters: ";

  while(ch<='z'){
    cout<<""<<ch<<" = "<<(int)ch<<"\t";
    ch++;
  }

char ch1='A';
cout<<endl<<endl<<endl;
cout<<"The ASCII value of uppercase letters: ";
  while(ch1<='Z'){
    cout<<" "<<ch1<<" = "<<(int)ch1;
    ch1++;
  }
  return 0;
}