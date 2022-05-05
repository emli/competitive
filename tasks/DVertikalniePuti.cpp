#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DVertikalniePuti {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> parent(n + 1,-1);
        vector<bool> isParent(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            if (i != a[i])
                parent[i] = a[i];
            isParent[a[i]] = true;
        }

        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += isParent[i];
        }
        int x = n - sum;

        if (n == 1){
            cout << 1 << endl<<1 << endl << a[1] << endl;
            return;
        }
        cout << x << endl;

        vector<bool> used(n + 1);

        for (int i = 1; i <= n; ++i) {
            vector<int> ans;
            int y = i;
            if (!isParent[y]){
                while (y != -1 && !used[y]) {
                    ans.push_back(y);
                    used[y] = true;
                    y = parent[y];
                }
            }
            if (ans.empty()){
                continue;
            }
            cout << ans.size() << endl;

            reverse(all(ans));

            for (int an : ans) {
                cout << an << " ";
            }
            cout <<endl<<endl;
        }
	}
};

