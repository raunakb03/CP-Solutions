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
    ll a, b;
    cin >> a >> b;
    vll v(a * b);
    rv(v);
    ll mini = 1e9, maxi = -1e9;
    ll smini = 1e9, smaxi = -1e9;
    map<ll, ll> mp;
    for (auto c : v)
        mp[c]++;
    for (auto c : v)
    {
        mini = min(mini, c);
        maxi = max(maxi, c);
    }
    mp[maxi]--;
    mp[mini]--;
    for (auto c : v)
    {
        if (mp[c])
            smini = min(smini, c);
        if (mp[c])
            smaxi = max(smaxi, c);
    }
    ll ans1 = 0, ans2 = 0;
    ll row = max(a, b);
    ll col = min(a, b);
    ll nterms = a * b - 1;

    // check for max ele at the top
    ans1 = (col - 1) * (maxi - smini) + (nterms - (col - 1)) * (maxi - mini);
    // check for min ele at the top
    ans2 = (col - 1) * (smaxi - mini) + (nterms - (col - 1)) * (maxi - mini);
    cout << max(ans1, ans2) << endl;
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