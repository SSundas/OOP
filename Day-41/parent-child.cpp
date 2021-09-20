#include <iostream>
using namespace std;
class Food{
	public:
		string eating="foodie";
		void sweet(){
			cout<<"Healthy people eat healthy food.";
		}
};

class fruits: public Food
{
	public:
	string mangoes="Sweet";	
};

class vegi: public Food
{
	public:
	string potatoes="Sweet-sour";	
};

class chips: public Food
{
	public:
	string lays="Sipcy";	
};

int main()
{
	fruits obj;
	vegi obj1;
	chips obj2; 
	Food obj3;

	cout<< obj.mangoes+"\n" + obj1.potatoes+"\n" + obj2.lays+"\n\n"+obj3.eating+"\n";
	
	Food object;
	object.sweet();

}
