#include<iostream>
using namespace std;
int main()
{
	int a=11,c=0,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		cout<<a<<" is a prime number";
	}
	else
	{
		cout<<a<<" is not a prime number";
	}
	return 0;
}
