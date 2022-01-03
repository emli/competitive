#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BPlokhieTseni {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int mn = a.back();

        int ans = 0;
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > mn){
                ans++;
            }
            mn = min(mn, a[i]);
        }

        cout << ans << endl;
	}
};
