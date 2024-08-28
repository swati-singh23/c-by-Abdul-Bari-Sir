#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={2,5,9,8,7};
    int n=5,max;
    max=a[0];

    for(int i=0;i<5;i++)
    {
       if(a[i]>max)
       {
        max=a[i];
       }
    }

    cout<<"maximum num is"<<max;

   

        return 0;
        
}