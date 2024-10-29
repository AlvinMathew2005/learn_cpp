#include <iostream>
using namespace std;
int main()
{
    double l, b,area,peri;
    cout << "enter length and breadth :";
    cin >> l >> b;
    area = l * b;
    peri = 2 * (l + b);
    cout << "area of the rectangle before using type cast :" << area << endl;
    cout << "perimeter before type cast " << peri << endl;
    cout << "area after tcast :" << int(area) << endl;
    cout << "pertmeter after tcast :" << int(peri) << endl;
   char (l == b) ?"square":"rectanle";
    return 0;
}