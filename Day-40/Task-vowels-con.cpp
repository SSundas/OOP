#include<iostream>
using namespace std;
class vowel
{
	private:
		char s;
	
	public:
	vowel()
 	{
 	cout<<"Enter a value\n";
	cin>>s;
	
 if(s=='a'||s=='e'||s=='o'||s=='u')
 {
 cout<<"It is vowel\n";
}
else
{
	cout<<"It is Constant";
}				
}
};

int main()
{
	
	vowel object;
}












