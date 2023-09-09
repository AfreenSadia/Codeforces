#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int count=0;
    while(n--)
    {
        if(n%10==1||n%10==7)
        {
            count++;
        }
        n = n/10;
    }
    if(count==1 || count==7)
        cout<< n;
    return 0;
}
