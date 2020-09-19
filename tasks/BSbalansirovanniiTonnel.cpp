#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BSbalansirovanniiTonnel {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);


        int n;
        cin >> n;

        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<bool> used(n + 1);

        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (!used[b[j]]){
                if (a[i] == b[j]){
                    j++;
                }else {
                    ans++;
                }
                used[a[i]] = true;
            }
        }

        cout << ans << endl;
	}
};
