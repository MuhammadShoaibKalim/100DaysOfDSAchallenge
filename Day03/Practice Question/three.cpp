//sum of all even number from i to n
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter value of number n : ";
    cin >> n;

    int sum = 0;
    int i=2;
    
    // if (1 < n) {
    //     for (int i = 1; i <= n; i++) {
    //         sum += i;
    //     }
    //     cout << "Sum from 1 to " << n << " is: " << sum << endl;
    // } else {
    //     cout << "The entered number is not greater than 1." << endl;
    // }

    while (i<=n)
    {
        if(i%2==0)
            sum=sum+i;
        i=i+1;
    }
    
    cout<<" The sum of all even number  from "<<i<<" to "<<n<<" is : "<<sum;

    return 0;
}
