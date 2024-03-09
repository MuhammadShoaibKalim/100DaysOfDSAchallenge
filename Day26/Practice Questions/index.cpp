#include <iostream>
using namespace std;
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
     cout<<getLength(name)<<endl;
     return 0;

    return 0;
}