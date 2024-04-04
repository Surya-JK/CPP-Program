#include<iostream>
using namespace std;
int main()
{
	int a=121,ori,rev=0,rem;
	ori=a;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	if(ori==rev)
	{
		cout<<ori<<" is a palindrome";
	}
	else
	{
		cout<<ori<<" is not a palindrome";
	}
	return 0;
}
