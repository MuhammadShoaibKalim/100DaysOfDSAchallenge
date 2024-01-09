//farnheit to calcius
#include <iostream>
using namespace std;
int main() {
    
    float fahrenheit;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    float celsius = (5.0 / 9) * (fahrenheit - 32);

    cout << "Temperature in Fahrenheit: " << fahrenheit << " is equivalent to Celsius: " << celsius << "°C" << endl;
     
    return 0;
}
