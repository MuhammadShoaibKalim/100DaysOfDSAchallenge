//draw pattern 3:
#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<" Enter the number :";
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        while (j<=n)
        {
             cout<<count;
             count++;
             j++;
        }
        cout<<endl;
        i++;
    }
    
}