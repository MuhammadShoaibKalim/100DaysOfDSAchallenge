#include <iostream>
using namespace std;

int main() {
    // concatinate two string
      
      string* first_name=new string;
      string* last_name=new string;


       cout<<" Enter the first and last name :";
      cin>>*first_name>>*last_name;
      cout<<"The full name is :" <<*first_name<<" "<<*last_name<<endl;
      delete first_name;
      delete last_name;

    
    return 0;
}
