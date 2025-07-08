//simple liked list creation :

//#include<iostream>
//using namespace std;
//class Node{
//	public:
//	int daata;
//	Node* next;
//	Node(int value){
//		daata=value;
//		next=NULL;
//		
//	}
//};
//int main(){
//	Node* head=new Node(1);
//	Node* secondnode=new Node(2);
//	Node* thirdnode=new Node(3);
//	Node* tail=new Node(4);
//	
//	head->next=secondnode;
//	secondnode->next=thirdnode;
//	thirdnode->next=tail;
//	head->daata=7;
//	
//	cout<<endl<<"printing linked list : "<<endl;
//	cout<<head->daata<<endl;
//	cout<<secondnode->daata<<endl;
//	cout<<thirdnode->daata<<endl;
//	cout<<tail->daata<<endl;
//	
//	return 0;
//}
 
 
 //  creating LINKED LIST ALONG WITH TRAVERSING;
// 
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//		int number;
//		Node* next;
//			Node(int value){
//				number=value;
//				next=NULL;
//				
//			}
//};
//int main(){
//	Node* node1=new Node(5);
//	Node* node2=new Node(10);
//	Node* node3=new Node(15);
//	Node* node4=new Node(20);
//	
//	node1->next=node2;
//	node2->next=node3;
//	node3->next=node4;
//	
//	Node* head=node1;
//	Node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->number<<" ->  ";
//		temp=temp->next;
//	}
//	cout<<"NULL";
//	
//	
//	cout<<endl<<"lets add another node here !!!"<<endl;
//	
//	Node* newnode=new Node(25);
//	node4->next=newnode;
//	
//	Node* temp2=head;
//	while(temp2!=NULL){
//		cout<<temp2->number<<" ->  ";
//		temp2=temp2->next;
//	}
//	cout<<"NULL";
//	return 0;
//	
//	
//}

//
//INSERTION 3 CASES:
//	CASE 1 : 
//	INSERTION AT START OF LIST
//   
   
   
#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};
int main(){
	Node* node1=new Node(9);
	Node* node2=new Node(5);
	Node* node3=new Node(2);
	Node* node4=new Node(7);
	Node* node5=new Node(12);
	
	
	Node* head=node1;
	head->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=NULL;
	cout<<endl<<"printing the original linked listtt : "<<endl;
	
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	
	cout<<endl<<"lets sort this :"<<endl;
	
	Node* end = NULL; 

while (head->next != end) {  
    Node* temp2 = head;
    
    while (temp2->next != end) {  
        if (temp2->data > temp2->next->data) {
            
            int tempv = temp2->data;
            temp2->data = temp2->next->data;
            temp2->next->data = tempv;
        }
        temp2 = temp2->next; 
    }
    end = temp2;  
}


cout<<endl<<"printing the sorted linked list : "<<endl;
	
	Node* temp3=head;
	while(temp3!=NULL){
		cout<<temp3->data<<" -> ";
		temp3=temp3->next;
	}
	cout<<"NULL"<<endl;
	
	
	
	cout<<endl<<"now lets search for number 7 : ";
	int n=7;
	Node*temp4=head;
	while(temp4->next!=NULL){
		if(temp4->data==7){
			cout<<"number found !";
			
		}
		temp4=temp4->next;
	}
}





