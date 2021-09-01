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


class class2
{
	private:
		char s;
	
	public:
		void in()
		
		{
			cout<<"\n\nEnter a Character\n";
			cin>>s;
			}
			
		void out()
		{
			if(((s>='a')&&(s<='z'))||((s>='A')&&(s<='Z')))
				{
					cout<<"ALPHABET";
				}
				
				else if((s>='0')&&(s<='9'))
				{
					cout<<"DIGIT";
				}
				
				
				else
				{
				cout<<"SYMBOL";
				}
			}	
};


int main()
{
	class1 myobj1;
	class2 myobj2;
	
	myobj1.in();
	myobj1.out();
	
	myobj2.in();
	myobj2.out();
	
	

}
