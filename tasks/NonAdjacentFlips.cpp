#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class NonAdjacentFlips {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ones = count(all(s),'1');

        vector<bool> used(n);

        int ans = 0;
        set<int> set;
        while (ones > 0) {
            int last = -1;
            for (int i = 0; i < n; ++i) {
                if (s[i] == '1' && !used[i] && (last == -1 || last + 1 != i)){
                    used[i] = true;
                    last = i;
                    set.insert(i);
                }
            }
            ans++;

            if (set.size() == ones){
                break;
            }
        }
        cout << ans << endl;
	}
};
