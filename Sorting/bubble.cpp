#include<iostream>
using namespace std;

void bubbleSort(int ar[],int n){

    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++)
        {
            if(ar[j]>ar[j+1]) swap(ar[j],ar[j+1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

int main()
{
    int arr[]={13,24,46,20,9,52};
    bubbleSort(arr,6);
}