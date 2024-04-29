#include <iostream>
#include <Windows.h>

using namespace std;

void task_1() {
	int number, i = 0;
	cin >> number;
	while (i != number)
	{
		cout << i << endl;
		i++;
	}
}


void task_2() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int a, b, i;
	cin >> a >> b;
	i = (a > b) ? b : a;
	int max = ((a < b) ? b : a);
	while (i <= max) {
		if (i % 2 == 0) {
			SetConsoleTextAttribute(hConsole, 2);
			cout << i << endl;
			SetConsoleTextAttribute(hConsole, 7);
		}
		if (i % 7 == 0) {
			SetConsoleTextAttribute(hConsole, 6);
			cout << i << endl;
			SetConsoleTextAttribute(hConsole, 7);
		}
		if (i % 2 != 0) {
			SetConsoleTextAttribute(hConsole, 4);
			cout << i << endl;
			SetConsoleTextAttribute(hConsole, 7);
		}
		i++;
	}
}

void task_3() {
	int a, b, i, sum = 0;
	cin >> a >> b;
	i = (a > b) ? b : a;
	int max = ((a < b) ? b : a);
	while (i <= max)
	{
		sum += i;
		i++;
	}
}

void task_4() {
	int num;
	long long sum = 0;
	cin >> num;
	while (num != 0) {
		cin >> num;
		sum += num;
	}
	cout << "Sum: " << sum << endl;
}

int main() {
	task_4();
	return 0;
}