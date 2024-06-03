#include <iostream>
using namespace std;

int main() {
    // total marks, percentage and division
     int IT, CS, SE, DS;
     cout <<" Please enter the marks of all subjects : ";
     cin>>IT>>CS>>SE>>DS;

     cout<<" The marks in IT :"<<IT<<" DS :"<<DS<<" CS :"<<CS<<" SE :"<<SE;
     
     int total = CS+IT+DS+SE;
     int percentage = CS+IT+DS+SE/4;
     cout<<"\n The percentage is : "<<percentage<<endl;
    
     cout<<" The total of all subjects is :"<<total;

 

   //check eligibility for scholarship

   if(total>=270 || percentage>65)
   {
    cout<<" You're eligible for scholarship.";
   }
   else
      {
    cout<<" You're not eligible for scholarship.";
   }

    return 0;
}