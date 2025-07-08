#include <iostream>
#include <string>
using namespace std;

const int MAX_CONTACTS = 100;

string names[MAX_CONTACTS];
string categories[MAX_CONTACTS];
string phoneNumbers[MAX_CONTACTS];
int contactCount = 0;

int main() {
    while (true) {
        cout << "\nContact Management System" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Delete Contact" << endl;
        cout << "3. Modify Contact" << endl;
        cout << "4. Check Contact" << endl;
        cout << "5. Call Contact" << endl;
        cout << "6. Message Contact" << endl;
        cout << "7. Reply to Message" << endl;
        cout << "8. Reply to Call" << endl;
        cout << "9. Exit" << endl;
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            if (contactCount >= MAX_CONTACTS) {
                cout << "Contact list is full!" << endl;
                continue;
            }
            cout << "Enter name: ";
            cin >> names[contactCount];
            cout << "Enter category: ";
            cin >> categories[contactCount];
            cout << "Enter phone number: ";
            cin >> phoneNumbers[contactCount];
            contactCount++;
            cout << "Contact added successfully." << endl;
        } else if (choice == 2) {
            string name;
            cout << "Enter name of the contact to delete: ";
            cin >> name;
          
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    for (int j = i; j < contactCount - 1; ++j) {
                        names[j] = names[j + 1];
                        categories[j] = categories[j + 1];
                        phoneNumbers[j] = phoneNumbers[j + 1];
                    }
                    contactCount--;
                    cout << "Contact deleted successfully." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 3) {
            string name;
            cout << "Enter name of the contact to modify: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Enter new category: ";
                    cin >> categories[i];
                    cout << "Enter new phone number: ";
                    cin >> phoneNumbers[i];
                    cout << "Contact modified successfully." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 4) {
            string name;
            cout << "Enter name of the contact to check: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Name: " << names[i] << endl;
                    cout << "Category: " << categories[i] << endl;
                    cout << "Phone Number: " << phoneNumbers[i] << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 5) {
            string name;
            cout << "Enter name of the contact to call: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Calling " << names[i] << " at " << phoneNumbers[i] << "..." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 6) {
            string name;
            cout << "Enter name of the contact to message: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Messaging " << names[i] << " at " << phoneNumbers[i] << "..." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 7) {
            string name;
            cout << "Enter name of the contact to reply to message: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Replying to message from " << names[i] << "..." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 8) {
            string name;
            cout << "Enter name of the contact to reply to call: ";
            cin >> name;
            bool found = false;
            for (int i = 0; i < contactCount; ++i) {
                if (names[i] == name) {
                    found = true;
                    cout << "Replying to call from " << names[i] << "..." << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Contact not found." << endl;
            }
        } else if (choice == 9) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
