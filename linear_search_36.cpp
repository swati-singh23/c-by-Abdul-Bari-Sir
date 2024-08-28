#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],n=10,i,key;

    cout<<"enter numbers";
    for(i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    cout<<"Enter Key";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"found at"<<i;
            return 0;
        }
    }
    cout<<"not found";
        
}