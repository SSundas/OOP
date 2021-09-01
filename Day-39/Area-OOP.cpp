#include<iostream>
using namespace std;

class Me
{
	public:
		dream()
		{
			int lenght, width, area;
			cout<<"Enter Lenght and Width\n";
			cin>>lenght>>width;
			area=lenght*width;
		
			cout<<"Result="<<area;
		}
};

int main()
{
	Me obj;
	obj.dream();
}
