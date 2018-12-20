#include <bits/stdc++.h>

using namespace std;

int mod = (1e6);
class Stakani {
public:
    int k;
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> k;
        int x = 2;

        vector<vector<vector<int>>> count(k + 11, vector<vector<int>>(3, vector<int>(4)));
        for (int c = k; c >= 0; --c) {
            for (int s = 0; s <= 2; ++s) {
                for (int t = 0; t <= 3; ++t) {
                    int &res = count[c][s][t];
                    if (c == k) {
                        res = 1;
                    }
                    int ans = 0;
                    if (c < k) {
                        for (int i = 0; i < 2; i++) {
                            int temp = 0;
                            if (s == i) {
                                temp = t + 1;
                            }
                            if (temp == 4) {
                                continue;
                            }
                            if (s == i) {
                                ans += count[c + 1][s][temp] % mod;
                            } else {
                                ans += count[c + 10][i][1] % mod;
                            }
                        }
                        res = ans % mod;
                    }
                }
            }
        }
        cout << count[0][x][0] << endl;
    }
};
