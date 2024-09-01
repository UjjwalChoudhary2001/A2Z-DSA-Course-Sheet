#include <iostream>
using namespace std;

void func(int &x)
{ 
  cout<<"Inside the function"<<endl;
  cout<<x<<endl;
  x+=5;
  cout<<x<<endl;
}

int main() {
 int x=5;
 func(x);
 cout<<"Outside the function"<<endl;
 cout<<x<<endl;
 return 0;
}
