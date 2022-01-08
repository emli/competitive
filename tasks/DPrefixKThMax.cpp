#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<
        int,
        null_type,
        greater<>,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DPrefixKThMax {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ordered_set X;

        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < k; ++i) {
            X.insert(a[i]);
        }

        cout << *X.find_by_order(k - 1) << endl;

        for (int i = k; i < n; ++i) {
            X.insert(a[i]);
            cout << *X.find_by_order(k - 1) << endl;
        }

    }
};
