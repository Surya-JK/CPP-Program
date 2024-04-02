#include <iostream>
using namespace std;
int lVar = 10;
int main() 
{
    int lVar = 5;
    cout << "Local variable value: " << lVar <<endl;
    cout << "Global variable value: " << ::lVar <<endl;
    return 0;
}
