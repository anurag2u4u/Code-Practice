#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
	
	//selection control structure : if else if else if statemant
	int age;
	cout<<"Tell me your age? "<<endl;
	cin>>age;
//	 
//	if((age<18)&&(age>0)){
//		cout<<"YOU CANNOT COME TO THE PARTY :( "<<endl;
//	} 
//	else if(age==18){
//		cout<<"YOU ARE KID YOU HAVE TO COME WITH YOUR PARENT'S PERMISSION "<<endl;
//	}
//	else if(age<1){
//		cout<<"kya re thik se paida bhi to ho ja"<<endl;
//	}
//		else {
//		cout<<" MOST WELCOME TO THE PARTY  :) "<<endl;
//	}




// 2.*******SELECTION CONTROL STRUCTURES****************
switch (age)

{
case 18:	
	cout<<"You are 18 "<<endl;
	break;
	
case 22:
    cout<<"you are 22 "<<endl;
     break;	
     
case 4:
	cout<<"you are 4 "<<endl;
	break;
	 
default:
cout<<"no special cases "<<endl;
	 
}

	return 0;
}
