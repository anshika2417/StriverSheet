#include<iostream>
using namespace std;

void insertionSort(int ar[],int n){

    for(int i=n-1;i>=1;i--){
        int j=i;
        while(j>0 && ar[j-1]>ar[j]){
            swap(ar[j],ar[j-1]);
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

int main()
{
    int arr[]={13,24,46,20,9,52};
    insertionSort(arr,6);
}