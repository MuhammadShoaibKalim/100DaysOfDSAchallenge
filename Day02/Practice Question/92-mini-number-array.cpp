#include <iostream>
#include<vector>
using namespace std;
int MinArray(const vector<int> arr){
        int min = arr[0];

        for (int i = 1; i < arr.size(); i++) 
        {
            if (arr[i] < min) 
            {
                min = arr[i];
            }
        }
        return min;
    }
    
int main() {
     vector <int> arr;
     int n, elements;
     
     cout<<" Enter the size of array :";
     cin>>n;
     
     cout<<" Enter elements of an array :";
     for (size_t i = 0; i < n; i++)
     {
        cin>>elements;
        arr.push_back(elements);
     }
     
     cout<<"\n Minimum number in given array is : "<<MinArray(arr);


    return 0;
}
