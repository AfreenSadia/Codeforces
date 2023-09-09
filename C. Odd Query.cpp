#include<bits/stdc++.h>
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define mod 1000000007
int ar[100007];
int n, q;
int dp[100007] [3];
int rec(int st, int rem)
{
    if (st == n+1)
    {
        return rem;
    }
    if (dp[st][rem] != -1)
    {
        return dp[st][rem];
    }
    int ans = 0;
    ans += rec(st + 1, rem);
    ans %= mod;
    ans += rec(st + 1, (rem + ar[st]) % 2);
    ans %= mod;
    dp[st][rem] = ans;
    return ans;
}
int main()
{
    BOOST;
    memset(dp, -1, sizeof dp);
    cin>>n>>q;
    for(int i = 1; i<=n; i++)
    {
        cin>>ar[i];
    }
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        ar[x]=y;
    }
    cout<<rec(1, 0)%mod<<"\n";
    return 0;
}
