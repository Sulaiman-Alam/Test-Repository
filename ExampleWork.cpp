#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;
    cout << "Hello World!\nWhat's your name: " << endl; // cout outputs to screen
    cin >> name;                                        // cin takes in input from user
    cout << "Hi " << name << endl;

    int x, y;
    /*
    int x;
    int y;
    */
    cout << "Please enter two integer values: ";
    cin >> x >> y;
    double average = (x + y) / 2.0;
    /*
    cin >> x;
    cin >> y;
    */
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x*y = " << x * y << endl;
    cout << "(x+y)/2 = " << average << endl;
    cout << "x%y = " << x % y << endl;

    return 0;
}
