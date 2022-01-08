#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BStranniiSpisok {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,x;
        cin >> n >> x;
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = 1;
        }

        for (int i = 0; i < a.size(); ++i) {
            if (a[i].first % x != 0){
                break;
            }
            a.emplace_back(a[i].first / x, a[i].second * x);
        }

        ll ans = 0;
        for(pair<int,int> p : a){
            ans += p.first * p.second;
        }

        cout << ans << endl;


	}
};
