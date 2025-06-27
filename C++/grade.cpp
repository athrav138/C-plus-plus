# include <iostream>
using namespace std;

int main(){

  int marks;
  cout<<"Enter the marks(percentage):";
  cin>>marks;

  if(marks>75 && marks<=100){
    cout<<"The "<<marks<<" marks are very good\n";
  }
  else if(marks<=75 && marks>60){
    cout<<"The "<<marks<<" marks are good\n";
  }
  else if(marks>=40 && marks<=60){
    cout<<"The "<<marks<<" marks are average \n";
  }
  else if(marks<40 && marks>=0){
    cout<<"The "<<marks<<" marks are not good and student was failed";
  }
  else{
    cout<<" the "<<marks<<" marks are not valid\n";
  }
  return 0;
}