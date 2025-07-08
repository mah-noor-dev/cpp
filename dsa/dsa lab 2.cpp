//				////	"""	LINEAR SEARCHING (UNSORTED ARRAY )"""


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,6,2,9,3,10};
//	int index=-1;
//	int value;
//	cout<<"enter value to search for : ";
//	cin>>value;
//	int n=sizeof(arr)/sizeof(arr[0]);
//	for(int i=0;i<n;i++){
//		if(arr[i]==value){
//			index=i;
//		}
//		
//	}
//	
//	if(index==-1){
//		cout<<"array doesnt have that element ! , sorry !";
//		
//	}
//	else{
//		cout<<"number found !";
//		cout<<endl<<arr[index];
//	}
//	cout<<endl<<"array was : "<<endl;
//	for(int i=0;i<n;i++){
//		cout<<endl<<arr[i];
//	}
//	}

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size of array : ";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int value;
	int index=-1;
	
	cout<<"enter value to search for : ";
	cin>>value;
	int low=0;
	int high=n-1;
	while(low<=high){
	
		int mid=(low+high)/2;
		if(value==arr[mid]){
			index=mid;
			break;
		}
		if(value>arr[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(index==-1){
		cout<<"array doesnt have that element ! , sorry !";
		
	}
	else{
		cout<<"number"<<arr[index]<<" found !";
		cout<<endl;
		cout<<"at index number : "<<index;
	}
	cout<<endl<<"array was : "<<endl;
	for(int i=0;i<n;i++){
		cout<<endl<<arr[i];
	}

	
}
