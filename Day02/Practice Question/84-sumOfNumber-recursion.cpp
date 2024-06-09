#include <iostream>
using namespace std;

int sumOfNumber(int start, int end){
    if(start>end)
        return 0;
     return start+sumOfNumber(start+1,end);
}
int main() {
    int start,end;
    cout<<"Enter the start and end number: ";
    cin>>start>>end;

    cout<<" The sum of number from start to end :"<<sumOfNumber(start,end)<<endl;
    
    return 0;
}
