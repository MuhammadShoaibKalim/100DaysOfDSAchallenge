//draw pattern 10:
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
        while (j <= n)
        { 
             cout<<(char)(65+i-1)<<" ";
             j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
