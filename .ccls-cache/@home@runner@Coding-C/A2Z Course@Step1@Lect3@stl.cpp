#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. Pairs
  cout << "------------Pairs----------" << endl;
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;
  pair<int, pair<int, int>> p1 = {1, {2, 3}};
  cout << p1.second.first << " " << p1.second.second << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 5}};
  cout << arr[1].second << endl;

  // Vectors
  cout << "-----------Vectors---------" << endl;
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);
  cout << v[0] << " " << v[1] << endl;

  vector<pair<int, int>> v1;
  v1.push_back({1, 2});
  v1.emplace_back(3, 4);
  cout << v1[0].first << " " << v1[0].second << endl;
  cout << v1[1].first << " " << v1[1].second << endl;

  // V2 is vector or size 5 with zero or random values.
  vector<int> v2(5);
  cout << v2[0] << " " << v2[3] << endl;

  vector<int> v3(5, 20);
  cout << v3[0] << " " << v3[3] << endl;
  v3.push_back(10);
  cout << v3[5] << endl;

  vector<int> v4(v3);
  for (auto x : v4) {
    cout << x << " ";
  }
  cout << endl;
  for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;

  // v={1,2}
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  // v={1,2,3,4,5}
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  cout << v.back() << endl;

  // Erase function in vector
  v.erase(v.begin() + 1); // v{1,3,4,5}
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;
  // v.erase[start,end)
  v.erase(v.begin() + 1, v.begin() + 3); // v{1,5}
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;
  // Insert function in vector
  v.insert(v.begin() + 1, 2); // v{1,2,3,4,5}
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;
  v.insert(v.begin() + 2, 3, 100); // v={1,2,100,100,100,5}
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }
  v.pop_back(); // v={1,2,100,100,100}
  v.size();     // 5
  cout << "\n" << v.front() << endl;

  v.clear(); // v={}
  // v.empty(); // tru
  v.swap(v2); // Swaps the vectors
  // Lists
  cout << "\n"
       << "-----------Lists-----------" << endl;
  list<int> l = {1, 2};
  l.push_back(3);
  l.push_front(0);
  cout << l.size() << endl;

  for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
    cout << *(it) << " ";
  }
  if (!l.empty()) {
    cout << "\nClearing List\n";
    l.clear();
  }
  cout << l.size();
  cout << endl;
  // Note: Insert function works same as in vector

  cout << "-----------Deque-----------" << endl;
  // Same functions as list
  deque<int> d = {1, 2};
  d.insert(d.begin(), 0);
  for (auto it : d) {
    cout << it << " ";
  }
  d.clear();
  cout << "\n" << d.size();

  cout << "\n"
       << "-----------Stack-----------" << endl;
  stack<int> st1, st2;
  st1.push(1);
  st1.push(2);
  st1.push(3);
  cout << st1.top() << endl;
  st1.pop();
  st2.swap(st1);
  cout << st2.size() << endl;

  st2.push(3);
  st2.push(4);
  while (!st2.empty()) {
    cout << st2.top() << " ";
    st2.pop();
  }
  cout << "\n"
       << "-----------Queue-----------" << endl;

  queue<int> q1, q2;
  // q1={1,2,3}
  q1.push(1);
  q1.push(2);
  q1.push(3);
  cout << "Front: " << q1.front() << endl; // 1
  cout << "Back: " << q1.back() << endl;   // 3
  cout << "Size: " << q1.size() << endl;
  q2.swap(q1);

  while (!q2.empty()) {
    cout << q2.front() << " ";
    q2.pop();
  }

  cout << "\n"
       << "-----------Priority Queue-----------" << endl;

  priority_queue<int> pq; //Max Heap (Stores max element at top)
  pq.push(5);  //{5}
  pq.push(2);  //{5,2}
  pq.push(10); //{10,5,2}
  pq.push(1);  //{10,5,2,1}

  cout << "Top:" << pq.top() << endl; //O(1)
  pq.pop();
  cout << pq.size() << endl; //Push and pop are O(logn)

  priority_queue<int,vector<int>,greater<int>>pq2; //Min Heap
  //It stores minimum element at top and maximum in bottom
  
  pq2.push(5);  //{5}
  pq2.push(2);  //{2,5}
  pq2.push(10); //{2,5,10}
  pq2.push(1);  //{1,2,5,10}

  cout << "Top:" << pq2.top() << endl; //O(1)
  pq2.pop();
  cout << pq2.size() << endl; //Push and pop are O(logn)
  cout << "\n"
     << "-----------Set-----------" << endl;
  set<int>set;
  set.insert(1); //O(logn)
  set.insert(1);
  set.insert(2);
  set.insert(5);// {1,2,5}
  set.insert(6);
  set.erase(5); //O(logn)

 auto it = set.find(6); //Iterator to the element
 set.erase(it); //O(1)

  for(auto it:set){
    cout<<it<<" ";
  }
  cout<<endl<<set.size()<<endl;

  set.insert(3);
  set.insert(4);
  set.insert(5); //set={1,2,3,4,5}
  auto it2 = set.find(1);
  auto it3 = set.find(0); // Gives index end+1 ie 5

  set.erase(it2,it3); // [it1,it2) or [start iterator,end iterator)
  cout<<set.size()<<endl;
  
  return 0;
}
