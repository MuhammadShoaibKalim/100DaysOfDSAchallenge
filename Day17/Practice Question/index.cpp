#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

    }
      return -1;
}

int main() {
    int even[6]={0,1,2,3,4,5};

    int index=BinarySearch(even,6, 2);
    cout<<"The key is found at index :"<<index;
    
    return 0;
}