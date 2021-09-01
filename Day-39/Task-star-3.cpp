#include<iostream>
using namespace std;
class star
{

	public:
	star() 
	{
		int a, b;
		for(a=1; a<=10; a++)
		{
			for(b=1; b<=a; b++)
			{
			cout<<b;
			}
			cout<<endl;
			
		}
		 }    				
		
};

int main()
{
	star obj;
}









