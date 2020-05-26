#include<iostream>

using namespace std;


bool check(char str[]) {
  bool passed;
  
  // check if the string is "c0\/1n"
  if ((str[3] == '/') && (str[2] == '\\') && (*str == 'c') &&
     (str[1] == '0') && (str[4] == '1') && (str[5] == 'n')) {
    passed = true;
  }
  else {
    passed = false;
  }
  return passed;
}


int main() {
  char input[128];
  cin >> input;
  
  if (check(input)) {
    cout << "exito!!!" << endl;
  } else {
    cout << "fracaso!!!" << endl;
  }
}