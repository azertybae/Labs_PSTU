#include <iostream>
using namespace std;

int main()
{
    int n, proizv;
    proizv = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        proizv *= i;
    }
    cout << proizv;
    return 0;
}
