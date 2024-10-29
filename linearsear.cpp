#include <iostream>
using namespace std;
int main()
{
    int size, target;
    cout << "enter the size of the elements :";
    cin >> size;
    int arr[size];
    cout << "enter " << size << "elements in the array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the elements to search :" << endl;
    cin >> target;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        cout << "element found at index :" << index << endl;
    }
    else
    {
        cout << "element not found in the array :" << endl;
    }
    return 0;

}