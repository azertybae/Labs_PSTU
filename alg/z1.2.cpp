#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	cin >> a >> b;
	if (b == 0) 
	{
		cout << "На ноль делить нельзя";
	}
	else 
	{
		c = a / b;
		cout << c << endl;
	}
	return 0;
}
