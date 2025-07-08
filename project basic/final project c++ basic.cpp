#include<iostream>
#include<string>
using namespace std;
const int maxc=50;
string name[maxc];
string phonenum[maxc];
string category[maxc];
int currentc=0;
	int num=1;
void addc(){

	do{
	
	if(currentc>=50){
		cout<<" sorry bro ! contact list is full ."<<endl;
		cout<<" you might delete unnecessary contact to add more ."<<endl;
	}
	cout<<"enter name :"<<endl;
	cin>>name[currentc];
	cout<<endl;
	cout<<"enter phone number :"<<endl;
	cin>>phonenum[currentc];
	cout<<endl;
	cout<<"enter categories i.e 1,2,3..."<<endl;
	cin>>category[currentc];
	cout<<endl;
	currentc++;
	cout<<"    ----- CONTACT HAS BEEN ADDED-----"<<endl<<endl;
	cout<<"Enter 0 to return to Main Menu      OR     Press any number to Add another contact ";
	cin>>num;
}while(num!=0);
}


void checkc(){
	do{
	
	string checkname;
	cout<<"enter exact name of your contact to look for: ";
	cout<<endl;
	cin>>checkname;
	int matchc=0;
	for(int i=0;i<=currentc;i++){
		if(name[i]==checkname){
			cout<<"name :"<<name[i]<<endl;
			cout<<"phone number :"<<phonenum[i]<<endl;
			cout<<"category :  "<<category[i]<<endl;
			matchc++;
		}
	
	}
	if(matchc==0){
		cout<<" contact not found . Sorry!"<<endl;
	}
	cout<<"Enter 0 to return to Main Menu      OR     Press any number to check another contact ";
	cin>>num;
}while(num!=0);
}


void modifyc(){
	do{
	
	string mname;
//	int matchm=0;
	cout<<"enter name of contact to modify.:";
	cin>>mname;
	bool found=false;
	for(int i=0;i<=currentc;i++){
		if(mname==name[i]){
			cout<<"contact found "<<endl;
		found=true;
			cout<<"enter new name of your contact :";
			cin>>name[i];
			cout<<"enter new phone number of your contact.";
			cin>>phonenum[i];
			cout<<"enter new category of your contact :";
			cin>>category[i];
			cout<<" ------CONTACT HAS BEEN MODIFIED---------"<<endl;
			
		
	}

}
if(found==false){
	cout<<"contact not found ."<<endl;
}

/*for(int i=0;i<=currentc;i++){

		if(mname!=name[i]){
		cout<<"not found contact.";
	}
}
	*/		
			cout<<"Enter 0 to return to Main Menu      OR    Press any number to modify another contact ";
	cin>>num;
			
		
	}
		while(num!=0);
}


void repcall(){
	do{
	
	string namec;
	cout<<"enter contact name to reply to their call :"<<endl;
	cin>>namec;
	bool founda=false;
	for(int i=0;i<=currentc;i++){
		if(name[i]==namec){
				founda=true;
				cout<<" you have missed some calls from    "<<name[i]<<endl;
				cout<<"calling     "<<name[i]<<"......"<<endl;
				cout<<"they didnt picked up.!"<<endl<<endl;
		}
	
		
	}
	if(founda==false){
		cout<<"contact not found .!";
	}
	cout<<"Enter 0 to return to Main Menu      OR    Press any number to reply calls of another contact ";
	cin>>num;
	
}while(num!=0);
}


void repmsg(){
	string reply;
	do{
	
	string namec;
	cout<<"enter contact name to reply to their msg :"<<endl;
	cin>>namec;
	bool founda=false;
	for(int i=0;i<=currentc;i++){
		if(name[i]==namec){
				founda=true;
				cout<<" you have received  some msgs from    "<<name[i]<<endl;
				cout<<name[i]<<":Hello there! long time no see haan?  "<<endl;
				cout<<"reply to their messege:"<<endl;
				cin.ignore();
	getline (cin,reply);
		//	cin>>reply;
			cout<<" you :"<<reply<<endl;
			cout<<" reply has been sent ! ."<<endl;
		//	*/
		}
	
		
	}
	if(founda==false){
		cout<<"contact not found .!";
	}
	cout<<"Enter 0 to return to Main Menu      OR     Press any number to reply msgs of another contact ";
	cin>>num;
	
}while(num!=0);
}

void chat(){
	string msg;
	string nameq;
	cout<<"enter contact name to chat with:";
	cin>>nameq;
	bool foundf=false;
	for(int i=0;i<=currentc;i++){
		if(name[i]==nameq){
			foundf=true;
			cout<<" chat box with   :  "<<nameq<<endl;
		
	}
}
			do {
				cout<<"enter your msg : ";
				cin.ignore();
			getline(cin,msg);
			cout<<endl;
			 if (msg == "hi") {
        cout <<nameq<<" :"<< "Hello there!" << endl;
    } else if (msg == "hello") {
        cout << "Hi! " << endl;
    }
	 else if (msg == "salam") {
        cout <<nameq<<" :"<< "Wasalam! " << endl;
    }
	else if (msg == "how are you") {
        cout <<nameq<<" :"<< "i am doing great . what about you ?" << endl;
    }
	else if (msg == "kaisi ho"|| msg == "kaisy ho") {
        cout <<nameq<<" :"<< "i am doing great . what about you ?" << endl;
    } else if (msg == "i am fine"|| msg == "i am good") {
        cout <<nameq<<" :"<< "good  to know that . " << endl;
    }else {
        cout << "message has been sent . wait for response. they might be busy" << endl;
    }
    	cout<<endl<<endl<<"Enter 0 to return to Main Menu      OR     Press any number to send msgs  "<<endl<<endl;;
	cin>>num;
    
		}
	
	while(num!=0);
	
}


