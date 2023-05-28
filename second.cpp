#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter three numbers";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "greater no is" << a;
        }
        else
        {
            cout << "graeater no is" << c;
        }
    }
    else if (b > a)
    {
        cout << "greater no is: " << b;
    }
    else
    {
        cout << "greater no is: " << c;
    }
}