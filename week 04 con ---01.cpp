#include<bits/stdc++.h>
using namespace std;



int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(12);
    l.push_front(33);
   // for(auto it=l.begin();it!=l.end();it++)
   // {
   //     cout<< *it <<" ";
   // }
   //cout<<l.front()<<" ";


   l.pop_front();
   cout<<l.front() << '\n';
   for(auto it=l.begin();it!=l.end();it++)
    {
        cout<< *it <<" ";
    }
    return 0;
}
