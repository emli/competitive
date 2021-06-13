#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DKthExcluded {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n,q;

        cin >> n >> q;

        vector<ll> a(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        vector<ll> prefixSum = {a[1] - 1};

        sort(all(a));

        for (ll i = 1; i < n; ++i) {
            prefixSum.push_back(prefixSum[i - 1] + (a[i + 1] - a[i] - 1));
        }

        vector<ll> t = {0};

        t.insert(t.end(), prefixSum.begin(), prefixSum.end());

        prefixSum = t;

        for(int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < prefixSum.size(); ++i) {
            cout << prefixSum[i] << " ";
        }

        cout << endl;
        for (int i = 0; i < q; ++i) {
            ll k;
            cin >> k;
            cout << "k = " << k << endl;
            ll left = -1;
            ll right = n - 1;

            while(left + 1 < right){
                ll m = (left + right) / 2;

                if (prefixSum[m] < k){
                    left = m;
                }else {
                    right = m;
                }
            }

            cout << "left = " << left << endl;
        }

    }
};

//3 5 6 7
