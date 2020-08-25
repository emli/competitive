#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class APokhozhieStroki {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;

        int pos = 0;
        string ans;
        for (int i = 0; i <= s.size() - n; ++i) {
            ans.push_back(s.substr(i,n)[pos++]);
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;

        cin >> t;

        while (t--){
            run(cin,cout);
        }

	}
};
