#include<iostream>
using namespace std;

class Teacher {
	public:
		void degree()
		{
			cout<<"Teacher\n\n";
		}
};

class Science {
	public:
		void qualification()
		{
			cout<<"Science Teacher\n\n";
		}
};

class Maths:public Teacher
{
	public:
		void calculation()
		{
			cout<<"Maths Teacher\n\n";
		}
};

class Biology:public Teacher, public Science
{
	public:
		void drawing()
		{
			cout<<"Biology Teacher\n\n";
		}
};

int main()
{
	Biology c;
	c.degree();
	c.qualification();
	c.drawing();
	
	Maths d;
	d.degree();
	d.calculation();
}


