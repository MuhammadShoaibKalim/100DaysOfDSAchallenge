#include <iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
     for(int i=0; i<n/2; i++)
     {
        swap(arr[i], arr[n-1-i]);
     }
}
int main()
{
    const  int  size=5;

    int myArray[size]={7,4,9,1,2};

    cout<<"The original array is :";

    for(int i=0; i<size; i++)
    {
        cout<<myArray[i]<<" ";

    }


    reverseArray(myArray, size);

    cout<<endl<<" The reversed array is :";
    
    for(int i=0; i<size; i++)
    {
        cout<<myArray[i]<<" ";
    }

     return 0;
}