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
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        cout<<"enter the number";
       int number;
       cin>>number;
       //fetch
       cout<< hash[number] << "Frequency of that number" << endl;
    }
    
    return 0;
    
}