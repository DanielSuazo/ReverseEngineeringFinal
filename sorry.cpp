#include<time.h>
#include<iostream>

using namespace std;

bool check(char input[], char alphabet[], int minute) {
  int h = minute + 1;
  // check if the input is 7 characters long
  if (input[7] != '\0') return false;

  for (int i = 0; i < 7; i++) {

    // if the current character is not equal to its corresponding character of alphabet, return false
    if (alphabet[h] != input[i]) return false;

    // update h
    h = h * 2 & 0x1fU ^ (h >> 2 ^ h >> 4) & 1U;
  }
  // if the loop finishes normally, the check has been passed
  return true;
}

int main() {
  char input[128];
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`";
  cout << "Enter the password: ";
  cin >> input;

  // Get current time
  time_t timer = time(NULL);
  tm *curr_time = localtime(&timer);

  if (check(input, alphabet, curr_time->tm_min)) { // pass the current minute as the 3rd parameter
    cout << "Congrats!" << endl;
  } else {
    cout << "SooSorry!" << endl;
  }

  
}