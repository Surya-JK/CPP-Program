#include<iostream>
using namespace std;
int main()
{
	int rows,i,j;
	cout<<" Enter a no. of rows : ";
	cin>>rows;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		cout<<i+1;
		cout<<endl;
	}

	return 0;
}
