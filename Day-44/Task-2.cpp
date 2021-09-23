#include<iostream>
using namespace std;

class Resturant {
	public:
		void dispatch()
		{
			cout<<"Dilivary of dishes\n\n";
		}
};

class House1:public Resturant {
	public:
		void dispatch()
		{
			cout<<"Fried Fish\n\n";
		}
};

class House2:public Resturant {
	public:
		void dispatch()
		{
			cout<<"Vegi Rce, Noodles,\n\n";
		}
};

class House3:public Resturant {
	public:
		void dispatch()
		{
			cout<<"Kimchi, Mocchi, Pepsi\n\n";
		}
};

int main()
{
	Resturant a;
	a.dispatch();
	House1 b;
	b.dispatch();
	House2 c;
	c.dispatch();
	House3 d;
	d.dispatch();
	
}
