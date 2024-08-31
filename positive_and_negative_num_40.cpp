#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{ 
    
            int A[]={8,-2,-6,-89,67,56,89,-1,23,10};
            int pcount=0,ncount=0;
            
           
            for(int i=0;i<10;i++)
            {
                if(A[i]>=0)
                {
                   
                    pcount=pcount+1;
                    
                }
                else if(A[i]<0)
                {
                    ncount=ncount+1;
                    
                }
            }

            cout<<"positive number"<<pcount;
            cout<<"negative number"<<ncount;
           


    return 0;    
}
       