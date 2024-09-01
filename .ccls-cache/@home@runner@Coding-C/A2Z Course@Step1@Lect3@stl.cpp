#include<bits/stdc++.h>
using namespace std;

int main()
{ 
  //1. Pairs
  cout<<"------------Pairs----------"<<endl;
  pair<int,int>p ={1,3};
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,pair<int,int>>p1 = {1,{2,3}};
  cout<<p1.second.first<<" "<<p1.second.second<<endl;

  pair<int,int>arr[]={{1,2},{3,5}};
  cout<<arr[1].second<<endl;

  //Vectors
  cout<<"-----------Vectors---------"<<endl;
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  cout<<v[0]<<" "<<v[1]<<endl;

  vector<pair<int,int>>v1;
  v1.push_back({1,2});
  v1.emplace_back(3,4);
  cout<<v1[0].first<<" "<<v1[0].second<<endl;
  cout<<v1[1].first<<" "<<v1[1].second<<endl;
  
 //V2 is vector or size 5 with zero or random values.
  vector<int>v2(5);
  cout<<v2[0]<<" "<<v2[3]<<endl;

  vector<int>v3(5,20);
  cout<<v3[0]<<" "<<v3[3]<<endl;
  v3.push_back(10);
  cout<<v3[5]<<endl;

  vector<int>v4(v3);
  for(auto x:v4)
    {
      cout<<x<<" ";
    }
  cout<<endl;
  for(vector<int>::iterator it=v4.begin();it!=v4.end();it++)
    {
      cout<<*(it)<<" ";
    }
  cout<<endl;

  for(auto it = v.begin();it!=v.end();it++)
    {
      cout<<*(it)<<" ";
    }
  return 0;

  
}
