#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "ENTER A NUMBER :";
    cin >> i;
    int j = 1;
    do
    {
        cout << i <<" "<< "*" <<" "<< j <<" "<<"="<<" " << i * j << endl;
        j++;
    } while (j <= 10  );
    return 0;
}