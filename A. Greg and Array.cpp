#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
const int N = 1e5 + 128;
ll a[N], d[N], op[N];
int l[N], r[N], x[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, q; cin >> n >> m >> q;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        d[i] = a[i] - a[i - 1];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> x[i];
    }
    while(q--)
    {
        int l, r; cin >> l >> r;
        op[l]++;
        op[r + 1]--;
    }
    for(int i = 1; i <= m; i++)
    {
        op[i] += op[i - 1];
    }
    for(int i = 1; i <= m; i++)
    {
        d[l[i]] += x[i] * op[i];
        d[r[i] + 1] -= x[i] * op[i];
    }
    for(int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
        cout << d[i] << ' ';
    }
    return 0;
}
