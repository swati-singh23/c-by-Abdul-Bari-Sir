#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cout<<"enter 2 no.";
   cin>>m>>n;
   while(m!=n)
   {
     if(m>n)
     {
        m=m-n;
     }
     else if(n>m)
     {
        n=n-m;
     }

   }
    cout<<m;

    return 0;
}