#include <iostream>
using namespace std;

int CalculateFib(int n) {

	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	else
		return CalculateFib(n - 1) + CalculateFib(n - 2);
}

int main() {

	int n;
	cout << "Give the number : ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << CalculateFib(i) << endl;
	}

	return 0;
}