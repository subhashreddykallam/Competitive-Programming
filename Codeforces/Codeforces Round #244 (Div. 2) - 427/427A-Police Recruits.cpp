/* I feel the need... the need for speed. */
#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define append_left push_front
# define append push_back
# define pop_left pop_front
# define pop pop_back
# define add insert
# define loop(i, k, n, inc) for(ll i = k; i < n; i+=inc)
# define rloop(i, k, n, inc) for(ll i = k; i > n; i+=inc)
# define printlist(a) {for(auto i : a){cout<<i<<' '; cout<<'\n';}}
int main(){
    ios_base::sync_with_stdio(false);
    ll n, x; cin>>n;
    ll ans = 0, staff = 0;
    loop(i, 0, n, 1){
        cin>>x;
        if (x == -1){
            if (staff) staff--;
            else ans++;
        }
        else staff+=x;
    }
    cout<<ans<<"\n";
    return 0;
}