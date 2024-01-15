//   1111
//   2222
//   3333
//   4444
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n  :";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        int count=0;
        while (j<=n)
        {
            cout<<i;
            count++;
             j++;
        }
        cout<<endl;
        i++;
    }
}