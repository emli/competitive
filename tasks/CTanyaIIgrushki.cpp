#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CTanyaIIgrushki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,sum;
        cin >> n >> sum;

        unordered_set<int> set;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            set.insert(x);
        }

        int i = 1;
        vector<int> ans;
        while (sum >= i){
            if (!set.contains(i)){
                ans.push_back(i);
                sum -= i;
            }
            i++;
        }

        cout << ans.size() << endl;

        for (int j = 0; j < ans.size(); ++j) {
            cout << ans[j] << " ";
        }
	}
};
