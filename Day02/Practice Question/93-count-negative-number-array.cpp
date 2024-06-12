#include <iostream>
#include <vector>
using namespace std;
int CountNegative(const vector<int> arr)
{
    int count = 0;
    cout<<" The negative number are : ";
    for (int i = 1; i <= arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            count++;
            cout<<arr[i]<<",";
        }
    }
    return count;
}

int main()
{
    vector<int> arr;
    int n, elements;

    cout << " Enter the size of array :";
    cin >> n;

    cout << " Enter elements of an array :";
    for (size_t i = 0; i < n; i++)
    {
        cin >> elements;
        arr.push_back(elements);
    }

    cout << "\n Count number in given array is : " << CountNegative(arr);
  
    return 0;
}

