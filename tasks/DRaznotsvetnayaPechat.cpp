#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DRaznotsvetnayaPechat {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;

        string p;

        for (char i : s) {
            if (p.empty()){
                p.push_back(i);
            }else if (p.back() != i){
                p.push_back(i);
            }
        }
        s = p;

        string answer = "YES\n";
        for (int i = 0; i < n; ++i) {
            vector<char> set;
            if ((s[i] == 'B' || s[i] == 'R')){
                if (i - 1 >= 0){
                    set.push_back(s[i - 1]);
                }
                if (i + 1 < n){
                    set.push_back(s[i + 1]);
                }

                bool ok = false;
                for (char j : set) {
                    if (j == 'R' || j == 'B'){
                        ok = true;
                    }
                }
                if (!ok && answer == "YES\n"){
                    answer = "NO\n";
                }
            }
        }
        cout << answer;
	}
};
