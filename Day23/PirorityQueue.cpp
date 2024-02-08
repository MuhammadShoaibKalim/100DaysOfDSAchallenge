//The type of DSin which array the first element will be greatest and it is similar to heap
//The default Pirority queue is max heap.
#include <iostream>
#include<queue>
using namespace std;

int main() {
    // Your code goes here
    priority_queue<int>maxi;

    priority_queue<int,vector<int>,greater<int>>mini;
   
   maxi.push(1);
   maxi.push(3);
   maxi.push(2);
   maxi.push(0);

    cout<<"Size : "<<maxi.size()<<endl;

   for(int i=0; i<maxi.size(); i++)
   {
       cout<<maxi.top()<<" ";
       maxi.pop();
   }
       cout<<endl;
     
  

    int m=mini.size();
    for(int i=0; i<m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"empty or not : "<<mini.empty()<<endl;



    return 0;
}