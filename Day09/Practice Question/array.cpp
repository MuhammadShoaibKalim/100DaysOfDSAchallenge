#include <iostream>
using namespace std;
int main()
{
    int size;
    
    cout<<"Enter the size of an array :";
    cin>>size;

    
    cout<<"Enter the array :";
    int  my_array[size];

    for(int i=0; i<size; i++)
    {
      
        cin>>my_array[i];
    }

     int sum=0;

     cout<<"The sum of an array is :";
    for(int i=0; i<size; i++)
    {
         
      sum+=my_array[i];
     
    }
     cout<<sum<<" ";
}