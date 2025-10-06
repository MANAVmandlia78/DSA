#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int l,int r){
if(l>=r){
    return;
}else{
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
}
}

int main(){
    int n = 5;
    int arr[n] = {1,3,2,5,4};

    rev(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
    

}