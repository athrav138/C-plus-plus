# include <iostream>
using namespace std;

int main(){

  int ram,shyam,tom;
  
  cout<<"Enter the age of Ram:  ";
  cin>>ram;

  cout<<"Enter the age of Shyam:  ";
  cin>>shyam;

  cout<<"Enter the age of tom:  ";
  cin>>tom;

 if(ram<shyam){
  if(ram<tom){
cout<<"The ages are ram="<<ram<<" shyam="<<shyam<<" tom="<<tom<<" and the youngest among these three are "<<ram<<" is of Ram";
  }
  else{
cout<<"The ages are ram="<<ram<<" shyam="<<shyam<<" tom="<<tom<<" and the youngest among these three are "<<tom<< " is of tom";
  }
 }
else {
  if(shyam<tom){
cout<<"The ages are ram="<<ram<<" shyam="<<shyam<<" tom="<<tom<<" and the youngest among these three are "<<shyam<<" is of shyam";
  }
  else{
    cout<<"The ages are ram="<<ram<<" shyam="<<shyam<<" tom="<<tom<<" and the youngest among these three are "<<tom <<" is of tom ";
  }

}

  return 0;
}