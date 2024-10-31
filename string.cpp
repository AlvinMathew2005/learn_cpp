#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "length of first string " << str1.length() << endl;
    cout << "Length of the second string: " << str2.length() << endl;

    string concatenated = str1;
    concatenated.append(str2);
    cout << "Concatenated string :" << concatenated << endl;
    if (str1.compare(str2) == 0)
    {
        cout << "The string are equal. " << endl;
    }
    else
    {
        cout << "The strings are not equal." << endl;
    }
    str1.swap(str2);
    cout << "After swapping :" << endl;
    cout << "First string:" << str1 << endl;
    cout << "Second string :" << str2 << endl;

    return 0;
}