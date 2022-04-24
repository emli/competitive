#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class HMaksimalniiAND {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 30; i >= 0; --i) {
            int c = 0;
            for (int j = 0; j < n; ++j) {
                if (!(a[j] & (1 << i))){
                    c++;
                }
            }

            if (c <= k){
                for (int j = 0; j < n; ++j) {
                    if (!(a[j] & (1 << i))){
                        c++;
                        a[j] |= 1UL << i;
                        k--;
                    }
                }
            }
        }

        ll ans = a[0];
        for (int i = 0; i < n; ++i) {
            ans &= a[i];
        }

        cout << ans << endl;
    }
};
