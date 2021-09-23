#include<iostream>
using namespace std;

class Organization {
	public:
		void officeAssistant()
		{
			cout<<"OA 17\n\n";
		}
};

class Dept1:public Organization {
	public:
		void officeAssitant()
		{
			cout<<"OA 14\n\n";
		}
};

class Dept2:public Organization {
	public:
		void officeAssitant()
		{
			cout<<"OA 12\n\n";
		}
};

class Dept3:public Organization {
	public:
		void officeAssitant()
		{
			cout<<"OA 16\n\n";
		}
};

int main()
{
	Organization l;
	l.officeAssistant();
	Dept1 m;
	m.officeAssitant();
	Dept2 n;
	n.officeAssitant();
	Dept3 o;
	o.officeAssitant();
	
}
