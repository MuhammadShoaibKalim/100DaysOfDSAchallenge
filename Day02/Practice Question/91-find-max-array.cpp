#include <iostream>
using namespace std;
int MaxArray(int arr[], int n) {
        int max = arr[0];

        for (int i = 1; i < n; i++) 
        {
            if (arr[i] > max) 
            {
                max = arr[i];
            }
        }
        return max;
    }
    
int main() {
    // find max number in given array.
     int arr[10];
     
     cout<<" Enter elements of an array :";
     for (size_t i = 0; i < 10; i++)
     {
        cin>>arr[i];
     }
     
     cout<<"\n Maximum number in given array is : "<<MaxArray(arr, 10);


    return 0;
}
