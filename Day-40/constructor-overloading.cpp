#include<iostream>
using namespace std;
class over
{
	private:
		int a, b, c, d;
		
	public:
		over(int w, int x)	
		
		{
			a=w;
			b=x;
		}
		over(int w, int x, int y)
		{
			a=w;
			b=x;
			c=y;
		}
		over(int w, int x, int y, int z)
		{
			a=w;
			b=x;
			c=y;
			d=z;
		}
		
		void sum(int ch)
		{
			if(ch==2)
			cout<<"SUM="<<a+b;
			
			else if(ch==3)
			cout<<"SUM="<<a+b+c;
			
			else if(ch==4)
			cout<<"SUM="<<a+b+c+d;
		}
};

int main()
{
	int c,p,q,r,s;
	cout<<"How many numbers you want to add\n";
	cin>>c;
	if(c==2)
	{
		cout<<"Enter two values\n";
		cin>>p>>q;
		over obj(p,q);
		obj.sum(c);
	}
	
	else if(c==3)
	{
		cout<<"Enter three values\n";
		cin>>p>>q>>r;
		over obj(p,q,r);
		obj.sum(c);
	}
	
	else if(c==4)
	{
		cout<<"Enter four values\n";
		cin>>p>>q>>r>>s;
		over obj(p,q,r,s);
		obj.sum(c);
	}
	
	
}
