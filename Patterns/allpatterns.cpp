#include <iostream>
using namespace std;

void pattern2(int n){
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<=i;j++)
        {
          cout<<"* ";
        }
      cout<<endl;
    }
}
void pattern3(int n){
  for(int i=n-1;i>=0;i--)
    {
      for(int j=i+1;j>0;j--)
        {
          cout<<"* ";
        }
      cout<<endl;
    }
  
}
void pattern7(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern8(int n) {
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for (int j = 0; j < 2 * n - (2*i+1); j++) {
      cout << "*";
    }

    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern9(int n){
  pattern7(n);
  pattern8(n);
}
void pattern10(int n)
{
  for(int i=0;i<2*n-1;i++)
    {
      if(i<=n-1)
      {
        int stars = i+1;
        for(int j=0;j<stars;j++)
          {
            cout<<"* ";
          }
      }
      else
      {
        int stars = 2*n-i-1;
        for(int j=0;j<stars;j++)
          {
            cout<<"* ";
          }
      }

      cout<<endl;
    }
}

int main() {
  int n;
  cout << "Enter the number of rows" << endl;
  cin >> n;
  pattern10(n);
  return 0;
}
