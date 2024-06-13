#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int power = 0;
    while(n>0)
    {
        int bit = n%2;
        count = count + bit*pow(10,power);
        power++;
        n = n/2;
    }
    cout<<count<<endl;

    return 0;
}