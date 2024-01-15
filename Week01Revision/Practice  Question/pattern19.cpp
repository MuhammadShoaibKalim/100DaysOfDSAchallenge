//Pattern no: 19
//        *
//       **
//      ***
//     ****
//    *****
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;

    while (i <= n) {

        int space=n-1;
        while(space<=n)
        {
         cout<<space<<" ";
         space--;
        }
        
        int col=1
        while(i<=j)
        {
           cout<<"*";
        }
        cout<<endl;
        i++;
    }

    return 0;
}
