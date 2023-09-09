#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<int> a(n);
      int c=0; bool c1=false;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]%2) c1=true;
        else c++;
      }

      if(!c1) cout<<"-1"<<endl;
      else cout<<c<<endl;
    }

  return 0;
}

