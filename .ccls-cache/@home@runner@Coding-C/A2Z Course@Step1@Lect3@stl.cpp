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

  priority_queue<int> pq; // Max Heap (Stores max element at top)
  pq.push(5);             //{5}
  pq.push(2);             //{5,2}
  pq.push(10);            //{10,5,2}
  pq.push(1);             //{10,5,2,1}

  cout << "Top:" << pq.top() << endl; // O(1)
  pq.pop();
  cout << pq.size() << endl; // Push and pop are O(logn)

  priority_queue<int, vector<int>, greater<int>> pq2; // Min Heap
  // It stores minimum element at top and maximum in bottom

  pq2.push(5);  //{5}
  pq2.push(2);  //{2,5}
  pq2.push(10); //{2,5,10}
  pq2.push(1);  //{1,2,5,10}

  cout << "Top:" << pq2.top() << endl; // O(1)
  pq2.pop();
  cout << pq2.size() << endl; // Push and pop are O(logn)
  cout << "\n"
       << "-----------Set-----------" << endl;
  set<int> set;
  set.insert(1); // O(logn)
  set.insert(1);
  set.insert(2);
  set.insert(5); // {1,2,5}
  set.insert(6);
  set.erase(5); // O(logn)

  auto it = set.find(6); // Iterator to the element
  set.erase(it);         // O(1)

  for (auto it : set) {
    cout << it << " ";
  }
  cout << endl << set.size() << endl;

  set.insert(3);
  set.insert(4);
  set.insert(5); // set={1,2,3,4,5}
  auto it2 = set.find(1);
  auto it3 = set.find(0); // Gives index end+1 ie 5

  set.erase(it2, it3); // [it1,it2) or [start iterator,end iterator)
  cout << set.size() << endl;

  cout << "---------Lower and Upper Bound---------" << endl;

  /* Lower Bound:Gives index of the first occurence of element if found else the
index of first occurence of next greater element.

If same element/next greater element is not found then it returns end
iterator.ie- (arr+n or vec.end()) which points outside of array or vector.

Upper Bound: Gives the index of first occurence of the next greater element.

If next greater element is not found then it returns end iterator.ie- (arr+n or
vec.end()) which points outside of array or vector.

In case of array we write it as:
lower_bound(a,a+n,element)-a;
upper_bound(a,a+n,element)-a;
  */
  vector<int> vec{10, 20, 30, 30, 30, 40, 50};

  int x = lower_bound(vec.begin(), vec.end(), 40) - vec.begin();
  int y = upper_bound(vec.begin(), vec.end(), 50) -
          vec.begin(); // 7 as next grater element is not present
  int z = upper_bound(vec.begin(), vec.end(), 10) - vec.begin();
  cout << x << endl; // 5 ie element 40
  cout << y << endl; // 7 ie outside vector
  cout << z << endl; // 1 ie element 20

  cout << "---------Multiset---------" << endl;
  /* Stores the numbers in sorted order but allows duplicates.*/
  multiset<int> ms;
  ms.insert(1); //{1}
  ms.insert(2); //{1,1}
  ms.insert(3); //{1,1,1}
  cout << ms.count(1) << endl;
  // ms.erase(1); //Erases all the occurences of 1
  // cout << ms.size() << endl; // gives 0

  // To delete the particular occurence
  // ms.erase(ms.find(1)) deletes only first occurence of 1
  multiset<int>::iterator itt = ms.begin();
  itt++;
  ms.erase(itt);
  for (auto it : ms) {
    cout << it << " ";
  }

  cout << endl << "---------Unordered Set---------" << endl;
  /* -->Lower and UpperBound functions are not present , all operations occur in O(1) time and O(n) in worst case.

  -->It stores the elements in random order.
    */

  unordered_set<int>us;
  us.insert(1);
  us.insert(1);
  us.insert(2);
  us.insert(3);
  us.insert(4);
  us.insert(6);
  us.insert(5);

  cout<<endl<<us.size()<<endl;

  auto iter = us.find(9);
  if(iter == us.end())
  {
      cout<<"Element is not present in the unordered set"<<endl;
  }


  for(auto it:us)
  {
      cout<<it<<" ";
  }

  cout<<"----------------------Map-----------------------------"
    // empty map container
    map<int, int> gquiz1;

    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));

    // another way of inserting a value in a map
    gquiz1[7] = 10;

    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

    cout << endl;

    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;



  return 0;
}
