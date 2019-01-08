#include <bits/stdc++.h>
using namespace std;

int inf = INT_MAX / 2;
class APutDomoi {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        s = "#" + s;
        vector<int> minSum(n + 1,inf);

        bool first = true;
        int ans = -inf;
        for (int i = 1; i <= n; ++i) {
            if (s[i] == '0'){
                continue;
            }
            if (first){
                minSum[i] = 0;    
                first = false;
            }
            for (int j = max(1,i - k); j < i; ++j) {
                if (s[j] == '0') {
                    continue;
                }
                minSum[i] = min(minSum[j] + 1,minSum[i]);
            }
            ans = max(ans,minSum[i]);
        }
        if (minSum[n] == inf){
            cout << -1 << endl;
        }else {
            cout << minSum[n] << endl;
        }
	}
};
