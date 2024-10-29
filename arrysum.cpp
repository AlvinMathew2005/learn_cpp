#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cout << "enter the size of the array :";
    cin >> size;
    int arr[size];
    cout << "enter " << size << " elements the the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "the sum of the elements the array is :" << sum << endl;
    return 0;
}