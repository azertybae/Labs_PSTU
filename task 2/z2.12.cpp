#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	int max = 0;
	int min = 999999999;
	int num = 0;
	cout << "Введите длину последовательности" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) 
  {
		cout << "Введите число:" << endl;
		cin >> num;
		if (num > max) 
    {
			max = num;
		}
		if (num < min) 
    {
			min = num;
		}
	}
	cout << "Сумма равна: " << (max + min);
}
