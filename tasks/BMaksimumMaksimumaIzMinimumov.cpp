#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

class BMaksimumMaksimumaIzMinimumov {
public:
    static void solve(std::istream &cin, std::ostream &cout) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (k == 1) {
            cout << *min_element(all(a)) << endl;
        }else if (k == 2) {
            vector<int> minLeft(n), minRight(n);

            for (int i = 0; i < n; ++i) {
                if (i == 0) {
                    minLeft[i] = a[i];
                }else {
                    minLeft[i] = min(minLeft[i - 1], a[i]);
                }
            }

            for (int i = n - 1; i >= 0; --i) {
                if (i == n - 1) {
                    minRight[i] = a[i];
                }else {
                    minRight[i] = min(minRight[i + 1], a[i]);
                }
            }

            int ans = INT_MIN;
            for (int i = 0; i < n - 1; ++i) {
                ans = max(ans,max(minLeft[i],minRight[i + 1]));
            }
            cout << ans << endl;
        }else {
            cout << *max_element(all(a)) << endl;
        }
    }
};
