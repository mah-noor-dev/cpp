#include<iostream>
using namespace std;

class Patient {
public:
    int patientID;
    string name;
    Patient* next;

    Patient(int id, string n) {
        patientID = id;
        name = n;
        next = NULL;
    }
};

//  Display all patients
void display(Patient* head) {
    Patient* temp = head;
    while (temp != NULL) {
        cout << "[" << temp->patientID << ", " << temp->name << "] -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// ?? Insert at start
void insertStart(Patient*& head, int id, string name) {
    Patient* newPatient = new Patient(id, name);
    newPatient->next = head;
    head = newPatient;
}

// ?? Insert at end
void insertEnd(Patient*& head, int id, string name) {
    Patient* newPatient = new Patient(id, name);
    if (head == NULL) {
        head = newPatient;
        return;
    }
    Patient* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newPatient;
}

// ?? Insert at position (1-based)
void insertAtPosition(Patient*& head, int pos, int id, string name) {
    if (pos == 1) {
        insertStart(head, id, name);
        return;
    }
    Patient* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) return;

    Patient* newPatient = new Patient(id, name);
    newPatient->next = temp->next;
    temp->next = newPatient;
}

// ?? Delete from start
void deleteStart(Patient*& head) {
    if (head == NULL) return;
    Patient* temp = head;
    head = head->next;
    delete temp;
}

// ?? Delete from end
void deleteEnd(Patient*& head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Patient* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}

// ?? Delete from position
void deleteAtPosition(Patient*& head, int pos) {
    if (pos == 1) {
        deleteStart(head);
        return;
    }
    Patient* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }
    if (temp->next == NULL) return;
    Patient* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// ?? Reverse the list
void reverseList(Patient*& head) {
    Patient* prev = NULL;
    Patient* curr = head;
    Patient* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// ?? Sort list by patientID (Bubble sort)
void sortList(Patient*& head) {
    for (Patient* i = head; i != NULL; i = i->next) {
        for (Patient* j = i->next; j != NULL; j = j->next) {
            if (i->patientID > j->patientID) {
                swap(i->patientID, j->patientID);
                swap(i->name, j->name);
            }
        }
    }
}

// ?? MAIN
int main() {
    Patient* head = NULL;

    // Create initial patient list
    insertEnd(head, 101, "Ali");
    insertEnd(head, 105, "Sara");
    insertEnd(head, 103, "Zain");
    insertEnd(head, 108, "Noor");

    cout << "Initial patient queue:\n";
    display(head);

    // Insert emergency at start
    insertStart(head, 100, "EmergencyCase");
    cout << "\nAfter emergency inserted at start:\n";
    display(head);

    // Insert new patient at end
    insertEnd(head, 110, "LateEntry");
    cout << "\nAfter inserting LateEntry at end:\n";
    display(head);

    // Insert shifted patient at 3rd position
    insertAtPosition(head, 3, 102, "ShiftedPatient");
    cout << "\nAfter inserting at 3rd position:\n";
    display(head);

    // Delete from start
    deleteStart(head);
    cout << "\nAfter deleting from start:\n";
    display(head);

    // Delete from end
    deleteEnd(head);
    cout << "\nAfter deleting from end:\n";
    display(head);

    // Delete from position 2
    deleteAtPosition(head, 2);
    cout << "\nAfter deleting from 2nd position:\n";
    display(head);

    // Reverse list
    reverseList(head);
    cout << "\nAfter reversing the list:\n";
    display(head);

    // Sort by patient ID
    sortList(head);
    cout << "\nAfter sorting by patient ID:\n";
    display(head);

    return 0;
}

