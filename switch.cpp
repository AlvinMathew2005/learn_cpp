#include <iostream>
using namespace std;
int main()
{
    int mark;
    char grade;
    cout << "Enter grade of the student : ";
    cin >> mark;
    switch (mark / 10)
    {
    case 10:
        cout << "grade is A" << endl;
        break;
    case 9:
        cout << "grade is B " << endl;
        break;
    case 8:
        cout << "grade is C" << endl;
        break;
    case 7:
        cout << "grade is D" << endl;
        break;
    case 6:
        cout << "grade is E" << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "grade is F" << endl;
        break;

        

    default:
    cout<<"invalid"<<endl;
        break;
    }
    return 0;
}