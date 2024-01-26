#include <iostream>
using namespace std;
int FirstOccurence(int arr[], int size, int key)
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
            e=mid-1;
        }

        else if(key>arr[mid])
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
    int even[]={1,2,3,4,5};

    int index=FirstOccurence(even,6, 1);
    cout<<"The first occurence of key is found at index :"<<index;
    
    return 0;
}