#include <iostream>
#include <vector>
using namespace std;

class InventoryItem {
private:
    string item_name;
    string item_id;
    int quantity;

public:
    InventoryItem() : item_name(""), item_id(""), quantity(0) {}

    InventoryItem(string name, string id, int qty) : item_name(name), item_id(id), quantity(qty) {}

    void add_stock(int qty) {
        quantity += qty;
        cout << "Stock added successfully." << endl;
    }

    void remove_stock(int qty) {
        if (quantity < qty)
            cout << "Insufficient stock." << endl;
        else {
            quantity -= qty;
            cout << "Stock removed successfully." << endl;
        }
    }

    void show_details() const {
        cout << "Item Name: " << item_name << endl;
        cout << "Item ID: " << item_id << endl;
        cout << "Quantity: " << quantity << endl;
    }

    string get_item_id() const {
        return item_id;
    }
};

class Inventory {
private:
    vector<InventoryItem> items;

public:
    void add_item(const InventoryItem& item) {
        items.push_back(item);
        cout << "Item added successfully." << endl;
    }

    void update_stock(const string& id, int qty, bool add) {
        for (auto& item : items) {
            if (item.get_item_id() == id) {
                if (add)
                    item.add_stock(qty);
                else
                    item.remove_stock(qty);
                return;
            }
        }
        cout << "Item not found." << endl;
    }

    void show_items() const {
        for (const auto& item : items) {
            item.show_details();
        }
    }
};

int main() {
    Inventory inventory;
    int choice;

    do {
        cout << "1. Add item" << endl;
        cout << "2. Add stock" << endl;
        cout << "3. Remove stock" << endl;
        cout << "4. Show items" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter
