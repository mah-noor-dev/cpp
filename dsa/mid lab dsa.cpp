#include<iostream>
using namespace std;
class Node{
public:
	String name;
	int price;
	Node* next;
	Node* prev;
	Node(name,price){
		name=name;
		price=price;
		next=NULL;
		prev=NULL;
		
	}
};
void additem(string name, int price) {
    Node* newnode1 = new Node(name, price);
    if (head == NULL) {
        head = tail = newnode1;
    } else {
        tail->next = newnode1;
        newnode1->prev = tail;
        tail = newnode1;
    }
}
void insertitembefore(string targetname, string newname, int price) {
    Node* temp = head;
    while (temp != NULL && temp->name != targetname) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node* newnode2 = new Node(newname, price);
        if (temp == head) {
            newnode2->next = head;
            head->prev = newnode2;
            head = newnode2;
        } else {
            Node* prev = temp->prev;
            prev->next = newnode2;
            newnode2->prev = prev;
            newnode2->next = temp;
            temp->prev = newnode2;
        }
    }
}
void removeitem(string name) {
    Node* temp3 = head;
    while (temp3 != NULL && temp3->name != name) {
        temp3 = temp3->next;
    }
    if (temp3 != NULL) {
        if (temp3 == head && temp3 == tail) {
            head = tail = NULL;
        } else if (temp3== head) {
            head = head->next;
            head->prev = NULL;
        } else if (temp3 == tail) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            temp3->prev->next = temp3->next;
            temp3->next->prev = temp3->prev;
        }
        delete temp3;
    }
}
void displayforward() {
    Node* temp1 = head;
    while (temp1 != NULL) {
        cout << temp1->name << " Rs." << temp1->price << endl;
        temp1 = temp1->next;
    }
    cout<<endl;
}
void displaybackward() {
    Node* temp2 = tail;
    while (temp2 != NULL) {
        cout << tmep2->name << "  Rs." << temp2->price << endl;
        temp2 = temp2->prev;
    }
    
    cout<<endl;
}
int main(){
	Node n1=new Node("shampoo",1000);
	Node n2=new Node("candy",100);
 Node* head=n1;
 Node* tail=n2;
 n1->next=n2;
 
 
 addditem("soap",500);
 insertitembefore("shampoo","ferrero rocher",560);
 displayforward();
 displaybackward();
 removeitem("shampoo");
  displayforward();
 displaybackward();
	
	
	
}
