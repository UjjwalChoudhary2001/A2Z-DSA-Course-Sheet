#include <iostream>
using namespace std;

void pattern6(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern7(int n) {
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for (int j = 0; j < 2 * n - (2*i+1); j++) {
      cout << "*";
    }

    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern8(int n){
  pattern6(n);
  pattern7(n);
}


int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  pattern8(n);
  return 0;
}
