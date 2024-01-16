#include <iostream>
#include <cctype>
using namespace std;

int countVowels(const string & str) {
    int count = 0;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Number of vowels: " << countVowels(input) << endl;

    return 0;
}
