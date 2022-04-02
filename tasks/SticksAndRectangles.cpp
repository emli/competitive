#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class SticksAndRectangles {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        const int N = 100;
        cin >> n;

        vector<int> a(n);
        vector<int> l(N + 1);

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            l[a[i]]++;
        }

        for (int i = 1; i <= N; ++i) {
            l[i] %= 4;
        }

        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (i != j && l[i] >= 2 && l[j] >= 2) {
                    l[i] %= 2;
                    l[j] %= 2;
                }
            }
        }

        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (i != j && l[i] >= 2 && l[j] >= 2) {
                    l[i] %= 2;
                    l[j] %= 2;
                }
            }
        }

        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (i != j && l[i] >= 2 && l[j] == 1) {
                    l[i] %= 2;
                    l[j] = 0;
                    ans++;
                }
            }
        }

        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (i != j && l[i] == 1 && l[j] == 1) {
                    l[i] = 0;
                    l[j] = 0;
                    ans += 2;
                }
            }
        }

        for (int i = 1; i <= N; ++i) {
            if (l[i] == 3){
                ans++;
                l[i] = 0;
            }
        }

        for (int i = 1; i <= N; ++i) {
            if (l[i] == 2){
                ans += 2;
                l[i] = 0;
            }
        }

        for (int i = 1; i <= N; ++i) {
            if (l[i] == 1){
                ans += 3;
                l[i] = 0;
            }
        }

        cout << ans << endl;
    }
};
