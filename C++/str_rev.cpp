# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){

string s1="hello world!";
cout<<s1<<endl;
reverse(s1.begin(),s1.end());

int n=s1.length();
cout<<s1<<endl;
reverse(s1.begin(),s1.begin()+n/2);
cout<<s1<<endl;
reverse(s1.begin()+n/2,s1.end());
cout<<s1<<endl;


return 0;
}