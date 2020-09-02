#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int N = (int)1e5 + 9;
int parent[N];
int rank_own[N];
int sum[N];
int x[N];
int y[N];
class JUnichtozhenieMassiva {
public:
    void make_set (int v,int value) {
        parent[v] = v;
        rank_own[v] = 0;
        sum[v] = value;
    }

    int find_set (int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set (parent[v]);
    }

    void union_sets (int a, int b) {
        a = find_set (a);
        b = find_set (b);
        if (a != b) {
            if (rank_own[a] < rank_own[b])
                swap (a, b);
            parent[b] = a;
            sum[b] += sum[a];
            sum[a] = sum[b];
            if (rank_own[a] == rank_own[b])
                ++rank_own[a];
        }
    }

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        vector<int> ans(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> x[i];
            make_set(i,x[i]);
        }

        for (int i = 1; i <= n; ++i) {
            cin >> y[i];
        }

        ans[n] = 0;

        for (int i = n - 1; i >= 1; --i) {
            union_sets(y[i + 1],y[i]);
            ans[i] = sum[y[i]];
        }

        for (int i = 1; i <= n; ++i) {
            cout << ans[i] << endl;
        }
	}
};
