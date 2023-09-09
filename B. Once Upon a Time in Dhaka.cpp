#include<bits/stdc++.h>
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
int main()
{
    BOOST;
    int T;
    double emptySpace, W, G;
    cin>> T;
    while(T--)
    {

        cin>>W>>G;
        emptySpace =(W-G)/2.0;
        cout<<fixed<<setprecision(4)<<emptySpace<<endl;
    }
    return 0;
}
