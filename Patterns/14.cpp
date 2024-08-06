#include <iostream>
using namespace std;
/*Pattern-13
A
A B
A B C
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
            cout<<char(ch+j)<<" ";
        }
        cout<<endl;
    }
  return 0;
}











