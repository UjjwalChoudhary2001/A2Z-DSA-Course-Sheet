#include <iostream>
using namespace std;

// Arrays are passed by reference
void func(int arr[],int n)
{
  arr[0]=5;
}

int main() {
int n=5;
  int arr[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

  func(arr,n);
  cout<<arr[0];
}