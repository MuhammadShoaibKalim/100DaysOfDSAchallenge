#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    void setTitle(string t) {
        title = t;
    }
    string getTitle() const {
        return title;
    }
    
    void setAuthor(string a) {
        author = a;
    }
    string getAuthor() const {
        return author;
    }
    
    void setISBN(string isbn) {
        ISBN = isbn;
    }
    string getISBN() const {
        return ISBN;
    }
    
    void printDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main() {
    Book book;
    book.setTitle("1984");
    book.setAuthor("George Orwell");
    book.setISBN("978-0451524935");
    
    book.printDetails();
    
    return 0;
}
