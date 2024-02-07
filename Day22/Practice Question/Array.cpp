#include <iostream>
#include<array>
using namespace std;

int main() {


     int arr[5]={1,4,5,6,7};
    
    array<int, 4>a={1,2,3,4};

    //size
    cout<<"The Size of an element is :";
    int size=a.size();
    cout<<size<<endl;

    //print whole array
    cout<<"The whole array is :"<<endl;
     for(int i=0; i<size; i++)
     {
        cout<<a[i]<<endl;
     }


     //print first element of array
     cout<<"The first element is :";
     cout<<a.front()<<endl;
 

     //print last element of array
     cout<<"The last element is :";
     cout<<a.back()<<endl;


     
     //print given array is empty or not.
     cout<<" Empty or Not:";
     cout<<a.empty()<<endl;
     if(a.empty()==0)
     {
        cout<<"The given array is not empty."<<endl;
     }
     else
        cout<<"The array is empty."<<endl;


     //
     
    return 0;
}