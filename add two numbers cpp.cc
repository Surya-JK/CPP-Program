#include <iostream> 
using namespace std; 
class Addition {  
    public:
        int num1, num2, sum;  
        void input() {  
            cout << "Enter two numbers: ";  
            cin >> num1 >> num2;  
        }  
        void calculate() {  
            sum = num1 + num2;  
        }  
        void output() {  
            cout << "The sum of " << num1 << " and " << num2 << " is " << sum <<endl;  
        }  
};  
  
int main() {  
    Addition add;  
    add.input();  
    add.calculate();  
    add.output();  
    return 0;  
}  
