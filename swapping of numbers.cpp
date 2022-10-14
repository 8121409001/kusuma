#include<iostream>
using namespace std;
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;y=temp;
	cout<<"after swapping";
	cout<<x<<y;
}
int main()
{
	swap(10,20);
	return 0;
}
