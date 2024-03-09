#include <iostream>
using namespace std;
int reverseString(char name[], int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }

}
int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main() {
   
      char name[10];

      cout<<"Enter Your Input name :";
      cin>>name;

      cout<<"Your name is : ";
      cout<<name;

     cout<<" \n The size of array of string :";
     int len=getLength(name);
     cout<<len<<endl;
   

      reverseString(name, len);
      cout<<"The reverse of name :"<<name;

    return 0;
}