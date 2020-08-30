#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class KObmenSosednikhElementov {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        int l = -1;
        int len = 1;
        s.push_back('0');

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1' && l == -1){
                l = i;
            }else if (s[i] == '1'){
                len++;
            }else if (l != -1){
                sort(a.begin() + l,a.begin() + l + len + 1);
                l = -1;
                len = 1;
            }
        }

        if (is_sorted(all(a))){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
