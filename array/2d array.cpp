#include<iostream>
using namespace std;
int main()
{
	
	int i,j,s,e,mid,id=-1;


	int arr[2][2];
	for(i=0;i<=1;i++)
	{for(j=0;j<=1;j++)
	{cout<<"enter numbers in matrix";
	cin>>arr[i][j];
	}
	}
	
	for(i=0;i<=1;i++)
	{for(j=0;j<=1;j++){
	

	cout<<arr[i][j]<<" ";
}
	
	cout<<endl;
}
int arra[2];
	
	
	
	for(int q=0;q<=1;q++){
		arra[q]=arr[0][q];
	
	}
	cout<<" arrays first row : ";
	for(int p=0;p<=1;p++){
		cout<<arra[p]<<" ";
	}
	int arrb[2];
	for(int t=0;t<=1;t++){
		arrb[t]=arr[1][t];
	}
	cout<<endl<<" arrays second  row : ";
	for(int p=0;p<=1;p++){
		cout<<arrb[p]<<" ";
	}
	for(int i=0;i<+1;i++){
		for(int j=i+1;j<=1;j++){
			if(arra[i]>arra[i+1]){
				int c;
				c=arra[i];
				arra[i]=arra[i+1];
				arra[i+1]=c;
			}
		}
	}
	cout<<endl<<" second row sorted :";
	for(int i=0;i<=1;i++){
		cout<<arrb[i]<<"   ";
	}
	
	
		for(int i=0;i<+1;i++){
		for(int j=i+1;j<=1;j++){
			if(arrb[i]>arrb[i+1]){
				int c;
				c=arrb[i];
				arrb[i]=arrb[i+1];
				arrb[i+1]=c;
			}
		}
	}
	cout<<endl<<" first row sorted :";
	for(int i=0;i<=1;i++){
		cout<<arrb[i]<<"   ";
	}
	
	
	int sa,ea,n,mida,ida=-1;
	cout<<"enter number to search in first row :";
	cin>>n;
	sa=0;
	ea=1;
	while(sa<=ea){
		mida=(sa+ea)/2;
		if(arra[mida]==n){
			ida=mida;
			break;
		}
		else if(n>arra[mida]){
			sa=mida+1;
		}
		else {
			ea=mida-1;
		}
	}
	if(ida==-1){
		cout<<"not found in fisrt row ";
	}
	else {
		cout<<" found number at index number :"<<ida;
	}
	
	
	
		int sb,eb,nb,midb,idb=-1;
		cout<<"enter number to search for in second row :";
		cin>>nb;
	sb=0;
	eb=1;
	while(sb<=eb){
		midb=(sb+eb)/2;
		if(arrb[midb]==nb){
			idb=midb;
			break;
		}
		else if(nb>arrb[midb]){
			sb=midb+1;
		}
		else {
			eb=midb-1;
		}
	}
	if(idb==-1){
		cout<<"not found in second row ";
	}
	else {
		cout<<" found number at index number :"<<idb;
	}
	

	return 0;
}
