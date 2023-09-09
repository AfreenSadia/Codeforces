#include <bits/stdc++.h>
using namespace std;

void recursion(int[],int k)
{
    int z;
    while(k>0)
    {
        z=k-1;
        recursion(a[],z);
        cout<< a[k]<<endl;
    }

}
int main()
{
    int n,i;
    cin>> n>>endl;

}
