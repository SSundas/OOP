#include<iostream>
using namespace std;
class rect
{
	private:
		int a, b;
	
	public:
	rect(int x, int y)
	{
	a=x;	b=y;
		}	
		
void area()
{
cout<<"AREA="<<a*b;
		}				
		
};

int main()
{
	int l,w;
	cout<<"Enter value for Lenght and Width\n";
	cin>>l>>w;
	
	rect object(l,w);
	object.area();
}












