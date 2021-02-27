#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};

struct stack{
    vector<ll> s, g = {0};

    void push(ll x){
        s.push_back(x);
        g.push_back(g.empty() ? x : ::__gcd(g.back(),x));
    }
    ll pop(){
        ll res = s.back();
        g.pop_back();
        s.pop_back();
        return res;
    }
    bool empty(){
        return s.empty();
    }
    ll gcd(){
        return g.back();
    }
};

::stack s1,s2;

void add(ll x){
    s2.push(x);
}
void remove(){
    if (s1.empty()){
        while (!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

bool good(){
    ll x = s1.gcd();
    ll y = s2.gcd();
    return __gcd(x,y) == 1;
}

class GVzaimnoProstoiOtrezok {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n;

        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll left = 0;
        ll ans = LLONG_MAX;
        for (ll right = 0; right < n; ++right) {
            add(a[right]);

            while (good()){
                remove();
                ans = min(ans,right - left + 1);
                left++;
            }

        }

        if (ans == LLONG_MAX){
            cout << -1 << endl;
        }else {
            cout << ans << endl;
        }
	}
};
