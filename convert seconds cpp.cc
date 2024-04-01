#include <iostream>
using namespace std;

class TimeConverter 
{
public:
    int hours;
    int minutes;
    int seconds;

    void input() {
        int s;
        cout << "Enter time in seconds: ";
        cin >> s;

        if (s >= 3600) 
		{
            hours = s / 3600;
            s = s % 3600;
        } 
		else 
		{
            hours = 0;
        }

        if (s >= 60) 
		{
            minutes = s / 60;
            seconds = s % 60;
        } 
		else 
		{
            minutes = 0;
            seconds = s;
        }

        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() 
{
    TimeConverter timeObj;

    timeObj.input();

    return 0;
}
