# include <iostream>
using namespace std;

int main(){

  float s_interest,rate,time,principal;

  cout<<"Enter principal:";
  cin>>principal;

  cout<<"Enter rate of interest (percentage):";
  cin>>rate;

  cout<<"Enter time in (years):";
  cin>>time;

  s_interest=(principal*rate*time)/100;

  cout<<"The Interest on "<<principal<<" is "<<s_interest<<endl;

  cout<<"And the Full amount after "<<time<<" year is interest is: "<<s_interest+principal;
  
}