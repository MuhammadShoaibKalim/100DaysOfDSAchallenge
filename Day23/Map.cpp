// In MAP a data structure where our value stored as in key and keys are unique
// Here sorted and unsorted things matters.
#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> m;

    m[1] = " Ahmad ";
    m[14] = " Arya ";
    m[2] = " Ali ";
    
    m.insert({33, " Jaffar "});
    cout<<"Before Erase : "<<endl;

    for (auto i : m)
    {
        // cout<<m.at(i.first)<<" ";
        cout << i.first << i.second << endl;
    }
  
    cout<<"After Erase : "<<m.erase(14)<<endl;

    cout << "13 is present or not  :" << m.count(13)<<endl;
    cout << " 14 is present or not  :" << m.count(14);
  

    return 0;
}