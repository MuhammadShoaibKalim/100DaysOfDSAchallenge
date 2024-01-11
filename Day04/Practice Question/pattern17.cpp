//draw pattern 17:
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
        char cha='A'+i+j-2;
        while (j <= n)
        { 
             cout<<cha<<" ";
             j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

