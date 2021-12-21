#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
	int m = 0; // m - максимум (на max ругается почему-то)
	setlocale(LC_ALL, "RUS");
	cout << "Введите три числа" << endl;
	cin >> a >> b >> c;
    if (a > m)
        {
            m = a;
        }
    if (b > m)
        {
            m = b;
        }
    if (c > m)
        {
            m = c;
        }
    cout << m << endl;
    return 0;
}
