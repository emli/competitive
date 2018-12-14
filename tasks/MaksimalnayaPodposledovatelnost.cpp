#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0 ; (i) < (n) ; ++i)
#define forx(i, n) for(int i = 1 ; (i) <= (n) ; ++i)
#define ll long long
#define all(x) (x).begin(),(x).end()
#define sqr(x) (x) * (x)
#define debug(x) cout << #x <<" = " << x << endl
#define printvpair(v) for(auto x : v) cout << x.first  <<" " << x.second << endl;
#define printv(v) if (v.size()> 0) {for(auto x : v) cout << x << " "; cout << endl;}
#define MINUS(a) memset(a,0xff,sizeof(a))

const int INF = INT_MAX / 2;
const int N = (int) 1e5 + 7;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};


class MaksimalnayaPodposledovatelnost {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> minLen(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int ans = 1;
        minLen[1] = 1;
        for (int i = 2; i <= n; ++i) {
            minLen[i] = 1;
            for (int j = 1; j < i; ++j) {
                if (a[i] > a[j] && minLen[j] + 1 > minLen[i]) {
                    minLen[i] = minLen[j] + 1;
                }
            }
            ans = max(ans, minLen[i]);
        }
        cout << ans << endl;
    }
};
