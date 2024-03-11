#include <iostream>
using namespace std;
bool printSum(int arr[3][4], int row, int col){
          int sum=0;
          for(int row=0; row<3; row++){  
            
             for(int col=0; col<4; col++)
             {
                sum +=arr[row][col];
             }
            
          }
          cout<<" The sum of : "<<sum<<endl;
      
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

          
      
        printSum(arr, 3, 4);
       
       
     
    return 0;
}
