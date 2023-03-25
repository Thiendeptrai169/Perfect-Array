#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
long long check[10];
int main()
{
    a[0] = 0;
    for (int i = 0; i <= 9 ; i++) check[i] = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int y;
        cin >> y;
        if (check[y] == 0)
        {
            check[y] = 1;
            a[i] = a[i-1] ;
        }
        else
        {
            a[i] = a[i-1] + check[y];
            check[y] ++ ;
        }
    }
    cout << a[n] ;
    return 0;
}
