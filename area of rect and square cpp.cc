#include <iostream>
using namespace std;
int Area(int length, int width) {
    return length * width;
}
int Area(int side) {
    return side * side;
}
int main() {
    int length, width, side;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << Area(length, width) << endl;

    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << Area(side) << endl;
    return 0;
}
