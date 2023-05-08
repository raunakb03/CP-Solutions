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
    string s;
    cin >> s;
    ll ones = 0;
    ll cnt = 0;
    foi(i, 0, s.si)
    {
        if (!i && s[i] == '1')
            cnt++;
        else if (s[i] == '0')
        {
            ones = max(ones, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    ones = max(ones, cnt);
    cnt = 0;
    if (ones != s.si)
    {
        foi(i, 0, s.si)
        {
            if (s[i] == '0')
                break;
            cnt++;
        }
        for (ll i = s.si - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            cnt++;
        }
    }
    ones = max(ones, cnt);
    ll n = s.si;
    if (ones == n)
    {
        cout << n * n << endl;
        return;
    }
    ones++;
    ll length = (ones + 1) / 2;
    ll breadth = ones - length;
    cout << length * breadth << endl;
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