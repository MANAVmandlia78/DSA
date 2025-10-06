#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int i,int n){
 
    if(i>=n/2){
        return;
    }else{
        swap(arr[i],arr[n-i-1]);
        rev(arr,i+1,n);
    }


}

int main(){
    int n = 5;
int arr[n] = {5,3,2,1,4};
rev(arr,0,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}
return 0;
}