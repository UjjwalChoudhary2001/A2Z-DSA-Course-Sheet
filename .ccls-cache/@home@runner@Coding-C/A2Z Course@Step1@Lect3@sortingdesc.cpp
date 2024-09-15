#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second) {
    return true;
  } else if (p1.second == p2.second) {
    if (p1.first >= p2.first) {
      return true;
    }
    return false;
  }
}

int main() {

  int array[] = {1, 5, 42, 0};
  sort(array, array + 4); // asc order {0,1,5,42}
  for (int i = 0; i < 4; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  sort(array, array + 4, greater<int>()); // desc order
  for (int i = 0; i < 4; i++) {
    cout << array[i] << " "; //{42,5,1,0}
  }
  cout << endl;
  sort(array + 2, array + 4); //{42,5,0,1}
  for (int i = 0; i < 4; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  
  cout<<"-------Concept of Comparators---------\n";
  pair<int, int> arr[] = {{1, 2}, {4, 2}, {1, 1}};

  int n = sizeof(arr) / sizeof(arr[0]);
  // Sort according to 2nd element , if its same , sort in desc order according
  // to first element
  sort(arr, arr + n, comp);

  for (auto it : arr) {
    cout << it.first << " " << it.second << endl;
  }

cout<<"--------Some important functions---------\n";
  

  string s = "321";
  //To get all permutations always sort the string first
  sort(s.begin(), s.end());

  do{
    cout<<s<<endl;
  }while(next_permutation(s.begin(),s.end()));

  int a[]= {5,2,1,4,66};
  int num = sizeof(a)/sizeof(int); //size of a
  cout<<*max_element(a,a+num)<<endl; //max element in a
  cout<<*min_element(a,a+num)<<endl; // min element in a


//Built in Popcount returns the no. of set bits in a number's binary form

int value =7; 
int setbits = __builtin_popcount(value);
cout<<setbits<<endl;

long long val = 6252672821;
cout<<__builtin_popcountll(val)<<endl;
   
  return 0;
}