/*
Write a TV class that attribute of Brand Name, Model and Retail price.
Write a constructor of TV class to initialize all attribute
Write a method to display all attribute and method to change the attribute.
*/
#include <iostream>
using namespace std;
 class TV{
      private:
         string brand_name;
         string model;
         float retail_price;
      public:
         TV(string b, string m, float r) {
            brand_name = b;
            model = m;
            retail_price = r;
         };  
         void display() {
            cout << "Brand Name: " << brand_name << endl;
            cout << "Model: " << model << endl;
            cout << "Retail Price: $" << retail_price << endl;
         }
 };
int main() {
          float price;
          string model, brand;

          TV tv1("PEL", "2022", 12333.9);
          tv1.display();
    
    return 0;
}
