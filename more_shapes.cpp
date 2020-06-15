#include <iostream>
#include <conio.h>

using namespace std;

enum Operation {
	nonFilled, filled
};


void nonFilledTriangle(int len) {
	int blank, full;
	for (int col = 0; col < len - 1; ++col) {
		for (blank = 1; blank < len - col; ++blank) {
			cout << ' ';
		}	
		for (full = blank; full <= len - col; ++full) {
			cout << '*';
		}
		for (blank = full; blank < len + col; ++blank) {
			cout << ' ';
		}
		for (full = blank; full <= len + col; ++full) {
			cout << '*';
		}
		cout << endl;
	}
	for (int bott = 0; bott < full; ++bott) {
		cout << '*';
	}
	cout << endl;
}


void filledTriangle(int len) {
	int blank, full;
	for (int col = 0; col < len; ++col) {
		for (blank = 1; blank < len - col; ++blank) {
			cout << ' ';
		}
		for (full = blank; full <= col + len; ++full) {
			cout << '*';
		}
		cout << endl;
	}
}
int main(void) {
	int len;
	int op;
	cout << "enter the length of the triangle you want: ";
	cin >> len;
	cout << "choose the triangle: (0 -> non-filled, 1 -> filled)";
	cin >> op;
	switch ((Operation)op) {
		case nonFilled:
			nonFilledTriangle(len);
			break;
		case filled:
			filledTriangle(len);
			break;
		default:
			cout << "Invalid operation" << endl;
			break;
	}
	cout << "Press any key to continue...";
	getch();
	return 0;
}
