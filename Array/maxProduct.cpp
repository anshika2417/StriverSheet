#include<bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n){
    int mini=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int pro=arr[i]*arr[j];
            mini=max(mini,pro);
        }
    }
    return mini;
}

int main(){
    int arr[]={2,3,9,3,10};
    cout<< maxProduct(arr,5);
}