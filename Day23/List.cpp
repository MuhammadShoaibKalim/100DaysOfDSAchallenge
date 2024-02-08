//List implementation is due to doubly link list because
//it is made up using the doubly link list(there are two pointers in front and back side).
#include <iostream>
#include<list>
using namespace std;

int main() {
  
    list <int> l;
    cout<<"The size of list :"<<l.size()<<endl;

    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    for(int i:l)
    {
     cout<<i<<" ";
    }

    cout<<endl;
    cout<<"The size of list :"<<l.size()<<endl;

    l.erase(l.begin());
    for(int i:l)
    {
     cout<<i<<" ";
    }
     cout<<endl;
     cout<<"The size of list :"<<l.size()<<endl;

    return 0;
}