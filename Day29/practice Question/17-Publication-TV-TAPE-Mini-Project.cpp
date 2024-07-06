#include <iostream>
using namespace std;

class Publication {
protected:
    float price;
public:
    virtual void get_data() {
        cout << "Enter price of publication: ";
        cin >> price;
    }

    virtual void put_data() const {
        cout << "Publication Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;
public:
    void get_data() override {
        Publication::get_data();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void put_data() const override {
        Publication::put_data();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playingTime;
public:
    void get_data() override {
        Publication::get_data();
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }

    void put_data() const override {
        Publication::put_data();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;

    cout << "Enter Book details:" << endl;
    b.get_data();

    cout << "\nEnter Tape details:" << endl;
    t.get_data();

    cout << "\nBook Details:" << endl;
    b.put_data();

    cout << "\nTape Details:" << endl;
    t.put_data();

    return 0;
}
