//							stactic implementation ( array k through bas)

//#include<iostream>
//using namespace std;
//int mystack[100];
//int size=100;
//int t=-1;
//bool isfull(){
//	return t==size-1;
//}
//bool isempty(){
//	return t==-1;
//}
//
//void push(int val){
//	if(isfull()){
//		cout<<"stack is already full . "<<endl<<"stack overflow"<<endl;
//	}
//	else{
//		t++;
//		mystack[t]=val;
//		cout<<"value : "<<val<<" pushed in the stack .";
//	}
//}
//void pop(){
//	if(isempty()){
//		cout<<"stack is empty "<<endl<<" stack underflow"<<endl;
//	}
//	else{
//		cout<<"the top element "<<mystack[t]<<" has been removed from stack "<<endl;
//		t--;
//	}
//}
//void peek(){
//	if(isempty()){
//		cout<<"stack is empty"<<endl;
//		
//	}
//	else{
//		cout<<"top element is : "<<mystack[t]<<endl;
//	}
//}

//void display(){
//	for(int i=t;i>=0;i--){
//		cout<<mystack[i]<<endl;
//	}
//}
//void remove(int value){
//	if(isempty()){
//		cout<<"stack is empty ,"<<endl;
//	}
//	else{
//		int index=-1;
//		// apko index dekhna na us no ka jaahan woh pra hy stack men , 
//		for(int i=0;i<t;i++){
//			if(mystack[i]==value){
//				index=i;
//			}
//		}
//		// incase ab yahan koi if statisfy ni hoa , index men -1 rhy ga , mtlb element mila ni
//		if(index==-1){
//			cout<<"your element not found in stack "<<endl;
//		}
//		else{
//				for(int i=index;i<t;i++){
//			mystack[i]=mystack[i+1];
//		}
//		t--;
//		}
//		
//		// ab index ly lia , ab us element ko remove krna , or baki sab ko aik aik place neechy krna hy 
//	
//		
//	}
//}
//int main(){
//	 int choice;
//       int value;
//       int value2;
//	do {
//        cout << "\nStack Operations\n";
//        cout << "1. Push\n";
//        cout << "2. Pop\n";
//        cout << "3. Peek\n";
//        cout << "4. Display\n";
//          cout << "5. remove \n";
//        cout << "6. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                cout << "Enter value to push: ";
//                cin >> value;
//                push(value);
//                break;
//            case 2:
//                pop();
//                break;
//            case 3:
//                peek();
//                break;
//            case 4:
//                display();
//                break;
//            case 5:
//            	cout << "Enter value to remove ";
//                cin >> value2;
//            	remove(value2);
//            	break;
//            case 6:
//                cout << "Exiting...\n";
//                break;
//            default:
//                cout << "Invalid choice! Please try again.\n";
//        }
//    } while (choice != 6);
//			
//			
//	}
//
//
//

									//case scenario

//#include<iostream>
//using namespace std;
//
//int stack[100];  // To store transaction amounts (positive for deposit, negative for withdrawal)
//int size = 100;
//int t = -1;
//int balance = 0;  // Cash balance to track total money
//
//bool isfull() {
//    return t == size - 1;
//}
//
//bool isempty() {
//    return t == -1;
//}
//
//void push(int val) {
//    if (isfull()) {
//        cout << "Stack is full, cannot perform transaction.\n";
//    } else {
//        t++;
//        stack[t] = val;
//        balance += val;  // Update the balance after each transaction
//        cout << "Transaction of " << val << " has been recorded.\n";
//    }
//}
//
//void pop() {
//    if (isempty()) {
//        cout << "No transactions to undo.\n";
//    } else {
//        balance -= stack[t];  // Undo the transaction by subtracting from the balance
//        cout << "Transaction of " << stack[t] << " has been undone.\n";
//        t--;
//    }
//}
//
//void peek() {
//    if (isempty()) {
//        cout << "No transactions recorded.\n";
//    } else {
//        cout << "Last transaction: " << stack[t] << endl;
//    }
//}
//
//void display() {
//    if (isempty()) {
//        cout << "No transactions recorded.\n";
//    } else {
//        cout << "Transaction History: \n";
//        for (int i = t; i >= 0; i--) {
//            cout << "Transaction " << i + 1 << ": " << stack[i] << endl;
//        }
//    }
//}
//
//void show_balance() {
//    cout << "Current balance: " << balance << endl;  // Show the current total balance
//}
//
//int main() {
//    int choice, amount;
//
//    do {
//        cout << "\nBanking System Operations\n";
//        cout << "1. Deposit\n";
//        cout << "2. Withdraw\n";
//        cout << "3. Undo Last Transaction\n";
//        cout << "4. View Transaction History\n";
//        cout << "5. Show Current Balance\n";
//        cout << "6. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                cout << "Enter amount to deposit: ";
//                cin >> amount;
//                push(amount);  // Deposit is a positive transaction
//                break;
//            case 2:
//                cout << "Enter amount to withdraw: ";
//                cin >> amount;
//                if (amount > balance) {
//                    cout << "Insufficient funds to withdraw " << amount << ". Current balance: " << balance << endl;
//                } else {
//                    push(-amount);  // Withdrawal is a negative transaction
//                }
//                break;
//            case 3:
//                pop();  // Undo last transaction
//                break;
//            case 4:
//                display();  // View transaction history
//                break;
//            case 5:
//                show_balance();  // Show current balance
//                break;
//            case 6:
//                cout << "Exiting the system...\n";
//                break;
//            default:
//                cout << "Invalid choice! Please try again.\n";
//        }
//    } while (choice != 6);
//
//    return 0;
//}


