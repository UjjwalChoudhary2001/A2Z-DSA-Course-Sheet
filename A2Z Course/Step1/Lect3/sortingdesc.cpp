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

  //Concept of Comparators
  pair<int, int> arr[] = {{1, 2}, {4, 2}, {1, 1}};

  int n = sizeof(arr) / sizeof(arr[0]);
  // Sort according to 2nd element , if its same , sort in desc order according
  // to first element
  sort(arr, arr + n, comp);

  for (auto it : arr) {
    cout << it.first << " " << it.second << endl;
  }
  return 0;
}