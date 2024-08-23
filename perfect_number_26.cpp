#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,sum=0;
   cout<<"enter n";
   cin>>n;

   for(i=1;i<=n;i++)
   {
     if(n%i==0)
     {
        sum=sum+i;
     }
   }
   if(2*n==sum)
   {
    cout<<"Perfect Number";
   }
   else
   {
    cout<<"not a Perfect Number";
   }
   

    return 0;
}