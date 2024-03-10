#include <iostream>
using namespace std;

int main() {

           //Intilizing 
           //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,12};
           int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,4444}};
        //    int arr[3][4];
           
           //Taking input 
          /* cout<<"Enter the array elements :";

           for(int i=0; i<3; i++)
           {
            for(int j=0; j<4; j++)
            {
                cin>>arr[i][j];
            }
           }   */

            //Displaying output 
           cout<<" The output in colum vise is : \n";

           for(int i=0; i<3; i++)
           {
            for(int j=0; j<4; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
           }  


             //Displaying output 
       /*    cout<<" The output in colum vise is : \n";

           for(int i=0; i<4; i++)
           {
            for(int j=0; j<3; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
           } */




    return 0;
}