#include <bits/stdc++.h>

using namespace std;

int mod = static_cast<int>(1e6);
const int N = 1e5 + 10;
int dp[N][256][5];
class Stakani {
public:
    int k;

    string lastFourLetter(string s) {
        if (s.length() <= 4) {
            return s;
        }
        return s.substr(s.size() - 4);
    }
    int go(int c, char s,int count) {
        cout << count << endl;
        int &res = dp[c][s][count];
        if (res != -1){
            return res;
        }
        if (c == k) {
            return res = 1;
        }
        int ans = 0;
        if (c < k) {
            for (char x : {'A', 'B'}) {
                int temp = 0;
                if (s == x){
                    temp = count + 1;
                }
                if (temp == 4) {
                    continue;
                }
                if (s == x) {
                    ans += go(c + 1, s,temp) % mod;
                } else {
                    ans += go(c + 10, s,temp) % mod;
                }
            }
        }
        return res = ans % mod;
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> k;
        char x = 0;
        memset(dp,-1, sizeof(dp));
        cout << go(0, x,0) << endl;
    }
};
