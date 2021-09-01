#include<iostream>
using namespace std;
class des
{
	private:
		int a;
		
	public:
		des()
		{
			cout<<"I AM CONSTRUCTOR\n";
		}
		
		~des()
		{
			cout<<"I AM DESTRUCTOR\n";
		}
};

int main()
{
	des obj;
}
