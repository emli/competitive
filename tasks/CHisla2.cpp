#include <bits/stdc++.h>
#include <spcppl/numbers/BigInteger.hpp>

using namespace std;

#define ll long long
#define all(x) (x).begin(),(x).end()

const int INF = INT_MAX / 2;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

ll n, c, k;
BigInteger mod = BigInteger(1);
string s;
const int N = 50005;
BigInteger dp[N];

class CHisla2 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cin >> n >> c >> k >> s;

        for (int i = 0; i < k; ++i) {
            mod *= 10;
        }
        for (auto &i : dp) {
            i = BigInteger("-1");
        }

        for (int pos = static_cast<int>(s.length()); pos >= 0; --pos) {
            BigInteger &memo = dp[pos];
            if (pos == s.length()) {
                memo = BigInteger(1);
                continue;
            }
            ll cur = 0;
            BigInteger ans = BigInteger(0);
            for (int i = pos; i < min(int(s.length()), pos + 9); ++i) {
                cur = cur * 10 * 1LL + (s[i] - '0');
                if (s[pos] == '0') {
                    ans += dp[i + 1];
                    if (ans >= mod) {
                        ans -= mod;
                    }
                    break;
                }
                if (cur <= c) {
                    ans += dp[i + 1];
                    if (ans >= mod) {
                        ans -= mod;
                    }
                }
            }
            if (ans >= mod) {
                ans -= mod;
            }
            memo = ans;
        }

        cout << dp[0] << endl;
    }
};
