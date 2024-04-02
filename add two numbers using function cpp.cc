#include <iostream> 
using namespace std; 
int add(int A, int B) 
{ 
	int sum=0;
	sum=A+B;
	return sum; 
} 
int main() 
{ 
	int A = 4, B = 11; 
	cout << "sum = " << add(A, B); 
	return 0; 
}

