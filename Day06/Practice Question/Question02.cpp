//Convert Deciaml to Binary :567. 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int n;
cout<<"Enter the number to convert into decimal :";
cin>>n;

int ans=0;
int i=0;

while(n !=0)
{
    int bit=n & 1;
    ans= ans + (bit * pow(10, i));
    n= n >>1;
    i++;

}

cout<<"The binary representation of "<<n<<" is :"<<ans;

}