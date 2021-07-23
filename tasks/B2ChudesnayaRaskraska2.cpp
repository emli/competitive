#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class B2ChudesnayaRaskraska2 {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int tests;
        cin >> tests;

        while (tests--) {
            int n, k;

            cin >> n >> k;

            vector<int> a(n);

            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }

            unordered_map<int, int> map;

            for (int x : a) {
                map[x]++;
            }

            vector<pair<int, int>> v;
            for (int i = 1; i <= 2 * 100000; ++i) {
                v.emplace_back(map[i], i);
            }

            sort(v.rbegin(), v.rend());

            int ans = 0;

            vector<bool> used(n);
            vector<int> color;

            for (int i = 0; i < v.size(); ++i) {
                if (v[i].first >= k) {
                    v[i].first -= k;
                    ans++;
                    used[i] = true;
                }
            }

            int len = 0;
            for (int i = 0; i < v.size(); ++i) {
                if (!used[i] && v[i].first >= 1) {
                    len++;
                }
            }
            ans += len / k;

            cout << ans << endl;
        }
    }
};
