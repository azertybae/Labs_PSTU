#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int space = n - 1;
	int star = 1;
	for (int i = 0; i < n; i++) 
  {
		for (int j = 1; j <= space; j++) 
    {
			cout << "  ";
		}
		space--;
		for (int j = 1; j <= star; j++) 
    {
			cout << "* ";
		}
		star += 1;
		cout << endl;
	}
	return 0;
}
