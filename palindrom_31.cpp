#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,r, rev = 0,m;
   cout<<"enter n";
   cin>>n;
   m = n;

   while(n>0)
   {
    
    r=n%10;
    n=n/10;
    rev = rev * 10+r;
   }
    if(rev==m)
        cout<<"palindrome";
    else
        cout<<"not a palindrome";

    return 0;
}