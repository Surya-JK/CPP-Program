#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<" Enter the a value : ";
	cin>>a;
	cout<<" Enter the b value : ";
	cin>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"After swapping a = "<<a<<endl<<"After swapping b = "<<b;
	return 0;
}
