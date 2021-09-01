#include<iostream>
using namespace std;
class star
{

	public:
	star() 
	{
		int a, b;
		for(a=1; a<=40; a++)
		{
			for(b=1; b<=a; b++)
			{
			cout<<"*";
			}
			cout<<endl;
			
		}
		 }    				
		
};

int main()
{
	star obj;
}









