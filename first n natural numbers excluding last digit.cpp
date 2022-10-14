#include<iostream>
using namespace std;
class natural
{
	int n,i;
	public:
		void input();
		void display();
};
void natural::input()
{
	cout<<"enter the nth term";
	cin>>n;
}
void natural::display()
{
	for(i=0;i<n;i++)
	cout<<i;
}
int main()
{
	natural k;
	k.input();
	k.display();
	return 0;
}
