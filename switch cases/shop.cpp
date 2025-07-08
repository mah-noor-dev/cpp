#include <iostream>
using namespace std ;
int main (){
int a,c;
int b;
cout <<" menu for selection of snacks : "<<endl<<endl;

cout << "============================="<<endl<<endl;
cout << "1 . === lays 50 rupess."<<endl<<endl;
cout << "============================="<<endl<<endl;

cout << "2 . === lays 40 rupess."<<endl<<endl;
cout << "============================="<<endl<<endl;
cout << "3 . === lays 30 rupess."<<endl<<endl;
cout << "============================="<<endl<<endl;
cout << "4 . === lays 100 rupess."<<endl<<endl;
cout << "============================="<<endl<<endl;

cout << "5 . === lays 200 rupess."<<endl<<endl;
cout<< " what do you want : ";
cin>>a;
cout << " wise decision ! may i have your money";
cin >> b;

switch (a){
	case 1:{
		cout << " lays 50 "<<endl;
		cout << b-50<<"rupees  in return ."<<endl;
		cout << " happy to serve you . come back soon !";
		break;
	}
	case 2 :{
		cout << " lays 40 ";
			cout << b-40<<"rupees  in return ."<<endl;
		cout << " happy to serve you . come back soon !";
		break;
	}
	case 3 :{
		cout << " lays 30 ";
			cout << b-30<<"rupees  in return ."<<endl;
		cout << " happy to serve you . come back soon !";
		break;
	}case 4 :{
		cout << " lays 100 ";
			cout << b-100<<"rupees  in return ."<<endl;
		cout << " happy to serve you . come back soon !";
		break;
	}case 5 :{
		cout << " lays 200 ";
			cout << b-200<<"rupees  in return ."<<endl;
		cout << " happy to serve you . come back soon !";
		break;
	}
}


return 0;
}

