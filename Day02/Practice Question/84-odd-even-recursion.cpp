#include <iostream>
using namespace std;

int oddEven(int curr, int limit){
    if(curr>limit)
        return 0;
            cout<<curr;
     oddEven(curr+2, limit);
}
int main() {
    int num1,num2;
    cout<<"Enter the start and end number: ";
    cin>>num1>>num2;

    cout<<" The sum of number from start to end :"<<oddEven(num1,num2)<<endl;
    
    return 0;
}
