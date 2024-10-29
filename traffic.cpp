#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "eNter the traffic light : ";
    cin >> letter;
    switch (letter)
    {
    case 'R':
        cout << "Stop";
        break;
    case 'Y':
        cout << "GO SLOW";
        break;
    case 'G':
        cout << "Go";
        break;
    default:
        cout << "invalid";
    }
    return 0;
}