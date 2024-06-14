#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    int power = 1;
    while(n>0)
    {
        int bits = n%16;
        count += bits*power;
        power*=10;
        n/=16;
    }
    cout<<count<<endl;
}