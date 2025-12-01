# include <iostream>
# include <vector>
using namespace std;

int main()
{
  int n;
  cout<<"Enter size of vector: ";
  cin>>n;
  vector <int> vec(n);

  for(int &val : vec)
  {
    cin>>val;
  }
  int key;
  cout<<"Enter key: ";
  cin>>key;

  for(int i=0;i<n;i++)
  {
    if(vec[i]==key)
    {
      printf("Found");
    }
  }

  return 0;
}