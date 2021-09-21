#include<iostream>
using namespace std;

class Automobile {
	public:
		void drive()
		{
			cout<<"I drive this car to school\n";
		}
};

class Ford{
	public:
		void breaks()
			{
				cout<<"Car breaks are use to stop the car\n";
			}
};

class Aqua:public Automobile, public Ford
{
	public:
		void faimlycar()
			{
				cout<<"This car is use for daily course\n";
			}
};

int main()
{
	Aqua a;
	a.faimlycar();
	a.breaks();
	a.drive();
}
