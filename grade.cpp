#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "enter mark of the student" << endl;
    cin >> mark;
    if(mark>100||mark<0
    )
    {
        cout<<"invalid"<<endl;
    }
     else if (mark >= 91)
    {
        cout << "garde is A" << endl;
    }
    else if (mark >= 80)
    {
        cout << "grade is B" << endl;
    }
    else if (mark >= 70)
    {
        cout << "grade is C" << endl;
    }
    else if (mark >= 60)
    {
        cout << "grade is D" << endl;
    }
    else if(mark<=50)
    {
        cout << "garde is E" << endl;
    }
    else
    cout<<"F"<<endl;

    return 0;
}