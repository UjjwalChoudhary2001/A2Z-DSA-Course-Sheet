#include <iostream>
using namespace std;
/*Pattern-8

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

  int stars = 2*n-1;
  int spaces = 0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<spaces;j++)
      {
          cout<<" ";
      }

      for(int j=0;j<stars;j++)
      {
          cout<<"*";
      }

      for(int j=0;j<spaces;j++)
      {
          cout<<" ";
      }

      cout<<endl;
      spaces++;
      stars-=2;
  }
  return 0;
}
