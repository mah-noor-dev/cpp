#include<iostream>
using namespace std;
class Book{
public:
	int bookid;
	String title;
	Book* leftchild;
	Book* rightchild;
	Book(int value){
		bookid=value;
		leftchild=NULL;
		rightchild=NULL;
	
	}	
};
Node* root=NULL;
void insert(Node*& node,int key){
	if(node==NULL){
		node=new Node(key);
		root=node;
		return;
	}
	if(key<node->data){
		insert(node->left,key);
	}
	else if(key>=node->data){
		insert(node->right,key);
	}
	
}
void search(Node*& node,int key){
	if(node==NULL){
		cout<<"no tree found!";
		return;
	}
	if(node->data==key){
		cout<<"found value ";
	}
	if(key<node->data){
		search(node->left,key);
	}
	else if(key>node->data){
		search(node->right,key);
	}
	else{
		cout<<"not found ";
	}
	
}
void display(Node*& node){
	if(node==NULL){
		cout<<"not found any tree";
	}
	else{
		display(node->left);
		cout<<node->data<<"  ";
		display(node->right);
		
	}
}

int main(){
	insert(root,7);
	insert(root,2);
	insert(root,1);
	insert(root,5);
	
	search(roor,9);
	
	display(root);
}
