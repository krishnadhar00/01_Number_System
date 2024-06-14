#include<iostream>
using namespace std;
int conversionNumber(int n)
{
    int count=0;
    int power=1;
    while(n>0)
    {
        int bits = n%10;
        count = count + bits*power;
        power*=2;
        n/=10;
    }
    return count;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a = conversionNumber(n1);
    int b = conversionNumber(n2);
    if(a>b)
    {
        cout<<a<<endl;
    }
    else 
    {
        cout<<b<<endl;
    }


}