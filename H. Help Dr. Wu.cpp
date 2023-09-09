#include<bits/stdc++.h>
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long arr[100007];
int main()
{
    BOOST;
    int T;
    cin>> T;
    while(T--)
    {
        long long int N;
        int flag=0;
        cin>> N;
        for(int i=0; i < N; i++)
        {
            cin>>arr[i];
        }
        for(int i = N -1; i>=1; i--)
        {
            arr[i] = arr[i] - arr[i -1];
        }
        sort(arr, arr+N);
        for(int i = 0 ; i< N - 1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Lost"<<endl;
        }
        else if(flag==0)
        {
            cout<<"Won"<<endl;
        }
    }
    return 0;

}
