//This is for sorting;
#include<bits/stdc++.h>
using namespace std;



int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(12);
    l.push_front(33);


   //l.sort();
   l.reverse();

   for(auto it=l.begin();it!=l.end();it++)
    {
        cout<< *it <<"  ";
    }
    return 0;
}

