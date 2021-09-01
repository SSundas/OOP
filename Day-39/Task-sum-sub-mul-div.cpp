#include<iostream>
using namespace std;
class r
{
	private:
		int c, d;
	
	public:
	r(int p, int q)
	{
	c=p;
	d=q;
		}	
		
void sum(void)
{
cout<<"Addition="<<c+d;
		}	
		
void sub(void)
{
cout<<"\n\nSubtraction="<<c-d;
		}
		
void mul(void)
{
cout<<"\n\nMultiplication="<<c*d;
		}
		
void di(void)
{
cout<<"\n\nDivision="<<c/d;
		}			
		
};

int main()
{
	int a,b;
	cout<<"Enter two values\n";
	cin>>a>>b;
	
	r object(a,b);
	object.sum();
	object.sub();
	object.mul();
	object.di();
}

