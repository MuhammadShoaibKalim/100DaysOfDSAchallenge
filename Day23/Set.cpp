//every element must be unique 1,3,5,  Not=5 5 5
#include <iostream>
#include<set>
using namespace std;

int main() {
        set <int> s;

        s.insert(1);
        s.insert(1);
        s.insert(1);
        s.insert(1);
        s.insert(1);
        s.insert(5);
        s.insert(5);
        s.insert(5);
        s.insert(0);
        s.insert(0);

        for(auto i:s)
        {
            cout<<i<<" "<<endl;
        }
        s.erase(s.begin());

        for(auto i:s)
        {
            cout<<i<<" "<<endl;
        }
        

    return 0;
}