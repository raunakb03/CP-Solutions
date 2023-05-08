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
void f(ll i, ll j, vector<vector<ll>> &vis, vector<vector<ll>> &v, ll &curr)
{
    vis[i][j] = 1;
    curr += v[i][j];
    ll dr[] = {-1, 1, 0, 0};
    ll dc[] = {0, 0, -1, 1};
    foi(k, 0, 4)
    {
        ll row = i + dr[k];
        ll col = j + dc[k];
        if (row >= 0 && col >= 0 && row < v.si && col < v[0].si && v[row][col] && !vis[row][col])
        {
            f(row, col, vis, v, curr);
        }
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    foi(i, 0, n)
    {
        foi(j, 0, m)
        {
            cin >> v[i][j];
        }
    }
    ll ans = 0;
    ll curr = 0;
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    foi(i, 0, n)
    {
        foi(j, 0, m)
        {
            if (!vis[i][j] && v[i][j])
            {
                curr = 0;
                f(i, j, vis, v, curr);
                ans = max(ans, curr);
            }
        }
    }
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