#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class COcherednayaZadachaProKresti {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;
        vector<int> row(n + 1);
        vector<int> column(m + 1);


        int ans = n + m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char x;
                cin >> x;
                
                ans = min(ans,row[i] + column[j] - (x == '.'));
            }

        }

        cout << ans << endl;


    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int q;
        cin >> q;
        while (q--){
            run(cin,cout);
        }
	}
};
