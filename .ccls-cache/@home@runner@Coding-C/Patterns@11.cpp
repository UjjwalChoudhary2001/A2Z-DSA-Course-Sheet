#include <iostream>
using namespace std;
/*Pattern-11

1
0 1
1 0 1

 */

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  int a;
  for(int i=0;i<n;i++)
  {   if(i%2==0)
      {
        a=1;  
      }
      else{
          a=0;
      }
      for(int j=0;j<=i;j++)
      {   
          cout<<a<<" ";

          a= (a^1);
      }

      cout<<endl;
  }
  return 0;
}




