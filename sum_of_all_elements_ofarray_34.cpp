#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={2,5,9,8,7};
    int n = 5 ,sum =0 ;

    for(int i=0;i<=5;i++)
    {
        sum = sum+a[i];
    }

    cout<<"sum is"<<sum;

    return 0;
        
}