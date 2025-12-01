# include <iostream>
# include <vector>
using namespace std;

int main()
{
  vector <int> vec(5,10);
  vec.push_back(11);

  for(int x : vec)
  {
    cout<<x<<endl;
  }

  vec.pop_back();
  for(int x : vec)
  {
    cout<<x<<endl;
  }

  cout<<vec.front()<<endl;

  return 0;
}