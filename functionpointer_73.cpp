#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display()
{

    cout<<"Hello";
}

int main()
{
void(*fp)();
fp=display;
(*fp)();

}
