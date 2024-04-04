#include<iostream>
using namespace std;
int main()
{
	int n,orgnum,i,sum=0;
	cout<<"enter a number : ";
	cin>>n;
	orgnum=n;
	while(n>0)
	{
		int digit=n%10;
		int fact =1;
		for(i=1;i<=digit;i++)
		{
			fact*=i;
		}
		sum+=fact;
		n/=10;
	}
	if(sum==orgnum)
	{
		cout<<orgnum <<" is a strong number";
	}
	else
	{  
	    cout<<orgnum <<" is not a strong number";	
	}
	return 0;
}
