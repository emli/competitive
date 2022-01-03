#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BBeidzhik {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> p(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
        }

        for (int i = 1; i <= n; ++i) {
            vector<int> visited(n + 1);

            int cur = i;
            while (!visited[cur]){
                visited[cur] = true;
                cur = p[cur];
            }

            cout << cur << " ";
        }
	}
};
