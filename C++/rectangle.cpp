# include <iostream>
using namespace std;

int main(){

  float len,bre,area,peri;
  
  cout<<"Enter the Length of rectangle: ";
  cin>>len;

  cout<<"Enter the Breadth of rectangle: ";
  cin>>bre;

  area=len*bre;
  peri=2*(len+bre);

  if(area>peri){
    cout<<"The area of rectange is greater than perimeter\n";
    cout<<"Area is: "<<area<<endl;
    cout<<"Perimeter is: "<<peri<<endl;

  }
  else if(peri>area){
    cout<<"The area of rectange is less than perimeter\n";
    cout<<"Area is: "<<area<<endl;
    cout<<"Perimeter is: "<<peri<<endl;
  }
  else{
    cout<<"THe area and perimeter of rectangle is equal\n";
    cout<<"Area is: "<<area<<endl;
    cout<<"Perimeter is: "<<peri<<endl;
  }

  return 0;
}