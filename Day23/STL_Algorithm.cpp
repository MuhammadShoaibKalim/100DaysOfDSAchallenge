// Ye algo tab useful/helpful hota jb ap koi coding text dety aur waha par binary
//  search par time ziyda lagta h so apko kam time lagny ya time bachny k liy ye
// use karna ho ga tu beneficiaries hoga.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout << " Finding the number : " << binary_search(v.begin(), v.end(), 7) << endl;

    cout << " Lower bound   : " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << " Upper bound   : " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;



    int a=12;
    int b=15;

    cout<<" max " <<max(a,b)<<endl;
   cout<<" min "<<min(a,b)<<endl;

   cout<<" swap : ";
   swap(a,b);
   cout<<" a :"<<a <<" b :" << b<< endl  ;
    return 0;
}