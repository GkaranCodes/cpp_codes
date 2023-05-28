#include <iostream>
using namespace std;

int main()
{
    int ascii;
    char a;
    cout << "daal na koi v character madharchod: ";
    cin >> a;
    ascii = a;
    if (ascii >= 97 && ascii <= 122)
    {
        cout << "dikh nhi raha alphabet hai";
    }
    else if (ascii >= 65 && ascii <= 90)
    {
        cout << "dikh nhi raha alphabet hai";
    }
    else
    {
        cout << "padh k aa pehle kon alpha hai kon nhi";
    }
    return 0;
}