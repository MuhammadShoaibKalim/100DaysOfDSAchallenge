//draw pattern 11:
#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<" Enter the number :";
    cin>>n;

    int i=1;

    while(i <= n)
    {
        int j=1;
        char ch='A';
        while (j <= n)
        { 
             cout<<ch<<" ";
             ch++;
             j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
