#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};

int k;
struct stack{
    vector<ll> s, smin,smax;

    void push(ll x){
        s.push_back(x);
        smin.push_back(smin.empty() ? x : ::min(smin.back(),x));
        smax.push_back(smax.empty() ? x : ::max(smax.back(),x));
    }
    ll pop(){
        ll res = s.back();
        smin.pop_back();
        smax.pop_back();
        s.pop_back();
        return res;
    }
    bool empty(){
        return s.empty();
    }
    ll min(){
        return smin.empty() ? LLONG_MAX : smin.back();
    }
    ll max(){
        return smax.empty() ? LLONG_MIN : smax.back();
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
    ll mx = max(s1.max(),s2.max());
    ll mn = min(s1.min(),s2.min());
    return mx - mn <= k;
}
class FOtrezkiSNebolshimRazbrosom {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int left = 0;
        ll ans = 0;
        for (int right = 0; right < n; ++right) {
            add(a[right]);

            while (!good()){
                remove();
                left++;
            }

            ans += right - left + 1;
        }

        cout << ans << endl;
	}
};

