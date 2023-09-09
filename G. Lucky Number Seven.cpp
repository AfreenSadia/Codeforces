#include <bits/stdc++.h>
#define endl "\n"
#define BOOST   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define mod 1000000007

int main()
{
   long long n, t = 8, sum = 1;

   cin>>n;
   if(n <= 6)
        {
           cout<<1<<"\n";
       }
   while(t-1<n){
       sum = (sum + t-1)%mod;
       t = t*2;
   }
   cout<<sum<<"\n";
   return 0;
}
