#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	if (n < 2) 
	{
		cout << "Введите число большее 2";
		cin >> n;
	}
	for (int i = 1; i <= n; i++) 
  {
		for (int j = 0; j < i; j++) 
    {
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
