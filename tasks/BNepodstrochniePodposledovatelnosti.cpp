#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BNepodstrochniePodposledovatelnosti {
public:
    string solve(string &s,int l,int r,int n){
        for (int i = 0; i < l; ++i) {
            if (s[i] == s[l]){
                return "YES";
            }
        }

        for (int i = r + 1; i < n; ++i) {
            if (s[i] == s[r]){
                return "YES";
            }
        }
        return "NO";
    }
    void run(std::istream& cin, std::ostream& cout) {
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 0; i < q; ++i) {
            int l,r;
            cin >> l >> r;
            cout << solve(s,l - 1, r - 1,n) << endl;
        }

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


