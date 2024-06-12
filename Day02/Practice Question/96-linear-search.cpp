#include <iostream>
using namespace std;

int main() {
   int arr[5];
   cout << "Enter elements of an array: ";

 
   for (int i = 0; i < 5; i++) {
       cin >> arr[i];
   }

   int position;
   cout << "Enter the position of the element to be searched (0-based index): ";
   cin >> position;


   if (position < 0 || position >= 5) 
   {
       cout << "Invalid position!" << endl;
       return 1;
   }

   for (int i = 0 ; i < 5; i++) {
       if( arr[i]==arr[position])
       {
           cout << "Element found at position: " << i << endl;
           break;
       }
   
     
    cout << "After searching the element from the position: "<<endl;
    cout << arr[position] << endl;
   }
    
  

   return 0;
}
