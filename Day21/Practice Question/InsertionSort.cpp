#include <iostream>
using namespace std;
int InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }

        }
        arr[j+1]=temp;
    }
}
int main() {
   
     int n=7;
     int arr[n]={10,1,7,4,8,2,11};
     
    cout<<" The insertion sort Before : ";
      for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;


     int insertion=InsertionSort(arr,n);
     cout<<" The insertion sort after : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }   


      
    return 0;
}
