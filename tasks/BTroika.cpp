#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BTroika {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        unordered_map<int,int> map;
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            map[x]++;
            if (map[x] >= 3){
                ans = x;
            }
        }
        cout << ans << endl;
	}
};
