#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans=0;

    for(int i=0; i<size; i++)
    {
        ans ^=arr[i];
    }
    return ans;
}

int main()
{
    int n=5;
    int myArray[5]={1,3,4,1,4};
    
    cout<<"The unique element in array is :";
    cout<<findUnique(myArray, n);

}