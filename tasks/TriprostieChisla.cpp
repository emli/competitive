#include <bits/stdc++.h>
#include <spcppl/numbers/primes.hpp>

using namespace std;

const int N = (int) 1e4 + 7;
int mod = 1e9 + 9;

int dp[2][1000];

class TriprostieChisla {
public:
    int n;

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> n;

        int answer = 0;
        int change = 1;
        vector<int> vector1 = allPrimes(1000);
        vector<int> primes;
        for (int x : vector1) {
            if (x >= 100) {
                primes.push_back(x);
            }
        }
        for (int len = n; len >= 3; --len) {
            for (int last3digits : primes) {
                int &res = dp[change][last3digits];
                if (len == n) {
                    res = 1;
                }
                if (len < n) {
                    int ans = 0;
                    for (int i = 1; i <= 9; ++i) {
                        int t = (last3digits * 10 + i) % 1000;
                        if (t >= 100)
                            ans = (ans + dp[1 - change][t]) % mod;
                    }
                    res = ans % mod;
                }
            }
            change = 1 - change;
        }
        for (int k : primes) {
            answer = (answer + dp[1 - change][k]) % mod;
            answer %= mod;
        }
        cout << answer << endl;
    }
};
