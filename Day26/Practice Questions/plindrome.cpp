#include <iostream>
using namespace std;

int checkplindrome(char name[], int n){
       int s=0;
       int e=n-1;

       while (s<=e)
       {
          if (name[s]!=name[e])
          {
             return 0;
          }

          else{
          s++;
          e--;
          }
       }
       return 1;
}
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
      cout<<" The reverse of name :"<<name;

       
      cout<<" \n The given array of string is :"<<checkplindrome(name,len);

    return 0;
}