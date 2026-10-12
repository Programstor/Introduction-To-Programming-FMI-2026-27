#include <iostream>
using namespace std;

int main() {
	int count, legs;
	cout << "Enter the number of animals: ";
	cin >> count;
	cout << "Enter the number of legs: ";
	cin >> legs;

	if (legs < count * 2 || legs > count * 4 || legs % 2 != 0) {
		cout << "Invalid inputs!" << endl;
		return 1;
	}

	int chickens = (4 * count - legs) / 2;
	int cows = count - chickens;

	cout << "Chickens: " << chickens << endl;
	cout << "Cows: " << cows << endl;

	return 0;
}
