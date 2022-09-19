#include<iostream>
using namespace std;
class P
{
	int x=10;
	public:
		void getdata1()
		{
		
		cout<<" enter x value: "<<x<<endl;
        }
};
class C:public P
{
	int y=5;
	public:
		void getdata()
		{
			cout<<" enter y value:"<<y<<endl;
		}
};
int main()
{
	C  c;
	c.getdata1();
	c.getdata();
	return 0;
	}
