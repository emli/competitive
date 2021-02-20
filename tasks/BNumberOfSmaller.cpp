#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BNumberOfSmaller {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,m;

        cin >> n >> m;

        vector<int> a(n),b(m),c(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        int p = 0;
        for (int i = 0; i < m; ++i) {
            while (p < a.size() && a[p] < b[i]){
                p++;
            }
            c[i] = p;
        }

        for (int num : c) {
            cout << num << " ";
        }
    }
};
