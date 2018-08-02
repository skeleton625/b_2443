#include <iostream>
using namespace std;

int main()
{
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < i; j++) cout << " ";
		for (int j = 2*(l-i) - 1; j > 0; j--) cout << "*";
		cout << endl;
	}
	return 0;
}