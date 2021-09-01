#include<iostream>

using namespace std;
class num

{
public:
	void in()
	
		{
			cout<<"No\t\t Square\t\t Cube\n";
			cout<<"______________________________\n";
			for(int r=0; r<=5; r++)
						
			{
				cout<<r<<"\t"<<r*r<<"\t\t"<<r*r*r<<"\n";
			}
		}
};

int main()
{
	num object;
	object.in();
}
