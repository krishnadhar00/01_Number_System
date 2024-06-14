#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum+=i;
    }
    int count = 0;
    int power = 1;
    while(sum>0)
    {
        int bit = sum%2;
        count += bit*power;
        power*=10;
        sum /= 2;
    }
    cout<<count<<endl;
}