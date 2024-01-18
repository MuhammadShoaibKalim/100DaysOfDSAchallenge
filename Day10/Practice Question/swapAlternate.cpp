#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+2)
    {
        if(i+1<size)
        {
          swap(arr[i],arr[i+1]);
        }
    }
}


int main() {

    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};

    printArray(odd, 5);
    swapAlternate(odd, 5);


    printArray(even, 6);
    swapAlternate(even, 6);

    return 0;
}