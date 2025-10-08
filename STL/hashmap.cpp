#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
     cout<<"enter the Size";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter elements of arr";
        cin>>arr[i];
    }

    // precompute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<< it.first << " -> " << it.second << endl;
    }

    int q;
    cin>>q;
    while (q--)
    {
        cout<<"enter the number";
       int number;
       cin>>number;
       //fetch
       cout<< mpp[number] << "Frequency of that number" << endl;
    }
    
    return 0;
    
}