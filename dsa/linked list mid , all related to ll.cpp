//				basic linked list creation
//#include<iostream>
//using namespace std;
//class Node{
//public:
//		int data;
//		Node* next;
//	Node(int value){
//		data=value;
//		next=NULL;
//	}
//};
//int main(){
//	Node* node1=new Node(10);
//	Node* node2=new Node(20);
//	Node* node3=new Node(30);
//	Node* node4=new Node(40);
//	
//	
//	node1->next=node2;
//	node2->next=node3;
//	node3->next=node4;
//	
//	Node* head=node1;
//	Node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<"->";
//		temp=temp->next;
//	}
//	cout<<"NULL"<<endl;
//	
//}




//  				insertion 3 cases : 
//#include<iostream>
//using namespace std;
//class Node{
//public:
//		int data;
//		Node* next;
//	Node(int value){
//		data=value;
//		next=NULL;
//	}
//};
//int main(){
//	Node* node1=new Node(10);
//	Node* node2=new Node(20);
//	Node* node3=new Node(30);
//	Node* node4=new Node(40);
//	
//	
//	node1->next=node2;
//	node2->next=node3;
//	node3->next=node4;
//	
//	Node* head=node1;
//	Node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<"->";
//		temp=temp->next;
//	}
//	cout<<"NULL"<<endl;
//	
//	
//	// case 1 at start insertion : 
//	Node* newnode1=new Node(05);
//	newnode1->next=head;
//	head=newnode1;
//	Node* temp2=head;
//	while(temp2!=NULL){
//		cout<<temp2->data<<"->";
//		temp2=temp2->next;
//	}
//	cout<<"NULL"<<endl;
//	
//	
//	// case 2 insert at end 
//	
//	Node* newnode2=new Node(50);
//	Node* temp3=head;
//	while(temp3->next!=NULL){
//		temp3=temp3->next;
//	}
//	temp3->next=newnode2;
//	
//	Node* temp4=head;
//	while(temp4!=NULL){
//		cout<<temp4->data<<"->";
//		temp4=temp4->next;
//	}
//	cout<<"NULL "<<endl;
//	
//	// case 3 insert at random position:
//	cout<<"enter position you want to enter data : "<<endl;
//	int p;
//	cin>>p;
//	Node* temp5=head;
//	Node* newnode3=new Node(70);
//	for(int i=0;i<p-1&& temp5!=NULL;i++){
//		temp5=temp5->next;
//	}
//	newnode3->next=temp5->next;
//	temp5->next=newnode3;
//	
//	Node* temp6=head;
//	while(temp6!=NULL){
//		cout<<temp6->data<<"->";
//		temp6=temp6->next;
//	}
//	cout<<"NULL "<<endl;
//	
//}


			// deletion 3 cases : 

//#include<iostream>
//using namespace std;
//class Node{
//public:
//		int data;
//		Node* next;
//	Node(int value){
//		data=value;
//		next=NULL;
//	}
//};
//int main(){
//	Node* node1=new Node(10);
//	Node* node2=new Node(20);
//	Node* node3=new Node(30);
//	Node* node4=new Node(40);
//	
//	
//	node1->next=node2;
//	node2->next=node3;
//	node3->next=node4;
//	
//	Node* head=node1;
//	Node* temp=head;
//	while(temp!=NULL){
//		cout<<temp->data<<"->";
//		temp=temp->next;
//	}
//	cout<<"NULL"<<endl;
//	
//	// deletion at start : 
//	
//	Node* temp2=head;
//	head=head->next;
//	delete temp2;
//	
//		Node* temp3=head;
//	while(temp3!=NULL){
//		cout<<temp3->data<<"->";
//		temp3=temp3->next;
//	}
//	cout<<"NULL"<<endl;
//	
//	
//	// deletion at end 
//	Node* temp4=head;
//	while(temp4!=NULL && temp4->next->next!=NULL){
//		temp4=temp4->next;
//	}
//	delete temp4->next;
//	temp4->next=NULL;
//	
//	Node* temp5=head;
//	while(temp5!=NULL){
//		cout<<temp5->data<<"->";
//		temp5=temp5->next;
//	}
//	cout<<"NULL"<<endl;
//	
//	// CASE 3 DELETION AT RANDOM PLACE ;
//	
//	
//	int p;
//	cout<<"enter position you want to delete"<<endl;
//	cin>>p;
//	if(p==0){
//		Node* temp6=head;
//		head=head->next;
//		delete temp6;
//	}
//	else{
//		Node* temp7=head;
//		for(int i=0;i<p-1&& temp7->next!=NULL;i++){
//			temp7=temp7->next;
//		}
//		Node* n=temp7->next;
//		temp7->next=temp7->next->next;
//		delete n;
//	}
//		Node* temp8=head;
//	while(temp8!=NULL){
//		cout<<temp8->data<<"->";
//		temp8=temp8->next;
//	}
//	cout<<"NULL"<<endl;
//	
//}



// 				ssorting the linked list : 

#include<iostream>
using namespace std;
class Node{
public:
		int data;
		Node* next;
	Node(int value){
		data=value;
		next=NULL;
	}
};
int main(){
	Node* node1=new Node(2);
	Node* node2=new Node(0);
	Node* node3=new Node(3);
	Node* node4=new Node(5);
	
		Node* node5=new Node(4);
			
	
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
		node4->next=node5;
			
	
	Node* head=node1;
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	
	// sprting 
	
	Node* temp1=head;
	while(temp1!=NULL && temp1->next!=NULL){
		if(temp1->data>temp1->next->data){
			int t=temp1->data;
			temp1->data=temp1->next->data;
			temp1->next->data=t;
		}
		temp1=temp1->next;
	}
	Node* temp2=head;
		while(temp2!=NULL){
		cout<<temp2->data<<"->";
		temp2=temp2->next;
	}
	cout<<"NULL"<<endl;
	
	
	
	
	// reversing the list 
	
	Node* prev=NULL;
	Node* curr=head;
	Node* next=NULL;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
	
	
	Node* temp3=head;
	while(temp3!=NULL){
		
		cout<<temp3->data<<"->";
		temp3=temp3->next;
	}
	cout<<"NULL"<<endl;
}


