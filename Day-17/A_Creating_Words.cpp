#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        string a, b;
        cin >> a >> b;

        char temp;
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        cout << a << " " << b << endl;
    }

    return 0;
}