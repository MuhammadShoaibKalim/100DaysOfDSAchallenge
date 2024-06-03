#include <iostream>
using namespace std;

int main() {
    // alphabet, digit or special character

  char my_char;
  cout<<" Enter the character :";
  cin>>my_char;
  if((my_char>='a' && my_char<='z') || (my_char>='A' && my_char<='Z'))
  {
      cout<<" It is an alphabet";
  }
  else if((my_char>='0' && my_char<='9') || (my_char="10" && my_char<='1000'))
  {
      cout<<" It is a digit";
  }
  else
  {
      cout<<" It is a special character";
  }
    
    return 0;
}