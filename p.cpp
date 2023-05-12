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

// 0 0 0 1
// 0 0 0 0 0 1

void solve()
{
    int a, b, c, d, x, y, x1, y1, x2, y2, xx, yy;
    cin >> a >> b >> c >> d;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    xx = x, yy = y;
    x += -a + b, y += -c + d;
    if (x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x2 > x1 || a + b == 0) && (y2 > y1 || c + d == 0))
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No"<<endl;
    }
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