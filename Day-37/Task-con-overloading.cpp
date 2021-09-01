#include<iostream>
using namespace std;
class over
{
	private:
		int a, b;
		
	public:
		over(int x)	
			{
			a=x;
		}
		
		over(int x, int y)
		{
			a=x;
			b=y;
		}
		
		void area(int ch)
		{
			if(ch==1)
			cout<<"AREA="<<3.14*a*a;
			
			else if(ch==2)
			cout<<"AREA="<<a*b;
		}
};

int main()
{
	int c,p,q;
	cout<<"What is area?\n";
	cin>>c;
	if(c==1)
	{
		cout<<"Enter value for circle\n";
		cin>>p;
		over obj(p);
		obj.area(c);
	}
	
	else if(c==2)
	{
		cout<<"Enter value for rectangle\n";
		cin>>p>>q;
		over obj(p,q);
		obj.area(c);
	}

}
