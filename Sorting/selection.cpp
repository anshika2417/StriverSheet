#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++)
    { 
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[mini],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int ar[5]={7,5,9,2,8};
    selectionSort(ar,5);
}