#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	cout << "Enter first num: ";
	cin >> num1;
	cout << "Enter second num: ";
	cin >> num2;
	if (num2 == 0) {
		cout << "Division by zero is impossible!";
		return 1;
	}

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f\n", num1, num2, num1 - num2);
	printf("%f * %f = %f\n", num1, num2, num1 * num2);
	printf("%f / %f = %f\n", num1, num2, num1 / num2);
	printf("%f %% %f = %d\n", num1, num2, (int)num1 % (int)num2);
	return 0;
}
