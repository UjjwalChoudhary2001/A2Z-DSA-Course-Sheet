#include <iostream>
using namespace std;
/*Pattern-7
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
 */

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  int stars = 1;
  int spaces = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < spaces; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    for (int j = 0; j < spaces; j++) {
      cout << " ";
    }
    cout << endl;
    stars = stars + 2;
    spaces--;
  }

  return 0;
}
