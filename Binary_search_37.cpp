#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={6,8,19,89,23,45,4,34,12,10};
    int l=0,h=9,key,mid,n=10;

    cout<<"enter key";
    cin>>key;
    
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Found at"<<mid;
            return 0;
        }
        else if(key<a[mid])
            h=mid-l;
        else
            l=mid+l;
    }

    cout<<"Not Found";


    return 0;
        
}