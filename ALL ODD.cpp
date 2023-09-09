#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }

int main()
{
    int tc,n;

    cin>>tc;

    while(tc--)
    {
        cin >> n;
        ++n;
        cout<< n;
    }

    return 0;
}


