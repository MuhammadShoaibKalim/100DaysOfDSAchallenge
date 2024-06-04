#include <iostream>
#include<string.h>
using namespace std;

int main() {
     
     char string[10];
     cout<<"Enter the string to convert  :";

     cin.getline(string, 10);
     
    //  cout<<" The string from uppercase to lowercase is :"<<strlwr(string)<<endl;
    //  cout<<" The string from lowercase to uppercase is :"<<strupr(string)<<endl;
     
     cout<<" The string in lowercase is :"<<strlwr(string)<<endl;
     cout<<" The string in uppercase is :"<<strupr(string)<<endl;
     
     
     //cout<<" The string in lowercase is :"<<strlwr(string)<<endl;

    return 0;
}