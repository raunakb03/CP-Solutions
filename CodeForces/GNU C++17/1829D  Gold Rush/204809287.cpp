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
    ll n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << "YES" << endl;
        return;
    }
    if (n % 3 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    set<ll> st;
    set<ll> st1;
    st.insert(n);
    while (true)
    {
        for (auto c : st)
        {
            if (c % 3 == 0)
            {
                ll a = c / 3;
                ll b = 2 * c / 3;
                // cout << a << " " << b << endl;
                if (a == m || b == m)
                {
                    cout << "YES" << endl;
                    return;
                }
                if (a > m)
                {
                    st1.insert(a);
                }
                if (b > m)
                {
                    st1.insert(b);
                }
            }
        }
        if (st.si == 0)
        {
            cout << "NO" << endl;
            return;
        }
        st = st1;
        st1.clear();
    }
    cout << "NO" << endl;
    return;
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