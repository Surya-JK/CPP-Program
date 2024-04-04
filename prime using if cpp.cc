#include <iostream>
using namespace std;
int main() 
{
    int number, i, isPrime = 1;
    cout << "Enter the Number to check Prime: ";
    cin >> number;
    if (number <= 1) 
	{
        isPrime = 0;
    }
    for (i = 2; i <= number/2; i++) 
	{
        if (number % i == 0) 
		{
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) 
	{
        cout << "Number is Prime." << endl;
    } else {
        cout << "Number is not Prime." << endl;
    }
    return 0;
}
