#include<iostream>
using namespace std;
class abcd
{
	private:
		int b;
	
	public:
	abcd(int y)
	{
		b=y;
		}	
		
void area()
{
cout<<"AREA="<<3.14*b*b;
		}				
		
};

int main()
{
	int r;
	cout<<"Enter value of radius\n";
	cin>>r;
	abcd object(2);
	object.area();
}












