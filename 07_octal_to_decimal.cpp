#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int power = 1;
    while(n>0)
    {
        int bits = n%10;
        count += bits*power;
        power*=8;
        n/=10;
    }
    cout<<count<<endl;
}