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
    ll n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    map<char, ll> mc;
    for (auto c : s2)
        mc[c]++;
    sort(all(s1));
    for (char i = 'a'; i <= 'z'; i++)
    {
        ll cnt = 0;
        for (auto c : s1)
        {
            if (c == i)
                cnt++;
        }
        if (cnt == mc[i])
            continue;
        ll diff = cnt - mc[i];
        if ((cnt-mc[i]) % k != 0 || diff < 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (i == 'z' && diff > 0)
        {
            cout << "NO" << endl;
            return;
        }
        ll ind = 0;
        while (diff-- && i != 'z')
            s1[ind++] = i + 1;
    }
    cout << "YES" << endl;
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