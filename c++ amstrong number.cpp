#include<iostream>
using namespace std;
int main()
{
	int n,orgnum,res=0,rem;
	cout<<" Enter a number : ";
	cin>>n;
	orgnum=n;
	while(orgnum!=0)
	{
		rem=orgnum%10;
		res+=rem*rem*rem;
		orgnum/=10;
	}
	if(n==res)
	{
	cout<< n << " is a amstrong number";
    }
    else
    {
    	cout<< n << " is not a amstrong number";	
	}
     return 0;
}
