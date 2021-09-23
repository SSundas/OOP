#include<iostream>
using namespace std;

class University {
	public:
		void teach()
		{
			cout<<"Everyone teaches something";
		}
};

class CS:public University {
	public:
		void teach()
		{
			cout<<"Teachers of computer science\n\n";
		}
};

class Maths:public University {
	public:
		void teach()
		{
			cout<<"Teachers of maths\n\n";
		}
};

int main()
{
	Maths m;
	m.teach();
	CS c;
	c.teach();
	University u;
	u.teach();
}
