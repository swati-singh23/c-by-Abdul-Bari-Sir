#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i;
   cout<<"enter n";
   cin>>n;

   for(i=1;i<=n;i++)
   {
     if(n%i==0)
     {
        cout<<i<<endl;
     }
   }

   

    return 0;
}