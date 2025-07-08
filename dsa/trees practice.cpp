#include<iostream>
using namespace std;
class Node{
	int data;
	Node* left;
	Node* right;
	Node(int data){
		data=data;
		left=NULL;
		right=NULL;
	}
	
};
Node root=NULL;


void insert(int data){
	Node* temp = new Node(data);
	
	if (root==NULL){
		root=temp;
		return;
	}
	Node* current=root;
	Node* parent=NULL;
	
	while(true){
		parent=current;
		
		if(data<current->data){
			if(current->left=NULL){
				current->left=temp;
			}
			else
			current=current->left;
		}
		else{
			if(current->right=NULL){
				current->right=temp;
			}
			else{
				current=current->right;
			}
		}
	}
}
