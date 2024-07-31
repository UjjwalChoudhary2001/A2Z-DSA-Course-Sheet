#include <iostream>
using namespace std;
/*Pattern-2
****
***
**
*
*/

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  return 0;
}
