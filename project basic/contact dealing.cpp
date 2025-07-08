#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

void displayContact(const Contact& contact) {
    cout << "Name: " << contact.name << endl;
    cout << "Phone: " << contact.phone << endl;
    cout << "Email: " << contact.email << endl;
    cout << "---------------------" << endl;
}

int main() {
    const int MAX_CONTACTS = 100;
    Contact contacts[MAX_CONTACTS];
    int contactCount = 0;
    int option;

    do {
        cout << "\nSelect an option:\n1. Add Contact\n2. Delete Contact\n3. Change Contact\n4. Call\n5. Message\n6. Exit\n";
        cin >> option;

        switch (option) {
            case 1: // Add Contact
                Contact newContact; // Move this line outside the if statement
                cout << "Enter name: ";
                cin >> newContact.name;
                cout << "Enter phone number: ";
                cin >> newContact.phone;
                cout << "Enter email: ";
                cin >> newContact.email;
                contacts[contactCount] = newContact;
                contactCount++;
                cout << "Contact added successfully!" << endl;
                break;

            case 2: // Delete Contact
                int index;
                cout << "Enter the index of the contact to delete: ";
                cin >> index;
                if (index >= 0 && index < contactCount) {
                    for (int i = index; i < contactCount - 1; i++) {
                        contacts[i] = contacts[i + 1];
                    }
                    contactCount--;
                    cout << "Contact deleted successfully!" << endl;
                } else {
                    cout << "Invalid index. Cannot delete contact." << endl;
                }
                break;

            case 3: // Change Contact
                int changeIndex;
                cout << "Enter the index of the contact to change: ";
                cin >> changeIndex;
                if (changeIndex >= 0 && changeIndex < contactCount) {
                    Contact updatedContact;
                    cout << "Enter new name: ";
                    cin >> updatedContact.name;
                    cout << "Enter new phone number: ";
                    cin >> updatedContact.phone;
                    cout << "Enter new email: ";
                    cin >> updatedContact.email;
                    contacts[changeIndex] = updatedContact;
                    cout << "Contact changed successfully!" << endl;
                } else {
                    cout << "Invalid index. Cannot change contact." << endl;
                }
                break;

            case 4: // Call
                cout << "Calling..." << endl;
                if (contactCount > 0) {
                    int callIndex;
                    cout << "Enter the index of the contact to call: ";
                    cin >> callIndex;
                    if (callIndex >= 0 && callIndex < contactCount) {
                        srand(time(0));
                        int response = rand() % 2;
                        if (response == 0) {
                            cout << "Sorry, the person is busy." << endl;
                        } else {
                            cout << "Hello, " << contacts[callIndex].name << "! How can I assist you?" << endl;
                        }
                    } else {
                        cout << "Invalid index. Cannot call contact." << endl;
                    }
                } else {
                    cout << "No contacts available to call." << endl;
                }
                break;

            case 5: // Message
                string message;
                cout << "Enter message: ";
                cin.ignore();
                getline(cin, message);
                if (message == "hi" || message == "hello") {
                    cout << "Hello there, how are you?" << endl;
                    string reply;
                    getline(cin, reply);
                    if (reply == "good" || reply == "fine" || reply == "alhamdulillah") {
                        cout << "Glad to know that." << endl;
                    } else {
                        cout << "No specific reply." << endl;
                    }
                } else {
                    cout << "No specific reply." << endl;
                }
                break;

            case 6: // Exit
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid option. Please try again." << endl;
        }

    } while (option != 6);

    cout << "\n--- Contact List ---" << endl;
    for (int i = 0; i < contactCount; i++) {
        displayContact(contacts[i]);
    }

    return 0;
}
