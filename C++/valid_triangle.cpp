# include <iostream>
using namespace std;

int main(){

  float s1,s2,s3;
  
  cout<<"Enter the side 1:  ";
  cin>>s1;

  cout<<"Enter the side 2:  ";
  cin>>s2;

  cout<<"Enter the side 3:  ";
  cin>>s3;

 if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
  cout<<"THe give sides of traingle can make triangle\n";
 }
else{
  cout<<"THe give sides of traingle can't make triangle\n";
}
 
  return 0;
}