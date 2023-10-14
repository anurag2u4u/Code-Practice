#include <iostream>
using namespace std;
int main(){
	int x=0,y=0;
	char choice;
	
	cout<<"enter the choice "<<endl;
	
	cin>>choice;
	
	
	switch(choice){
		case 'L':
			cout<<--x;
			break;
			
		case 'R':
			cout<<++x;
			break; 
			
		case 'U':
			cout<<++y;
        break;
					
		case 'D':
			cout<<--y;
		break;
		
		default:
			cout<<"invalid choice "<<endl;
	}
	return 0;
}
