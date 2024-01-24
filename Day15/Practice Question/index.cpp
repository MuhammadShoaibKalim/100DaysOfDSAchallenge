#include <iostream>
using namespace std;
 
 int BinarySearch(int arr[], int key, int size)
 { 
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
 }
int main() {
      
      int even[6]={2,4,5,6,7,34};
      int odd[7]={3,4,5,6,7,8,27};

      int evenindex=BinarySearch(even, 5, 6);
      cout<<"The key is present at a index :"<<evenindex<<endl;

      int oddindex=BinarySearch(odd, 27, 7);
      cout<<"The key is present at a index :"<<oddindex<<endl;
      

    return 0;
}