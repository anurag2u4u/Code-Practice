//#include <iostream>
//using namespace std;
//
//int fact(int x){
//		if(x<1){
//		return 1;
//	}
//	x=x*fact(x-1);
//}
//int main(){
//int a=4;
//cout<<fact(a);
//return 0;	
//}


/****************using loops*****************/

#include <iostream>
using namespace std;

int main(){
int x;
int j=1;
cin>>x;
for(int i=1;i<=x;i++){
	j=j*i;
}
cout<<j;


}








