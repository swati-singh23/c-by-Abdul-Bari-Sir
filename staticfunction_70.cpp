#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun()
{
    static int s=10;
    s++;
    cout<<s<<endl;
}
int main()
{
    fun();
    fun();

    return 0;

}