//draw pattern 9:
#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<" Enter the number :";
    cin>>n;

    int row=1;

    while(row <= n)
    {
        int col=1;
        while (col <= row)
        { 
             cout<< row-col+1 <<" ";
             col++; 
        }
        cout<<endl;
        row++;
    }
    
}
