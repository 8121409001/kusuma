#include<iostream>
using namespace std;
int swap(int x,int y)
{
	cout<<"before swapping"<<endl;
	x=x-y;
	x=x+y;
	cout<<"after swapping"<<endl;
	cout<<x<<y;
}
int main()
{
	swap(10,20);
	return 0;
}
