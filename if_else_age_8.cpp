#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;

    cout<<"Enter age";
    cin>> age;
    if(age>=12 && age<=50)
       cout<<"young";
    else
       cout<<"not young";

    return 0;      
}