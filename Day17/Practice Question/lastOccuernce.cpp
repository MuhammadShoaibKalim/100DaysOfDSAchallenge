#include <iostream>
using namespace std;
int LasttOccurence(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<e)
    {
        
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid+1;
        }

        else if(key<arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
         mid=s+(e-s)/2;
    } 
      return ans;
}

int main() {
    int even[6]={1,2,3,4,5,5};

    int index=LasttOccurence(even,6, 5);
    cout<<"The first occurence of key is found at index :"<<index;
    
    return 0;
}