#include <bits/stdc++.h>
#include <spcppl/numbers/primes.hpp>

using namespace std;

const int N = (int) 1e4 + 7;
int mod = 1e9 + 9;

int dp[N][1000];

class TriprostieChisla {
public:
    int n;

    int go(int len, int last3digits) {
        int &res = dp[len][last3digits];
        if (res != -1) {
            return res;
        }
        if (len == n) {
            return res = 1;
        }
        if (len < n) {
            int ans = 0;
            for (int i = 1; i <= 9; ++i) {
                int t = (last3digits * 10 + i) % 1000;
                if (isPrime(t) && t >= 100) {
                    ans += go(len + 1, t) % mod;
                }
            }
            return res = ans;
        }
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> n;

        int answer = 0;
        memset(dp, -1, sizeof(dp));
        for (int i = 100; i < 1000; ++i) {
            if (isPrime(i)) {
                for (int len = n; len >= 0; --len) {
                    for (int last3digits = 100; last3digits <= 999; ++last3digits) {
                        int &res = dp[len][last3digits];
                        if (len == n) {
                            res = 1;
                        }
                        if (len < n) {
                            int ans = 0;
                            for (int i = 1; i <= 9; ++i) {
                                int t = (last3digits * 10 + i) % 1000;
                                if (isPrime(t) && t >= 100) {
                                    ans += dp[len + 1][t] % mod;
                                }
                            }
                            res = ans;
                        }
                    }
                }
            }
            answer += dp[3][i] % mod;
        }
        cout << answer << endl;
    }
};
