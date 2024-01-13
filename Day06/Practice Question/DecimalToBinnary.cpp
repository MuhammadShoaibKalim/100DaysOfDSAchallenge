//Convert Deciaml to Binary. 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int n;
cout<<"Enter the number to convert :";
cin>>n;

int i=0;
int ans=0;

while(n != 0)
{
    int bit= n & 1;
    ans=ans + (bit * (10,i) );
    n>>1;
    i++;

}
cout<<"The binary represetation is :"<<ans;
}