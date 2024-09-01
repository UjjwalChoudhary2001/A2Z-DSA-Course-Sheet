#include <iostream>
using namespace std;
/*Pattern-12

1         1
1 2     2 1
1 2 3 3 2 1

 */


int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
    int spaces=2*n-2;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<"";
        }

        for(int j=spaces;j>0;j--)
        {
            cout<<" ";
        }

         for(int j=i+1;j>0;j--)
        {
            cout<<j<<"";
        }

        spaces=spaces-2;
        cout<<endl;

    }
  return 0;
}



