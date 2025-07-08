#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter any letter: ";
    cin >> a;
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        cout << "vowel but lowercase";
    }
    
    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        cout << " vowels but uppercase .";
    } else {
        cout << "consonent";
    }
    
    return 0;
}
