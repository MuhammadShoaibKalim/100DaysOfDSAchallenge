#include <iostream>
using namespace std;
bool isPresent(int arr[3][4], int n, int row, int col){
          for(int row=0;row<3;row++){
             for(int col=0; col<4;col++)
             {
                return 1;
             }
          }
          return false;
      
}


int main() {

    
          int arr[3][4];
           
           //Taking input 
         cout<<"Enter the array elements :";

           for(int row=0; row<3; row++)
           {
            for(int col=0; col<4; col++)
            {
                cin>>arr[row][col];
            }
           }   

        int target;

        cout<<"Enter the target value you find :";
        cin>>target;    
      
        if(isPresent(arr, target, 3, 4))
        {
            cout<<"Element is found";
        }
        else
        {
            cout<<"Element is not found";
        }
     
    return 0;
}
