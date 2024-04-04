#include <iostream>
#include <string>
using namespace std;
class StringConverter 
{
public:
    string convertToUpper(string input) 
	{
        for(int i = 0; i < input.length(); i++) 
		{
            input[i] = toupper(input[i]);
        }
        return input;
    }

    string convertToLower(string input) 
	{
        for(int i = 0; i < input.length(); i++) 
		{
            input[i] = tolower(input[i]);
        }
        return input;
    }
};
int main() 
{
    StringConverter converter;
    string input = "Surya JK";
    cout << "Original string: " << input <<endl;
    cout << "Converted to uppercase: " << converter.convertToUpper(input) <<endl;
    cout << "Converted to lowercase: " << converter.convertToLower(input) <<endl;
    return 0;
}
