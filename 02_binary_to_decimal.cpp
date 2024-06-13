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
        int lastDigit = n%10;
        count = count + lastDigit*pow(2,power);
        power++;
        n = n/10;
    }
    cout<<count<<endl;

    return 0;
}

