#include<iostream>
using namespace std;
class abc
{
	private:
		int a;
	
	public:
	abc(int x)
	{
		a=x;
		}	
		
void dis()
{
cout<<a;
		}				
		
};

int main()
{
	abc object(2);
	object.dis();
}












