#include <bits/stdc++.h>

using namespace std;

int mod = (1e6);
const int N = 1e5 + 10;
int dp[N][3][5];
class Stakani {
public:
    int k;
    int go(int c, int s,int count) {
        int &res = dp[c][s][count];
        if (res != -1){
            return res;
        }
        if (c == k) {
            return res = 1;
        }
        int ans = 0;
        if (c < k) {
            for (int x : {0, 1}) {
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
                    ans += go(c + 10, x,1) % mod;
                }
            }
        }
        return res = ans % mod;
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> k;
        int x = 2;

        for (int c = k; c >= 0; --c) {
            for (int s = 0; s <= 1; ++s) {
                for (int count = 1; count <= 3; ++count) {
                    int &res = dp[c][s][count];
                    if (c == k) {
                        res = 1;
                        continue;
                    }
                    int ans = 0;
                    if (c < k) {
                        for (int x : {0, 1}) {
                            int temp = 0;
                            if (s == x) {
                                temp = count + 1;
                            }
                            if (temp == 4) {
                                continue;
                            }
                            if (s == x) {
                                ans += dp[c + 1][s][temp] % mod;
                            } else {
                                ans += dp[c + 10][x][1] % mod;
                            }
                        }
                    }
                    res = ans % mod;
                }
            }
        }
        cout << dp[0][x][0] << endl;
    }
};
