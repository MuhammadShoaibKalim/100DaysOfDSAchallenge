#include <iostream>
int add(int* a, int* b) {
   if (*b == 0) {
        return *a;
    }
 
    int aValue = *a + 1;
    int bValue = *b - 1;
    return add(&aValue, &bValue);
}

int main() {
    int num1 = 5;
    int num2 = 3;

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " 
              << add(&num1, &num2) << std::endl;

    return 0;
}
