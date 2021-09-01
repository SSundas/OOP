#include<iostream>
using namespace std;

class Me
{
	public:
		dream()
		{
			int a;
			cout<<"Enter No\n";
			cin>>a;
			cout<<"No\t\tSquare\t\tCube\n";
			cout<<"__________________________\n";
			cout<<a<<"\t\t"<<a*a<<"\t\t"<<a*a*a;
		}
};

int main()
{
	Me obj;
	obj.dream();
}
