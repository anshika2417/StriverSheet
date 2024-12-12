#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" element"<<endl;
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    cout<<"How many alements you want to see: ";
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;

        //fetch
        cout<<hash[number]<<endl;
    }

}