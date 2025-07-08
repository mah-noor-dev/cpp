#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount: ";
    cin >> amount;

    int thousand = amount / 1000;
    
   
    amount =amount % 1000;

    int fiveHundred = amount / 500;
   
    amount %= 500;

    int hundred = amount / 100;
    amount %= 100;

    int fifty = amount / 50;
    amount %= 50;

    int ten = amount / 10;
    amount %= 10;

    int five = amount / 5;
    amount %= 5;

    int two = amount / 2;
    amount %= 2;

    int one = amount;

    cout << "Currency breakdown:" << endl;
    if (thousand > 0)
        cout << "1000 notes: " << thousand << endl;
    if (fiveHundred > 0)
        cout << "500 notes: " << fiveHundred << endl;
    if (hundred > 0)
        cout << "100 notes: " << hundred << endl;
    if (fifty > 0)
        cout << "50 notes: " << fifty << endl;
    if (ten > 0)
        cout << "10 notes: " << ten << endl;
    if (five > 0)
        cout << "5 coins: " << five << endl;
    if (two > 0)
        cout << "2 coins: " << two << endl;
    if (one > 0)
        cout << "1 coin: " << one << endl;

    return 0;
}
