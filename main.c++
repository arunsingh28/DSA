#include <iostream>
using namespace std;

int main()
{
    int a[6];
    cout << "enter number";
    for (int i = 0; i <= 5; i++)
    {
        cin >> a[i];
    }

    // output
    for (int j = 0; j <= 5; j++)
    {
        if (a[j] == '4')
        {
            cout << "output:" << a[j];
        }
    }

    return 0;
}