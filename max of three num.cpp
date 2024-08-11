#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  int a,b,c;
  
  cout<<" enter three numbers";
  cin>>a>>b>>c;

  if(a>b & a>c)
  {
    cout<<"a is greater"<<a;
    
  }
  else if(b>c & b>a)
  {
    cout<<"b is greater"<<b;
  }
  else
  {
    cout<<"c is greater"<<c;
  }



    return 0;
}