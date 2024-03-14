#include <iostream>
#include <string>
using namespace std;

string bitwise_multiply(string num1, string num2) {
	return to_string(stoi(num1) * stoi(num2));
}

string bitwise_divide(string num1, string num2) {
	return to_string(stoi(num1) / stoi(num2));
}

string bitwise_subtract(string num1, string num2) {
	return to_string(stoi(num1) - stoi(num2));
}

string bitwise_add(string num1, string num2) {
	return to_string(stoi(num1) + stoi(num2));
}

int main() {
	string num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	string result_multiply = bitwise_multiply(num1, num2);
	string result_divide = bitwise_divide(num1, num2);
	string result_subtract = bitwise_subtract(num1, num2);
	string result_add = bitwise_add(num1, num2);

	cout << "Multiplication: " << result_multiply << endl;
	cout << "Division: " << result_divide << endl;
	cout << "Subtraction: " << result_subtract << endl;
	cout << "Addition: " << result_add << endl;

	return 0;
}