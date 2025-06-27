# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){

string s1;

s1=to_string(123456);
cout<<s1<<endl;

string s2="1233 ";
s2+=" 1234";
cout<<endl<<s2;


int x=stoi(s1);
cout<<endl<<x+1;



return 0;
}