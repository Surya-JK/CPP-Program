#include <iostream>
#include <string>
using namespace std;
class Student 
{
public:
    string name;
    int age;
    int marks;
    string Department;

    void displayInfo() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: "<<marks<<endl;
        cout << "Department: " << Department << endl;
    }
};

int main() 
{
    Student student1;
    Student student2;
    student1.name = "Alice";
    student1.age = 20;
    student1.marks=100;
    student1.Department = "Computer Science";

    student2.name = "Bob";
    student2.age = 21;
    student2.marks=96;
    student2.Department = "Engineering";
    
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();
    return 0;
}
