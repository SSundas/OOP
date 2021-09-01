#include<iostream>
using namespace std;

class class1
{
	private:
		int sal;
	
	public:
		void in()
		
		{
			cout<<"Enter Your Salary\n";
			cin>>sal;
			}	
			
		void out()
		{
			if(sal<10000)
				{
					sal=sal+200;
				}
				else
				{
					sal=sal+100;
				}
				cout<<"Net Salary="<<sal;
			}	
};

int main()
{
	class1  myobj;
	myobj.in();
	myobj.out();
}
