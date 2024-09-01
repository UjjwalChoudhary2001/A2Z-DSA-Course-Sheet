#include <iostream>
using namespace std;
/*Pattern-3
1
12
123
1234
*/

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}
