#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int deg = 180 - n;
        if(360 % deg == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
