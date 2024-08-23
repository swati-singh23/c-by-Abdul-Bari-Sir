#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,fact=1;
   cout<<"enter n";
   cin>>n;

   for(i=1 ;i<=n;i++)
   {
    fact*=i;

   }
cout<<"factorial of "<<n <<"  "<< "is"<<" " <<fact;



    return 0;
}