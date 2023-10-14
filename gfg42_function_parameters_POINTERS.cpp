//#include<iostream>
//using namespace std;
//
//void fun(int*p)
//{
//	*p=*p+10;
//}
//int main(){
//	int x=10;
//	fun(&x);
//	cout<<x;
//	return 0;
//}


#include<iostream>
using namespace std;

void fun(string*p)
{
	cout<<*p;
}

int main(){
	string x="anurag";
	fun(&x);
	return 0;
}
