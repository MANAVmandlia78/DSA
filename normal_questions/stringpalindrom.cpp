#include<bits/stdc++.h>
using namespace std;

bool pal(string &s,int a){
if(a>=s.size()/2)return true;
if(s[a]!=s[s.size() - a -1])return false;
 return pal(s,a+1);
}

int main(){
string s = "madam";
cout<<pal(s,0);
return 0;
}