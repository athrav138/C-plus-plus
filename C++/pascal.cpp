# include <iostream>
# include <cmath>
using namespace std;

int fact(int n);
int comb(int n,int r);

int main(){
int n,r,num;

cout<<"Enter n:";
cin>>num;


for(n=0;n<num;n++){
    for(r=0;r<=n;r++){
        cout<<comb(n,r)<<" ";
    }
    cout<<endl;
}


}

int fact(int n){
  if(n==0 || n==1){
    return 1;
  }
  return n*fact(n-1);
}

int comb(int n,int r){
    int combination;

int factn=fact(n);
int factr=fact(r);
int nr=n-r;
int factnr=fact(nr);

 combination=factn/(factr*factnr);


return combination;

}
