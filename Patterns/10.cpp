#include <iostream>
using namespace std;
/*Pattern-10

*
**
***
**
*

 */

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;

  int stars1=1;
  int stars2=n-1;
  for(int i=0;i<=2*n-1;i++)
  {
      if(i<n)
      {
          for(int j=0;j<stars1;j++)
          {
              cout<<"*";
          }
          stars1++;
      }
      else{
          for(int j=0;j<stars2;j++)
          {
              cout<<"*";
          }
          stars2--;
      }

      cout<<endl;
  }
  return 0;
}