/*
   void delc(){
	string named;
	int delco=0;
	bool foundd=false;
	do{
	cout<<"enter name of contact to delete :";
	cin>>named;
	for(int i=0;i<=currentc;i++){
		if(name[i]==named){
			foundd=true;
			delco=i;
		
			break;
		}
	}
	
if(foundd){
			for(int i=delco;i<currentc-1;i++){
				name[i]==name[i+1];
				 phonenum[i]=phonenum[i+1];
                 category[i]=category[i+1];	
			}
			currentc--;
		}
		if(foundd==false){
			cout<<"contact not found ! sorry .";
		}
	
	cout<<endl<<endl<<"Enter 0 to return to Main Menu or /n Press any number to send msgs  "<<endl<<endl;;
	cin>>num;
}while(num!=0);
}

*/
void delc(){
	string delp;
do{
	cout<<"enter name of contact you want to delete :";
	cin>>delp;
	bool foundq=false;
	for(int i=0;i<=currentc;i++){

	if(name[i]==delp){
		foundq=true;
		for(int j=i;j<=currentc;j++){
			name[j]=name[j+1];
			phonenum[j]=phonenum[j+1];
			category[j]=category[j+1];
			
			
		}
		currentc--;
		cout<<endl<<" contact deleted successfully !"<<endl;
	}
	}
	
	if(foundq==false){
		cout<<"contact not found ";
	}
		cout<<endl<<endl<<"Enter 0 to return to Main Menu      OR    Press any number to send msgs  "<<endl<<endl;;
	cin>>num;
	
}while (num!=0);
}




void PrintContact(){
	
	for(int i=0;i<currentc;i++){
		cout<<endl<<" "<<i+1<<" :-"<<" Name   :  "<<name[i]<<endl<<endl;
			cout<<" "<<i+1<<" :-"<<" Phone  :   "<<phonenum[i]<<endl<<endl;
				cout<<" "<<i+1<<" :-"<<" category :   "<<category[i]<<endl<<endl;
				cout<<endl<<"--------------------------------------------";
				cout<<endl;
	}
}


void callc(){
	do{
	
	string namef;
	cout<<"enter name of contact you want to call :";
	cin>>namef;
	string p;
	bool foundp=false;
	for(int i=0;i<=currentc;i++){
		if(name[i]==namef){
			foundp=true;
			cout<<" calling  "<<namef<<"..........."<<endl;
			cout<<"..............-------"<<endl<<endl<<endl<<endl;
			cout<<" they hanged up ! "<<endl<<"THEY MIGHT BE BUSY  ";
			cout<<" Msg received from "<<namef<<endl;
			cout<<namef<<" :    "<<" hi sorry .i'll call you later."<<endl;
		
			
		}
		
	}
	if(foundp==false){
		cout<<"contact not found !"<<endl;
	}
		cout<<endl<<endl<<"enter your msg :"<<endl;
		cin.ignore();
			getline(cin,p);
			cout<<" reply sent .";
	cout<<endl<<endl<<"Enter 0 to return to Main Menu      OR       Press any number to call someone else  "<<endl<<endl;;
	cin>>num;
	
}while(num!=0);
}

int main(){
	int choice;
	string user;
	cout<<" kindly enter your first  name : ";
	cin.ignore();
	getline(cin,user);
	cout<<"------------------------------------------"<<endl;
		cout<<"------  WELCOME & SALAM !"<<user<<"   -----------"<<endl<<endl;
		cout<<"--------------------------------------"<<endl;
	while(choice!=10){

  cout << "-------Contact Management System--------" << endl;
       cout << "1. Add Contact" << endl;
        cout << "2. Check Contact" << endl;
        cout << "3. Modify Contact" << endl;
        cout << "4. Delete Contact" << endl;
      cout << "5. Call Contact" << endl;
        cout << "6. chat with Contact" << endl;
        cout << "7. Reply to Message" << endl;
        cout << "8. Reply to Call" << endl;
        cout << "9. Contact List" << endl;
       cout << "10. Exit" << endl;
        


cout<<"enter your choice : ";
cin>>choice;
switch (choice){
	case 1:{
		addc();
		break;
	}
	case 2:{
		checkc();
		break;
	}
	case 3:{
		modifyc();
		break;
	}
	case 5:{
		callc();
		break;
	}
	case 4:{
		delc();
		break;
	}
	case 6:{
		chat();
		break;
	}
	case 7:{
		repmsg();
		break;
	}
	case 8:{
		repcall();
		break;
	}
	case 9:{
	PrintContact();
		break;
	}
	case 10:{
		cout<<" EXITING CONTACT MANAGMENT SYSTEM!  "<<endl<<".........................."<<endl;;
		cout<<" Have a good day ! "<<user;
		break;
	}
	default:{
		cout<<"invalid choice ! please enter any number choice from 1 to 9."<<endl<<"THANKU!"<<endl;
		break;
	}
}
}


return 0;
}
