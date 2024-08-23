#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   int n,i=1,sum=0;

   cout<<"enter n";
   cin>>n;

   while(i<=n)
   {
      sum += i;
      i++;

   }
   cout<<"sum of n natural number is"<<sum;

    return 0;
}