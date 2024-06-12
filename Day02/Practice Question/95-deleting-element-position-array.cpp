#include <iostream>
using namespace std;

int main() {
   int arr[5];
   cout << "Enter elements of an array: ";

 
   for (int i = 0; i < 5; i++) {
       cin >> arr[i];
   }

   int position;
   cout << "Enter the position of the element to be deleted (0-based index): ";
   cin >> position;


   if (position < 0 || position >= 5) 
   {
       cout << "Invalid position!" << endl;
       return 1;
   }

   for (int i = position; i < 4; i++) {
       arr[i] = arr[i + 1];
   }

   cout << "After deleting the element from the position:" << endl;
   for (int i = 0; i < 4; i++) 
   { 
       cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
