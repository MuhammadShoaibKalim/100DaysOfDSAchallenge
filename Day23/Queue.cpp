//Queue is one of the data structure in which it works like a person who go to
// bank and get money first and the who come last get money last. (FIFO+LILO)
#include <iostream>
#include<queue>
using namespace std;

int main() {
    
    queue<string>q;
   
    cout<<" Before pushing "<<q.size()<<endl;
    q.push("Ahmad");
    q.push("Ali");
    q.push("Aryan");
    q.push("Asad");

    cout<<" After pushing "<<q.size()<<endl;
    
    cout<<"The top element :"<<q.front()<<endl;
    q.pop();
    cout<<"The top element :"<<q.front()<<endl;
   
   
    return 0;
}