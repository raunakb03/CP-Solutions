#include <bits/stdc++.h>
using namespace std;
/////////////////////////////////////////DEFINE//////////////////////////////////////////
 
#define si size()
#define fi first
#define se second
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define foi(i, a, b) for (ll i = a; i < b; i++)
#define ps(x, y) fixed << setprecision(y) << x;
 
typedef long long int ll;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef map<long long, long long> mll;
typedef vector<pair<long long, long long>> vpll;
 
////////////////////////////////////////CONST////////////////////////////////////////////
 
const int inf = 0x3f3f3f3f;
const int maxn = 2e6 + 6;
const double eps = 1e-8;
const int mod = 1000000007;
const int N = 10e2 + 5;
const double pi = 3.14159265358979;
 
///////////////////////////////////////FUNCTION//////////////////////////////////////////
void rv(vll &v)
{
    for (auto &c : v)
        cin >> c;
}
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    rv(v);
    ll cnt = 0;
    ll ans = 0;
    foi(i, 0, n)
    {
        if (!i && v[i] == 0)
            cnt++;
        else if (v[i] == 0 && v[i - 1] == 0)
            cnt++;
        else if (v[i] == 0 && v[i - 1] == 1)
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}