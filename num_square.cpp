#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

void numSquare (int num) {
  int colWidth = (int)log10(num) + 2; 
  int minNum = num, col, row;
  for (col = 0; col < num; ++col) {
    minNum = num - col;
    for (row = 0; row < num; ++row) {
      (num - row > minNum) ? cout << setw(colWidth) << num - row : cout << setw(colWidth) << minNum ;
    }
    for (row = num - 2; 0 <= row; --row) {
      (num - row < minNum) ? cout << setw(colWidth) << minNum : cout << setw(colWidth)<< num - row;
    }
    cout << endl;
  }
  for (col = num - 2; 0 <= col; --col) {
    minNum = num - col;
    for (row = 0; row < num; ++row) {
      (num - row > minNum) ? cout << setw(colWidth) << num - row : cout << setw(colWidth) << minNum;
    }
    for (row = num - 2; 0 <= row; --row) {
      (num - row < minNum) ? cout << setw(colWidth)<< minNum : cout << setw(colWidth) << num - row;
    }
    cout << endl;
  }
}

int main(void) {
  int num;
  cout << "enter the max number: ";
  cin >> num;
  numSquare(num);
  cout << "press any key to continue...";
  getch();
  return 0;
}
