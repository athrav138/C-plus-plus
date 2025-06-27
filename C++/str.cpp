# include <iostream>
using namespace std;

int main(){

  string s;
  cout<<"Enter string: ";
  getline(cin,s);

  cout<<"The string entered: "<<s<<endl;

  for(int i=0;s[i]!='\0';i++){
    if(i%2==0){
      s[i]='a';
    }
  }

  cout<<"The updated string is: "<<s;

  cout<<endl<<"The length of string is:"<<s.size();
  cout<<endl<<"The length of string is:"<<s.length();

}