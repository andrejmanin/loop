#include <iostream>
#include <Windows.h>

using namespace std;

void task_1() {
	int number, sum = 0;
	cout << "Enter number from 0 to 500: ";
	cin >> number;
	while (number <= 500)
	{
		sum += number;
		number++;
	}
	cout << "Sum: " << sum << endl;
}

void task_2() {
	int x, y;
	cin >> x >> y;
	cout << "x ^ y = " << pow(x, y) << endl;
}

void task_3() {
	int sum = 0, i = 1;
	while (i <= 1000) {
		sum += i;
		i++;
	}
	cout << "Arithmetic mean of numbers from 1 to 1000 is: " << sum / 1000 << endl;
}

void task_4() {
	int a;
	do
	{
		cout << "Enter a number from 1 to 20: ";
		cin >> a;
	} while (a < 1 || a > 20);
	int dob = 1, i = a;
	while (i <= 20)
	{
		dob *= i;
		i++;
	}
	cout << "Dob from a to 20 is: " << dob << endl;
}

void task_5() {
	int number, i = 1;
	cout << "Enter a number: ";
	cin >> number;
	while (i <= 10) {
		cout << number << " * " << i << " = " << number * i << endl;
		i++;
	}
}

int main() {
	task_5();
	return 0;
}