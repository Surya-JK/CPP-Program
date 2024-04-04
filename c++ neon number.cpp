#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int n,sum=0;
	cout<<"enter a number : ";
	cin>>n;
	int sq=n*n;
	while(sq>0)
	{
		sum+=sq%10;
		sq/=10;
	}
	if(n==sum)
	{
		cout<<n<<" is a neon number";
	}
	else
	{
		cout<<n<<" is not a neon number";
	}
	return 0;
}
