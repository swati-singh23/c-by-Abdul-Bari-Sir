#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,count=0;
   cout<<"enter n";
   cin>>n;

   for(i=1;i<=n;i++)
   {
     if(n%i==0)
     {
        count++;
     }
   }
   if(count==2)
   {
    cout<<"Its a Prime Number";
   }
   else
   {
    cout<<"not a Prime Number";
   }
   

    return 0;
}