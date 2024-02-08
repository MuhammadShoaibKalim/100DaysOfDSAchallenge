//First in last out it is right to say the collection of books placed 
//the last/top book get easily or take someone to read. (LIFO) 
#include <iostream>
#include <stack>
using namespace std;

int main() {
    
     stack<string> s;
     cout<<"The size of stack before pushing :"<<s.size()<<endl;

   
     s.push("Ali");
     s.push("Ahmad");
     s.push("Aryan");
     

     cout<<"Top element is before pop : "<<s.top()<<endl; 
    //  cout<<"The size of stack after pushing :"<<s.size()<<endl;
     
      s.pop();
      cout<<"Top element after pop : "<<s.top()<<endl;
     
     s.pop();
      cout<<"Top element after pop : "<<s.top()<<endl;
  

    
    return 0;
}