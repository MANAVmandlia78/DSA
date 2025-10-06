#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ve;
    ve.push_back(1);
    ve.emplace_back(2);
     vector<pair<int,int>>vec;
     vec.push_back({1,2});
     vec.emplace_back(1,2);
     vector<int> v(5,100);//creates vector of size 5 and every value is 100
     vector<int> vu(5);
     vector<int> v1(5,20);
     vector<int>v2(v1);

     vector<int>::iterator it = v.begin();
     it++;
     cout<< *(it) << " ";

     it = it + 2;
     cout<< *(it) << " ";

     vector<int>::iterator it = v.end();
     vector<int>::iterator it = v.rend();
     vector<int>::iterator it = v.rbegin();

     cout << v[0] << " " << v.at(0);
     cout << v.back() << " ";

     for(vector<int>::iterator it = v.begin(); it != v.end() ; it++){
        cout<< *(it) << " ";
     }

     //auto assigns datatype automatically according to the data like auto a = "manav" here datatype of a is string
     for(auto it = v.begin(); it != v.end() ; it++){
        cout<< *(it) << " ";
     } 

     for(auto it : v){
        cout<< it << " ";
     }

     v.erase(v.begin()+1);
    //{10,20,30,40,50}
     v.erase(v.begin()+2, v.begin()+4);//{10,20,50}

     vector<int>v(2,100);//{100,100}
     v.insert(v.begin(),300);//{300,100,100}
     v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

     

    return 0;
}