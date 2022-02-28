#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BPasta {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        unordered_map<int,int> count;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            count[x]++;
        }

        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            if (count[x] > 0){
                count[x]--;
            }else {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
	}
};
