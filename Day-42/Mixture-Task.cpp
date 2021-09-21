#include<iostream>
using namespace std;

class Cosmetics {
	public:
		void beauty()
		{
			cout<<"G\n\n";
		}
};

class Lipstick {
	public:
		void brown()
		{
			cout<<"B\n\n";
		}
};

class Eyeliner {
	public:
		void black()
		{
			cout<<"E\n\n";
		}
};

class Lipgloss{
	public:
		void pink()
		{
			cout<<"A\n\n";
		}
};

class Lipliner:public Cosmetics, public Lipstick, public Lipgloss
{
	public:
		void red()
			{
				cout<<"C\n\n";
			}
};

class Maskara{
	public:
		void brush()
			{
				cout<<"D\n\n";
			}
};

class Eyeshades:public Cosmetics, public Eyeliner, public Maskara
{
	public:
		void multi()
		{
			cout<<"F\n\n";
		}
};

int main()
{
	Lipliner a;
	a.beauty();
	a.brown();
	a.pink();
	a.red();
	
	Eyeshades b;
	b.beauty();
	b.black();
	b.multi();
	b.brush();
}
