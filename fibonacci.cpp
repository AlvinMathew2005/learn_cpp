#include <iostream>
using namespace std;
void fibonacciseriers(int *m, int *n)
{
    int a = 0, b = 1, next = 0;

    while (next <= *n)
    {
        if (next >= *m)
        {
            cout << next << "";
        }
        a = b;
        b = next;
        next = a + b;
    }
}
int main()
{
    int m, n;
    cout << "Enter the starting number(m):";
    cin >> m;
    cout << "Enter the ending number(n):";
    cin >> n;
    cout << "Fibonacci series between" << m << "and" << n << ":" << endl;
    fibonacciseriers(&m, &n); 
    cout << endl;
    return 0;
}
