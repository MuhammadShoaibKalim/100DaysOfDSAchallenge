#include <iostream>
using namespace std;

int sumOfMultiples(int number, int start, int end) {
    int sum=0;

    for(int i=start; i<=end; i++)
    {
        sum +=i;
    }
    return sum;
}

int main() {
    int number, start, end;
     int sum;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Enter the start of the range: ";
    cin >> start;

    cout << "Enter the end of the range: ";
    cin >> end;
    
    cout<<"The sum of both number start to end :"<<sum<<endl;
    
    cout << "Sum of multiples: " << sumOfMultiples(number, start, end) << endl;

    return 0;
}
