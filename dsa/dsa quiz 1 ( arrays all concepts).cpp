#include<iostream>
using namespace std;
int main(){
	
	
//	insertion in array:


//		! ! case 1 : 
//		inserting at random place 



//	int arr[10]={1,5,8,12};
//	int number,index,number2,number3;
//	int size=4;
//	cout<<"array is : "<<endl;
//	for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	cout<<"enter number to add in this array : ";
//	cin>>number;
//	cout<<endl<<"enter the index you want it to be on , 0 is starting index ";
//	cin>>index;	
//	for(int i=size;i>index;i--){
//		arr[i]=arr[i-1];	
//	}
//	arr[index]=number;
//	size++;	
//	cout<<"array now after inserting at random index is  : "<<endl;
//	for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	


//    !! CASE 2 : 
//    INSERTING AT END OF ARRAY :



//	cout<<"now enter a number to insert at end : ";
//	cin>>number2;
//	arr[size]=number2;
//	size++;
//	cout<<"array now after inserting at end is  : "<<endl;
//	for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}



//   !~ CASE 3 : 
//     INSERTING AT START OF ARRAY :
//	cout<<endl<<"now enter a number to add at the very start : "<<endl;
//	cin>>number3;
//	for(int i=size;i>0;i--){
//		arr[i]=arr[i-1];	
//	}
//	arr[0]=number3;
//	size++;
//		cout<<"array now after inserting at start is  : "<<endl;
//	for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}




// DELETING ELEMENTS:



//	
//int arr[10]={1,2,3,4,5,7,22,11};
//int size=8;
//cout<<"array is : "<<endl;
//for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	


//CASE 1
//DELETING FROM END
 	
 	
 	
//	cout<<"deleting end element: "<<endl;
//	
//size--;
//	for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	
//	

//CASE 1
//DELETING FROM START
 	
 	
 	
//	cout<<"now deleting an element first one : "<<endl;
//	for(int i=0;i<size;i++){
//		arr[i]=arr[i+1];
//	}
//	size--;
//	cout<<"array after deleting first element : "<<endl;
//	cout<<"array is : "<<endl;
//for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	


//CASE 1
//DELETING FROM RANDOM INDEX:
 	
 	
 	
//	cout<<endl<<"now deleting random index : "<<endl;
//	cout<<"enter index you want to delete from the available ones : ";
//	int index;
//	cin>>index;
//	for(int i=index;i<size;i++){
//		arr[i]=arr[i+1];
//	}` `
//	size--;
//	cout<<"array after deleting from random index : "<<endl;
//	cout<<"array is : "<<endl;
//for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//	



//TRAVERSE:
//SIMPLE PRINTING BAS 



//cout<<"array is : "<<endl;
//for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}


//UPDATION : 
//


//int arr[10]={1,2,3,4};
//int size=4;
//arr[0]=5;
//for(int i=0;i<size;i++){
//	cout<<endl<<"arr["<<i<<"] : "<<arr[i]<<endl;
//}


//searching : 
//
//
//linear search : 
//
//int arr[10]={1,2,3,4,5,6,7};
//int size=7;
//cout<<endl<<"array is : "<<endl;
//for(int i=0;i<size;i++){
//		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//	}
//cout<<"enter number to search for "<<endl;
//int number;
//cin>>number;
//int index=-1;
//
//for(int i=0;i<size;i++){
//	if(arr[i]==number){
//		index=i;
//	}
//}
//if(index==-1){
//	cout<<"number not found !"<<endl;
//}
//else{
//	cout<<"number "<<number <<"found at index number of array : "<<index<<endl<<endl<<endl;
//}
//
//
//
////binary search
//
//
//
//int ar[10]={5,3,2,1,8,3};
//int si=6;
//for(int i=0;i<si;i++){
//	cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
//}
//cout<<"enter number to search for in this array : "<<endl;
//int num;
//int ind=-1;
//cin>>num;
//int s=0;
//int e=5;
//while(s<=e){
//	int mid=(s+e)/2;
//	if(num==ar[mid]){
//		ind=mid;
//		break;
//	}
//	if(num>arr[mid]){
//		s=mid+1;
//	}
//	else{
//		e=mid-1;
//	}
//}
//
//if(ind==-1){
//	cout<<"number not found !"<<endl;
//}
//else{
//		cout<<"number "<<num<<endl<<endl<<endl;
//}

sorting:
	int arr[10]={10,9,8,7,6};
	int size=5;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<endl<<"array is : "<<endl;
for(int i=0;i<size;i++){
		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
	}
	
}
