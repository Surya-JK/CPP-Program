#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cout<<"enter a number : ";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum+=n%10;
		n/=10;
	}
	cout<<"Sum of digit = "<<sum;
	return 0;
}
