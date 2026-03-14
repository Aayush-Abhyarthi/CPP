#include<bits/stdc++.h>
using namespace std;



int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    cout<<*(s.begin())<<"\n";
    cout<<*(s.rbegin())<<"\n";

    auto it = s.find(3);
    s.erase(it);
}
