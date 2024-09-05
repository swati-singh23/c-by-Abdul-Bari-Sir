#include <iostream> 
#include <cmath> 
using namespace std; 
int main() 
{ 
string str="MalayaLAm"; 
string rev; 
int len=(int)str.length(); 
int i,j; 
rev.resize(len);// resizing of reverse string must be done, rev will be empty. 
for(i=0, j=len-1; i<len; i++, j--) 
{ 
rev[i]=str[j]; 
} 
rev[len]='\0'; 
for(i=0; str[i]!='\0' && rev[i]!='\0'; i++) 
{ 
if(str[i]-rev[i]!=32 && str[i]-rev[i]!=-32 && str[i]-rev[i]!=0) 
{ 
break; 
} 
} 
if(str[i]=='\0' && rev[i]=='\0')  
cout<<"palindrome"<<endl; 
else cout<<"not a palindrome"<<endl; 
} 