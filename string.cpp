#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    getline(cin,s);
    
    vector<string>val;
    int l=0;
   for(int i=0;i<s.size();i++){
       if(s[i]==' '){
           val.push_back(s.substr(l,i-1-l+1));
           l=i+1;
       }
       if(i==s.size()-1){
           val.push_back(s.substr(l,i-l+1));
       }
   }
    
    for(int i=0;i<val.size();i++)
    cout<<val[i]<<"\n";
}
// Input - abcd efgh ijkl

// Output - 
// abcd
// efgh
// ijkl
