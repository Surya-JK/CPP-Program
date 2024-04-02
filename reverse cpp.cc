#include<iostream>
using namespace std;
int rev(int a)
{
	int rev=0,rem;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
    }
	return rev;
}
int main()
{
	int a=103;
	cout<<"Reverse: "<<rev(a);
	return 0;
