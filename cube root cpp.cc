#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double a,b;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>=0) 
	{
        b=cbrt(a);
        cout<<"Cube root of "<<a<<" is "<<b;
    } 
	else 
	{
        cout<<"Negative Number is not valid";
    }
    return 0;
}
