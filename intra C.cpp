#include <bits/stdc++.h>
#define endl "\n"
#define BOOST   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
bool check(int array[], int N)
{
    bool flag = 0;

    for(int i = 0; i < N - 1; i++)
    {
        if(array[i] != array[i + 1])
            flag = 1;
    }

    return flag;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
       long long int N;
        cin >> N;
        int arr[N];

        while(N!=0)
        {
            cin >> arr[N];
            N--;
        }

           if (check(arr,N))
        {

         cout <<"Lost"<< endl;
        }
        else
        {
            cout <<"Won"<< endl;
        }
    }
    return 0;
}
