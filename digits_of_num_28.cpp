#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,r;
   cout<<"enter n";
   cin>>n;

   while(n>0)
   {
    
    r=n%10;
    n=n/10;
    cout<<r<<endl;

   }
   

    return 0;
}