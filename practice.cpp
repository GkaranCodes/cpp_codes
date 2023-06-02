#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "1st loop is running for the " << i << "th time." << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << "  2nd for loop is running for " << j << "th time." << endl;
        }
        cout << endl;
    }
    return 0;
}

// i=i+1 / i+=1 / i++
// i*=2 / i=i*2 