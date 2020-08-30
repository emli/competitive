#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DTaksistiILyft {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;

        cin >> n >> m;

        vector<int> a(n + m),b(n + m);

        vector<int> taxi;

        for (int i = 0; i < n + m; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n + m; ++i) {
            cin >> b[i];
            if (b[i]){
                taxi.push_back(i);
            }
        }

        if(taxi.empty()){
            return;
        }

        vector<int> ans(m);

        for (int i = 0; i < taxi[0]; ++i) {
            ans[0]++;
        }

        for (int i = taxi.back() + 1; i < n + m; ++i) {
            ans[m - 1]++;
        }

        int pos = 0;

        for (int i = 0; i + 1 < taxi.size(); ++i) {
            int l = taxi[i];
            int r = taxi[i + 1];

            for (int j = l + 1; j < r; ++j) {
                if (abs(a[j] - a[l]) <= abs(a[j] - a[r]) ){
                    ans[pos]++;
                }else {
                    ans[pos + 1]++;
                }
            }
            pos++;
        }

        for (int i = 0; i < m; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
	}
};
