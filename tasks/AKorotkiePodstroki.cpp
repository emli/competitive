#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class AKorotkiePodstroki {
public:
    void run(std::istream& cin, std::ostream& cout){
        string s;
        cin >> s;
        string ans;
        for(int i = 0; i < s.length(); i++){
            if (i == 0 || i == s.length() - 1){
               ans.push_back(s[i]);
            }else {
                ans.push_back(s[i]);
                i++;
            }
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
