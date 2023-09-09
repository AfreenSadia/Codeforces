#include <bits/stdc++.h>
using namespace std;

bool make_equal(int a[], int n)
{
for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        a[i] /= 2;
        while (a[i] % 3 == 0)
        a[i] /= 3;
    }
    for (int i = 1; i < n; i++)
        if (a[i] != a[0])
         {
             return false;
         }
         return true;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
        {
            int a[15], n, i;
            cin>>n;
            for(i=0; i<n; i++)
            cin>>a[i];
            if (make_equal(a, n))
              cout << "lost";
            else
                cout << "won";

        }
            return 0;

}
