# include<bits/stdc++.h>
# include<unordered_map>
# include<unordered_set>
using namespace std;
# define ll long long
// # define ll int
# define vll vector<ll>
# define vvll vector<vector<ll> >
# define vchar vector<char>
# define vstr vector<string>
# define vpll vector<pair<ll, ll> >
# define mll map<ll, ll>
# define sll set<ll>
# define usll unordered_set<ll>
# define schar set<char>
# define pll pair<ll, ll>
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define popb pop_back
# define add insert
# define all(v) v.begin(), v.end()
# define rall(v) v.rbegin(), v.rend()
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
vll vin(ll n){vll a(n);loop(i, 0, n, 1) cin>>a[i];return a;}
ll intin() {ll n; cin>>n; return n;}
char charin(){char a; cin>>a; return a;}
string strin(){string s; cin>>s; return s;}
ll factorial(ll n){return (n==1 || n==0) ? 1: n * factorial(n - 1);}
vll bits(ll n){
    vll b;
    while (n){
        b.append(n%2);
        n/=2;
    }
    return b;
}
void solve(){
    ll n, k, x; cin>>n>>k;
    ll sum = 0;
    mll m;
    loop(i, 0, k, 1){
        cin>>x;
        m[x]++;
        sum+=x;
    }
    if (n > sum){
        cout<<-1<<endl;
        return;
    }
    vll b = bits(n);
    ll count = 0, val = 1;
    loop(i, 0, b.size(), 1){
        if (b[i]){
            if (m[val] > 0) m[val]--;
            else{
                ll curr = val;
                while (m[curr] == 0) curr*=2;
                while (curr!=val){
                    count+=1;
                    m[curr]--;
                    m[curr/2]+=2;
                    curr/=2;
                }
                m[val]--;
            }
        }
        while (m[val] > 1){
            m[2*val]++;
            m[val]-=2;
        }
        val*=2;
    }
    cout<<count<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
    loop(i, 0, t, 1){
        solve();
    }
    return 0;
}
