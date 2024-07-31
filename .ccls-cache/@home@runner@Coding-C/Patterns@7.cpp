#include <iostream>
using namespace std;
/*Pattern-6
1234
123
12
1
*/

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }

    cout << endl;
  }

  return 0;
}
