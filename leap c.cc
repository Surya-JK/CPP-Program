#include<iostream>
using namespace std;
int main()
{
	int y=3050;
	if(y%4==0&&y%100!=0||y%400==0)
	{
		cout<<y<<" it is a leap year";
	}
	else
	{
		cout<<y<<" it is not a leap year";
	}
	return 0;
}
