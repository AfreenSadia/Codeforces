#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,count=0;
    cin >> n >> x;
    int lo=1,hi=n,mid;
    while(hi-lo>=1)
        {
            count++;
            mid=(hi+lo)/2;
            if(mid<x)
                {
                    lo = mid+1;
                }
            else
                {
                    hi = mid;
                }
        }
        cout << count;
        return 0;
}
