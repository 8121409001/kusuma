#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter cube of a number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n==i*i*i)
		cout<<i;
	}
}
