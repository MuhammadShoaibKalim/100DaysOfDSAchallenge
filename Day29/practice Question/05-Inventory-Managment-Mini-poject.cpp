        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, id;
                int qty;
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter item ID: ";
                cin >> id;
                cout << "Enter initial quantity: ";
                cin >> qty;
                InventoryItem newItem(name, id, qty);
                inventory.add_item(newItem);
                break;
            }
            case 2: {
                string id;
                int qty;
                cout << "Enter item ID: ";
                cin >> id;
                cout << "Enter quantity to add: ";
                cin >> qty;
                inventory.update_stock(id, qty, true);
                break;
            }
            case 3: {
                string id;
                int qty;
                cout << "Enter item ID: ";
                cin >> id;
                cout << "Enter quantity to remove: ";
                cin >> qty;
                inventory.update_stock(id, qty, false);
                break;
            }
            case 4: {
                cout << "Inventory Items:" << endl;
                inventory.show_items();
                break;
            }
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    return 0;
}
