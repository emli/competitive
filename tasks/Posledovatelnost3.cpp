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


class Posledovatelnost3 {
public:
    vector<ll> a, b, c, temp;

    void go(ll x, int y) {
        temp.push_back(x);
        if (x * y <= 288325195312500000 && a.size() <= 10000) go(x * y, y);
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        for (int x: {2, 3, 5}) {
            temp.clear();
            go(1, x);
            if (x == 2) {
                a = temp;
            } else if (x == 3) {
                b = temp;
            } else {
                c = temp;
            }
        }

        int x, y, z;
        x = y = z = 0;
        set<ll> res;
        cout << "fuck " << endl;
        while (res.size() < 10000) {
            if (x < a.size() && a[x] <= b[y] && a[x] <= c[z]) {
                res.insert(a[x]);
                x++;
            } else if (y < b.size() && b[y] <= a[x] && b[y] <= c[z]) {
                res.insert(b[y]);
                y++;
            } else {
                res.insert(c[z]);
                z++;
            }
        }

        int n;
        cin >> n;
        auto it = res.begin();
        std::advance(it, n - 2);
        ll x1 = *it;
        cout << x1 << endl;
    }
};
