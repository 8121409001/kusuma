#include<iostream>
using namespace std;
void welcome(int a ,int b)
{
	int add,sub,mul,mod;
	float div;
	cout<<"add"<<a+b;
	cout<<"sub"<<a-b;
	cout<<"mul"<<a*b;
	cout<<"div"<<a/b;
	cout<<"mod"<<a%b;
}
int main()
{
	int a=5,b=4;
	welcome(5,4);
	return 0;
}
