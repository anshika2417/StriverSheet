#include<iostream>
using namespace std;

int lowerBound(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid] >= x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
    int arr[]={2,3,4,4,8,9};
    cout<<lowerBound(arr,6,4);
}