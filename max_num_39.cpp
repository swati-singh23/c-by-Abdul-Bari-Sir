#include<iostream>
using namespace std;

int main()
{ 
    
            int A[]={8,4,12,37,36,25,-2,10,15,25};
            int max=A[0];
            
            //write a loop to find minimum number
            for(int i=0;i<10;i++)
            {
                if(A[i]>max)
                {
                    max=A[i];
                }
            }
        
            cout<<max;


    return 0;    
}
       