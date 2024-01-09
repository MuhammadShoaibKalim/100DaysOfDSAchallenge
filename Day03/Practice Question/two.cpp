//Prime or not from given point.
#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;
    
    int i=2;
    
    while(i<n)
    {
        if(n%i==0){
            cout<<"The prime for "<<i<<endl<<endl;
        }
        else{
             cout<<"Not prime for "<<i<<endl;
        }
        i=i+1;
    }
    return 0;
}
