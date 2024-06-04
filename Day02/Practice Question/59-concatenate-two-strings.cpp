#include <iostream>
#include<cstring>
#include <string.h>
using namespace std;


int main() {
    // Your code goes here
    string s1 = "Hello";
    string s2 = "World";
    // string s3 = s1 + "  " + s2;
    // cout << s3 << endl;



   //Other method
    // s1.append(s2);
    // cout << s1 << endl;
     
     cout<<"Enter value of str1 :";
    char str1[10], str2[10];
    cin.getline (str1, 10);
     cout<<"Enter value of str2 :";
     cin.getline (str2, 10);

     cout<<" The str1 and str2 are the :";
    //strcat
      strcat (str1, str2);
      cout<<strcat;

    // string s4 = s3.substr(0, 5);
    // cout << s4 << endl;
    return 0;
}