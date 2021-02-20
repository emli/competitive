#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BUNrEaDaBlESTrInG {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i += 2) {
                if (isupper(s[i])){
                    cout << "No" << endl;
                    return;
                }
        }

        for (int i = 1; i < s.size(); i += 2) {
            if (islower(s[i])){
                cout << "No" << endl;
                return;
            }
        }

        cout << "Yes\n";
	}
};
