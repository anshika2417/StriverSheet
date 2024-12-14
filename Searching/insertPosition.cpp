#include<iostream>
using namespace std;

int insertPosition(int arr[], int n, int pos){
    int low=0,high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid] >= pos){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
    int arr[]={1,2,4,7};
    cout<<insertPosition(arr,4,8);
}