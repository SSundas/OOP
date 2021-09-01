#include<iostream>

int sum(int,int);
int sum(int,int,int);

using namespace std;

int main()

{
	cout<<"Sum of two numbers="<<sum(4,5);
	cout<<"\n\nSum of three numbers="<<sum(5,5,5);
	
}

int sum(int a, int b)
{
	return(a+b);
}

int sum(int x, int y, int z)

{
	return(x+y+z);
}

