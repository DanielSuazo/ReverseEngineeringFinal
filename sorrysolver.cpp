#include<iostream>

using namespace std;

int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`";
  int minute;

  cout << "enter time needed: ";
  cin >> minute;
  cout << endl;

  for (int i = 0, h = minute + 1; i < 7; i++) {
    cout << alphabet[h];

    // update h
    h = h * 2 & 0x1fU ^ (h >> 2 ^ h >> 4) & 1U;
  }
  cout << endl;
}