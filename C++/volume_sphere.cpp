# include <iostream>
using namespace std;

int main(){
  float $radius,v_sphere;

  cout<<"Enter radius of sphere:";
  cin>>$radius;

  v_sphere=(4.0/3.0)*3.14*($radius*$radius*$radius);

  cout<<"The volume of sphere with radius "<<$radius<<" is: "<<v_sphere;
  
}