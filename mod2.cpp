#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int age;
	cout<<"give me your age"<<endl;
	cin>>age;
	
//	if(age<18){
//		cout<<"you cannot come to the party"<<endl;
//	}
//	
//	else if(age==18){
//		cout<<"you have to get the special pass for the party"<<endl;
//	}
//		
//	else{
//		cout<<"you can come to the party"<<endl;
//	}
//	
	switch (age)
	{
		case 18:
			cout<<"your age is 18"<<endl;
		break;
			
		case 22:
		    cout<<"your age is 22"<<endl;
		break;
			
		default:
		    cout<<"no special case"<<endl;
		break;		
	}
	return 0;
}














