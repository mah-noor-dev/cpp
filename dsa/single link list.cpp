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
	Node* node1=new Node(1);
	Node* node2=new Node(2);
	Node* node3=new Node(3);
	Node* node4=new Node(4);
	Node* node5=new Node(5);
	Node* node6=new Node(6);
	
	Node* head=node1;
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=node6;
	node6->next=NULL;
	
	
//	print krwana simple loop temp!=null wali cheez 
Node* temp=head;
while(temp!=NULL){
	cout<<temp->data<<" --> ";
	temp=temp->next;
}
cout<<"NULL";

cout<<endl;

//ab insert at start :

Node* newnode1=new Node(100);
newnode1->next=head;
head=newnode1;

//print kren gy dubara waisi hi , jaisy uper kia tha na , temp use kr k
cout<<endl<<"after insertion at start : "<<endl;

Node* temp2=head;
while(temp2!=NULL){
	cout<<temp2->data<<" --> ";
	temp2=temp2->next;
}
cout<<"NULL";

Node* newnode2=new Node(200);
Node* temp3=head;
while(temp3!=NULL){
	if(temp3->next==NULL){
		temp3->next=newnode2;
		newnode2->next=NULL;
	}
	temp3=temp3->next;
}
cout<<endl<<"after insertion at end: "<<endl;

Node* temp4=head;
while(temp4!=NULL){
	cout<<temp4->data<<" --> ";
	temp4=temp4->next;
}
cout<<"NULL";

Node* newnode3=new Node(300);
Node* temp5=head;
while(temp5->next!=NULL){
	if(temp5->data==3){
		newnode3->next=temp5->next;
		temp5->next=newnode3;
		
	}
	temp5=temp5->next;
}

cout<<endl<<"after insertion at random "<<endl;

Node* temp6=head;
while(temp6!=NULL){
	cout<<temp6->data<<" --> ";
	temp6=temp6->next;
}
cout<<"NULL";

return 0;
	
	
}
