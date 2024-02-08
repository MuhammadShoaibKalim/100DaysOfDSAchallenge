//Dynamic type of array and it is static 
#include <iostream>
#include<deque>
using namespace std;

int main() {
  
  deque<int> d;
  

  d.push_back(1);
  d.push_front(2);
  d.push_back(3);
  d.push_front(4);
  cout<<"After pushing deque array :";
  for(int i:d)
  {
    cout<<i<<" ";
  }

  cout<<endl;

  d.pop_back();
    cout<<"After one Pop back deque array :";
  for(int i:d)
  {
    cout<<i<<" ";
  }


   cout<<endl;

  d.pop_front();
    cout<<"After one Pop front deque array :";
  for(int i:d)
  {
    cout<<i<<" ";
  }



 
    return 0;
}