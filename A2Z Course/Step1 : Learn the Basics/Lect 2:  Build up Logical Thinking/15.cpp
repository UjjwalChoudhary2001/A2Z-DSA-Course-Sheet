#include <iostream>
using namespace std;
/*Pattern-15
A B C
A B
A
 */


int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<char(ch+(n-j))<<" ";
        }
        cout<<endl;
    }
  return 0;
}











