#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int day;
  cout<<"Enter Day no";
  cin>>day;
  if(day==1)
     cout<<"Mon"<<endl;
  else if(day==2)
     cout<<"Tue"<<endl;   
  else if(day==3)
     cout<<"Wed"<<endl;   
  else if(day==4)
     cout<<"Thr"<<endl;   
  else if(day==5)
     cout<<"Fri"<<endl;   
  else if(day==6)
     cout<<"Sat"<<endl;   
  else if(day==7)
     cout<<"Sun"<<endl;   
  else
     cout<<"Invalid day no.";


    return 0;
}