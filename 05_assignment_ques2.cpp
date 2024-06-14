#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int power = 1;
    int sum=0;
    while(n>0)
    {
        int bit = n%2;
        if(bit==0)
        {
            sum++;
        }
        count += bit*power;
        power*=10;
        n/=2;
    }
    cout<<count<<endl<<sum<<endl;
}