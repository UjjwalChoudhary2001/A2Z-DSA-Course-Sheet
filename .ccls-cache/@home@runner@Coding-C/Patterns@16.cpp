#include <iostream>
using namespace std;
/*Pattern-16
A
B B
C C C
 */


int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char(ch+i)<<" ";
        }
        cout<<endl;
    }
  return 0;
}











