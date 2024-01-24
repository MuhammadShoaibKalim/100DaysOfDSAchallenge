#include <iostream>
using namespace std;


int BinarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        
        
         if(key>arr[mid]){
           start= mid+1;
        }

        else{
            end= mid-1;
        }
        mid=start + (end-start)/2;
    }
     return -1;
}
int main() {
    
         int even[4]={23,24,25,26};
         int odd[5]={20, 25,28,29,30};

         int evenIndex=BinarySearch(even, 4, 23);
         cout<<"The key value is present at :"<<evenIndex<<endl;

          int oddIndex=BinarySearch(odd, 5, 22);
          cout<<"The key value is present at :"<<oddIndex<<endl;
         
    return 0;
}