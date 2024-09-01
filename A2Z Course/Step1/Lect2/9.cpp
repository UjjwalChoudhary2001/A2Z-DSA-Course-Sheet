#include <iostream>
using namespace std;
/*Pattern-9

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
     * * *
       *
 */

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;

  int spaces = n - 1;
  int stars = 1;

   //For upper rows
    for (int i = 0; i <= n - 2; i++) {

      for (int j = 0; j < spaces; j++) {
        cout << " ";
      }

      for (int j = 0; j < stars; j++) {
        cout << "*";
      }

      for (int j = 0; j < spaces; j++) {
        cout << " ";
      }

      spaces--;
      stars += 2;

      cout << endl;
    }

    //For middle 2 rows
    for (int i = n - 1; i <= n; i++) {
      for (int j = 0; j < 2 * n - 1; j++) {
        cout << "*";
      }

      cout << endl;
    }

  //For bottom rows

  spaces = 1;
  stars = 2 * n - 3;
  for (int i = n + 1; i <= 2 * n - 1; i++) {
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
    spaces++;
    stars -= 2;
  }
  return 0;
}
