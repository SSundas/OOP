#include<iostream>
using namespace std;
class classy
{
	private:
		int a;
	public:
		void in()
	{
		cout<<"Enter Value\n";
		cin>>a;
	}


void out()
{
	cout<<a;
}
};

int main()
{
	classy obj,obj1;
	
	obj.in();
	obj.out();
	
	obj1.in();
	obj1.out();
}
