//q1
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={5,2,9,1,5,6};
//	int n=6;
//	
//	cout<<"your array is : "<<endl;
//	for(int i=0;i<=5;i++){
//		cout<<"arr ["<<i<<" ]  : "<<arr[i]<<endl;
//		
//	}
//	cout<<"lets sort this array : "<<endl;
//	
//	for(int i=0;i<6;i++){
//		for(int j=0;j<5-i;j++){
//			if(arr[j]>arr[j+1]){
//				int temp;
//				temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
//	cout<<"now the sorted array is : "<<endl;
//	for(int i=0;i<=5;i++){
//		cout<<"arr ["<<i<<" ]  : "<<arr[i]<<endl;
//		
//	}
//	cout<<"lets do binary search on it : "<<endl;
//	int s=0;
//	int e=5;
//	int id=-1;
//	while(s<=e){
//		int mid=(s+e)/2;
//		if(arr[mid]==n){
//			id=mid;
//			break;
//		}
//		if(n>arr[mid]){
//			s=mid+1;
//		}
//		else{
//			e=mid-1;
//		}
//	}
//	
//	if(id==-1){
//		cout<<"you number 6 wasnt found in array !";
//		}
//	else{
//		cout<<"your number 6 found at "<<id<<" position of array "<<endl;
//	}
//}

//q2
//#include <iostream>
//using namespace std;
//
//int main() {
//    string exp = "56+34-12";
//    string numbers[10];  // Array to store extracted numbers
//    char operators[10];  // Array to store extracted operators
//    int numIndex = 0, opIndex = 0;  // Counters
//    string num = "";  
//
//    // **Step 1: Extract numbers and operators**
//    for (int i = 0; i < exp.length(); i++) {
//        if (isdigit(exp[i])) {
//            num += exp[i];  // Collect digits into num
//        } else {
//            numbers[numIndex++] = num;  // Store the complete number
//            num = "";  // Reset for next number
//            operators[opIndex++] = exp[i];  // Store the operator
//        }
//    }
//    numbers[numIndex++] = num;  // Store the last number
//
//    // **Step 2: Reverse Alternate Numbers**
//    for (int i = 0; i < numIndex; i += 2) {  
//        int len = numbers[i].length();
//        for (int j = 0; j < len / 2; j++) {
//            swap(numbers[i][j], numbers[i][len - j - 1]);  // Swap first & last, second & second last, etc.
//        }
//    }
//
//    // **Step 3: Rebuild Expression**
//    string result = "";
//    for (int i = 0; i < numIndex; i++) {
//        result += numbers[i];  
//        if (i < opIndex) result += operators[i];  // Add operator if exists
//    }
//
//    cout << "Output: " << result << endl;
//    return 0;
//}

//q3

#include <iostream>
using namespace std;

int main() {
    string sentence = "skcatS are yrev useful";
    string words[10]; 
    string spaces[10]; 
    int wordIndex = 0, spaceIndex = 0;
    string word = "";
    string space = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i]; 
            if (!space.empty()) {
                spaces[spaceIndex++] = space;  
                space = ""; 
            }
        } else {
            words[wordIndex++] = word;  
            word = "";  
            space += " ";  
        }
    }
    words[wordIndex++] = word; 
    for (int i = 0; i < wordIndex; i += 2) {  
        int len = words[i].length();
        for (int j = 0; j < len / 2; j++) {
            swap(words[i][j], words[i][len - j - 1]);
        }
    }
    string result = words[0];
    for (int i = 0; i < spaceIndex; i++) {
        result += spaces[i] + words[i + 1];  
    }
    cout << "Output: " << result << endl;
    return 0;
}


