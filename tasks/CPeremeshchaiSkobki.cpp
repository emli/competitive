#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CPeremeshchaiSkobki {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        string s;
        cin >> n >> s;

        int cur = 0;
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '('){
                cur++;
            }else if (cur > 0){
                cur--;
            }
        }
        cout << cur << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
