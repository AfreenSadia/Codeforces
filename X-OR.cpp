#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;

    while(n--)
        { int a, b;
     cin>>a>>b;

    if((a^b)==(a+b))
        {
         cout<<"No"<<endl;
        }
    else
    {
      cout<<"Yes"<<endl;
    }

}
return 0;
}

