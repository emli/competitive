#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class GOtsortirovannieRaznostiSosednikh {
public:
    static void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        int l = 0;
        int r = n - 1;

        vector<int> ans;
        while (l < r){
            ans.push_back(a[l++]);
            ans.push_back(a[r--]);
        }

        if (l == r){
            ans.push_back(a[l++]);
        }
        reverse(all(ans));

        for (int an : ans) {
            cout << an << " ";
        }
        cout << endl;
    }
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
