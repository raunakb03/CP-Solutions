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
 
// ll gcdNo(ll a, ll b){if(b==0)return a;  return gcdNo(b,a%b);}//[Time complexity O(log a) types(if b=2)]
// ll lcmNo(ll a, ll b){ll g=gcdNo(a,b);return(a*(b/g));}
// ll bs_sqrt(ll x) {ll left = 0, right = 2000000123;while (right > left) {ll mid = left+ ( right - left ) / 2;if (mid * mid > x) right = mid;else left = mid + 1;}return left - 1;}
// ll power(ll a, ll b){if(b==0) return 1; ll res=power(a, b/2);if(b&1)return (a*((res*res)%MOD))%MOD;else return (res*res)%MOD;}//[Time complexity O(log b)] Recursion methord
// ll powerIt(ll a, ll b){ll ans=1; while(b){if(b&1)ans=(ans*a)%MOD;a=(a*a)%MOD;b>>=1;} return ans;}//Better time complexity than recursive methord.
// ll computeXOR(ll n){if(n%4==0)return n; if(n%4==1)return 1; if(n%4==2)return n+1;return 0;}
// const int N = 1e6 + 6;vector<ll> isprime(N,1);vector<ll>sprime;void sieve(ll n){isprime[0]=isprime[1]=0;for(ll i=2;i<=n;i++){if(isprime[i]){sprime.pb(i);for(int j=i*i;j<=n;j+=i)isprime[j]=0;}}}
// ll spf[MAXN];void sievePF(){spf[1] = 1;for (ll i=2; i<MAXN; i++)spf[i] = i;for (ll i=4; i<MAXN; i+=2)spf[i] = 2;for (ll i=3; i*i<MAXN; i++){if (spf[i] == i){for (ll j=i*i; j<MAXN; j+=i)if (spf[j]==j)spf[j] = i;}}}vector<ll> getFactorization(ll x){vector<ll> ret;while (x != 1){ret.push_back(spf[x]);x = x / spf[x];}return ret;}
// ll cntSB(ll n){ll cnt=0;while(n){if(n%2)cnt++;n=n/2;}return cnt;}
//  class DisjointSet{public:vector<ll>rank , parent ,size;DisjointSet(ll n){rank.resize(n+1,0);parent.resize(n+1);size.resize(n+1);for(ll i=0;i<=n;i++){parent[i]=i;size[i]=1;}}ll findPar(ll node){if(node == parent[node]){return node;}return parent[node] = findPar(parent[node]);}void unionByRank(ll u, ll v){ll p_u = findPar(u);ll p_v = findPar(v);if(p_u == p_v){return;}if(rank[p_u] < rank[p_v]){parent[p_u] = p_v;}else if(rank[p_u] > rank[p_v]){parent[p_v] = p_u;}}void unionBySize(ll u , ll v){ll p_u = findPar(u);ll p_v = findPar(v);if(p_u == p_v){return;}if(size[p_u] < size[p_v]){parent[p_u] = p_v;size[p_v] += size[p_u];}else{parent[p_v] = p_u;size[p_u] += size[p_v];}}};//DisjointSet ds(28);for size of the graph. ds.findPar(n) for finding ultimate parent . ds.unionBySize(v[i],j); for linking the two nodes
// bool comp(string a, string b) { return a.size() > b.size(); }
// bool decO(ll a,ll b){ return a > b; }
// ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 10; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
// ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return mod_add(arr[0], 0, b);} //for non prime b
// ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
// bool revsort(ll a, ll b) {return a > b;}
// ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
 
void rv(vll &v)
{
    for (auto &c : v)
        cin >> c;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vll v(n);
    rv(v);
    sort(all(v));
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ind = lower_bound(all(v), b) - v.begin();
        ll temp = 4 * a * c;
        if (ind >= 0 && ind < n && pow(b - v[ind], 2) < temp)
        {
            cout << "YES" << endl;
            cout << v[ind] << endl;
            continue;
        }
        else if (ind - 1 >= 0 && pow(b - v[ind - 1], 2) < temp)
        {
            cout << "YES" << endl;
            cout << v[ind - 1] << endl;
            continue;
        }
        else if (ind + 1 < n && pow(b - v[ind + 1], 2) < temp)
        {
            cout << "YES" << endl;
            cout << v[ind + 1] << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
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