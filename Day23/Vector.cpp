//Vector is a dynamic array.

#include <iostream>
#include<vector>
using namespace std;

int main() {
   

     vector <int> myVector(5,2);
     cout<<"Vector myVector elements here  :";
     for(int i:myVector)
     {
        cout<<i<<" ";
     }

     cout<<endl;
      
    vector<int> v;

    //Check capacity how many elements can store.
    cout<<" Capacity of vector :"<< v.capacity()<<endl;


    //add element

    v.push_back(1);
    cout<<" Capacity of vector after 1 element :"<< v.capacity()<<endl;

     v.push_back(2);
    cout<<" Capacity of vector after 2 elements :"<< v.capacity()<<endl;
    
    v.push_back(20);
    cout<<" Capacity of vector after 20 elements :"<< v.capacity()<<endl;
    

    cout<<"At 2 index the element is :"<<v.at(2)<<endl;

     
    cout<<" The size of vector :"<< v.size()<<endl;
    


    
     //print first element of array
     cout<<"The first element is :";
     cout<<v.front()<<endl;
 

     //print last element of array
     cout<<"The last element is :";
     cout<<v.back()<<endl;


     //pop before and after vector array
     

     cout<<"Before pop back here is an vector :";
     for(int i:v) {
        cout<<i<<" "<<endl; 
     }
     cout<<" After pop back here : "<<endl;

     v.pop_back();
     for(int i:v) {
        cout<<i<<" "; 
     }
      cout<<endl;

    return 0;
}