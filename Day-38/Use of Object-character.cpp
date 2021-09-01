#include<iostream>
using namespace std;

class class2
{
	private:
		char s;
	
	public:
		void in()
		
		{
			cout<<"Enter a Character\n";
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
	class2  myobject;
	myobject.in();
	myobject.out();
}
