#include <bits/stdc++.h>
#include <spcppl/numbers/primes.hpp>

using namespace std;

const int N = (int) 1e4 + 7;
int mod = 1e9 + 9;

int dp[N][1000];

class TriprostieChisla {
public:
    int n;

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> n;

        int answer = 0;
        int change = 1;
        for (int k = 100; k < 1000; ++k) {
            if (isPrime(k)) {
                for (int len = n; len >= 3; --len) {
                    for (int last3digits = 100; last3digits <= 999; ++last3digits) {
                        int &res = dp[change][last3digits];
                        if (len == n) {
                            res = 1;
                        }
                        if (len < n) {
                            int ans = 0;
                            for (int i = 1; i <= 9; ++i) {
                                int t = (last3digits * 10 + i) % 1000;
                                if (isPrime(t) && t >= 100) {
                                    ans += dp[1 - change][t] % mod;
                                }
                            }
                            res = ans;
                        }
                    }
                    change = 1 - change;
                }
                answer += dp[1 - change][k] % mod;
            }
        }
        cout << answer << endl;
    }
};
