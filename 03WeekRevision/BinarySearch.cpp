#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
           
           for(int i=0; i<size; i++)
           {
              if(arr[i] == key)
              {
                 return i;
              }
           }
}

int main() {
    int n=5;
    int arr[n]={3,4,5,6,7};

    int index=BinarySearch(arr, n, 5);
    cout<<"The key is found at :"<<index;  
    return 0;
}