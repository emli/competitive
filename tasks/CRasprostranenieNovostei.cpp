#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int N = 5 * int(1e5) + 7;
int parent[N];
int rank_own[N];
int sz[N];

class CRasprostranenieNovostei {
public:
    void make_set (int v) {
        parent[v] = v;
        rank_own[v] = 0;
        sz[v] = 1;
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
            if (rank_own[a] == rank_own[b]) {
                ++rank_own[a];
            }
            int sum = sz[a] + sz[b];
            sz[a] = sum;
            sz[b] = sum;
        }
    }

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;
        cin >> n >> m;

        for (int i = 1; i <= n; ++i) {
            make_set(i);
        }

        for (int i = 0; i < m; ++i) {
            int len;
            cin >> len;

            vector<int> a(len);

            for (int j = 0; j < len; ++j) {
                cin >> a[j];
            }

            for (int j = 0; j < len - 1; ++j) {
                union_sets(a[j],a[j + 1]);
            }
        }

        for (int i = 1; i <= n; ++i) {
            cout << sz[find_set(i)] << " ";
        }

        cout << endl;
	}
};
