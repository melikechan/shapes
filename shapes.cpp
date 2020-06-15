#include <iostream>
#include <conio.h>

using namespace std;

void classicalTriangle(int len) {
	for (int col = 0; col < len; ++col) {
		for (int shape = len - col; shape <= len; ++shape) {
			cout << "*";
		}
		cout << endl;
	}
}

void xyReflectedTriangle(int len) {
	int blank, shape;
	for (int col = 0; col < len; ++col) {
		for (blank = len - col; blank < len; ++blank) {
			cout << " ";
		}
		for (shape = 0; shape < len - col; ++shape) { 
			cout << "*";
		}
		cout << endl;
	}	
}

void xReflectedTriangle(int len) {
	for (int col = 0; col < len; ++col) {
		for (int shape = 0; shape < len - col; ++shape) {
			cout << "*";
		}
		cout << endl;
	}
}

void yReflectedTriangle(int len) {
	int blank, shape;
	for (int col = 0; col < len; ++col) {
		for (blank = 0; blank < len - col; ++blank) {
			cout << " ";
		}
		for (shape = blank; shape <= len; ++shape) {
			cout << "*"; 
		}
		cout << endl;
	}
}

int main(void) {
	int len, op;
	cout << "enter the length, please. ";
	cin >> len;
	cout << "please select a triangle (0 -> classical, 1 -> x reflected,\n 2 -> y reflected, 3 -> xy reflected): ";
	cin >> op;
	switch (op) {
		case 0:
			classicalTriangle(len);
			break;
		case 1:
			xReflectedTriangle(len);
			break;
		case 2:
			yReflectedTriangle(len);
			break;
		case 3:
			xyReflectedTriangle(len);
			break;
		default:
			cout << "Invalid operation." << "\n";
			break;
	}
	cout << "Press any key to continue...";
   	getch();
	return 0;
}
