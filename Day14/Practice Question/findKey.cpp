#include<iostream>
using namespace std;

bool find_Key(int arr[], int size, int key, int& position)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            position = i;
            return true; 
        }
    }
    return false; 
}

int main()
{
   const int maxSize = 50;
   int array[maxSize] = {3, 5, 6, 8, 2};

   int key, position, size;
   size = 5;

   cout << "Enter the key you want to find: ";
   cin >> key;

   if (find_Key(array, size, key, position)) {
        cout << "Key " << key << " is present in the array." << endl << "The position is: " << position << endl;
    } else {
        cout << "Key " << key << " is not present in the array." << endl;
    }

    return 0;
}
