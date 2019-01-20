#include <bits/stdc++.h>
#include "../../spcppl/spcppl/define.h"
using namespace std;

class CGrandGarden {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<bool> used(n + 1);
        vector<int> a(n + 1),b(n + 1);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0){
                used[i] = true;
            }
        }

        int l = -1;
        int r = -1;
        int ans = 0;
        while (true) {
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] != b[i]) {
                    ok = false;
                    l = i;
                    r = n - 1;
                    for (int j = i + 1; j < n; ++j) {
                        if (used[j]) {
                            r = j - 1;
                            break;
                        }
                    }
                    ans++;
                   // cout << "Range = " << l << " " << r << endl;
                    for (int k = l; k <= r; ++k) {
                        b[k]++;
                        if (b[k] == a[k]) {
                            used[k] = true;
                        }
                    }
                    break;
                }
            }
            if(ok){
                break;
            }
        }

        cout << ans << endl;
	}
};
