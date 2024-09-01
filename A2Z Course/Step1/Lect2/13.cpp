#include <iostream>
using namespace std;
/*Pattern-13
1
2 3
4 5 6
 */


int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  int x=1;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<=i;j++)
      {
          cout<<x<<" ";
          x++;
      }
      cout<<endl;
  }
  return 0;
}











