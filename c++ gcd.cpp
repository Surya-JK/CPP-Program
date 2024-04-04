#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd,i;
	cout<<"Enter a value : ";
	cin>>a;
	cout<<"Enter b value : ";
	cin>>b;
	do
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
		i++;
	}while(i>0);
	cout<<"GCD = "<<gcd;
	return 0;
	
}
