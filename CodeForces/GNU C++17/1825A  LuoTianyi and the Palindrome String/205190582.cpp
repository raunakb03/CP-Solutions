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
void solve()
{
    string s;
    cin >> s;
    int isPali = 0, other = 0;
    string st = s;
    reverse(all(st));
    if (st == s)
        isPali = 1;
    foi(i, 0, s.si - 1)
    {
        if (s[i] != s[i + 1])
        {
            other = 1;
            break;
        }
    }
    if (!other)
    {
        cout << -1 << endl;
        return;
    }
    if (isPali)
        cout << s.si - 1 << endl;
    else
        cout << s.si << endl;
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
