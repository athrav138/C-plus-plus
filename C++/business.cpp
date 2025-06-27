# include <iostream>
using namespace std;

int main(){

  float s_price,c_price,profit,loss,per;
  
  cout<<"Enter the cost price: ";
  cin>>c_price;

  cout<<"Enter the selling price: ";
  cin>>s_price;

  if(c_price>s_price){
    loss=c_price-s_price;
    per=(loss/c_price)*100;
    cout<<"There is loss of "<<per<<" percent in business and "<<loss<<" rupees";
  }
  else if(s_price>c_price){
    profit=s_price-c_price;
    per=(profit/c_price)*100;
    cout<<"There is profit of "<<per<<" percent in business and "<<profit<<" rupees";
  }
  else{
    cout<<"There is No profit in business\n";
  }

  return 0;
}