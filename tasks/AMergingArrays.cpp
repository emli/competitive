#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AMergingArrays {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,m;

        cin >> n >> m;

        vector<int> a(n),b(m),c(n + m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        int first = 0;
        int second = 0;
        int pos = 0;
        while (first < a.size() || second < b.size()){
            if (second == b.size() || (first < a.size() && a[first] < b[second])){
                c[pos++] = a[first++];
            }else {
                c[pos++] = b[second++];
            }
        }

        for (int num : c) {
            cout << num << " ";
        }
	}
};
