#include<iostream>
using namespace std;

class Calculation {
	public:
		void add()
		{
			int a=1;
		 	int b=2;
			cout<<"Add two integers="<<a+b<<endl<<endl;
		}
};

class Sum:public Calculation {
	public:
		void add()
		{
		int a=1;
		int b=2;
		int c=3;
		cout<<"Add three integers="<<a+b+c;
	}
		
};

int main()
{
	Calculation p;
	p.add();
	Sum q;
	q.add();
}
