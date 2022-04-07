#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class MakeThemEqual {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0){
                even++;
            }else {
                odd++;
            }
        }

        if (odd == n || even == n){
            cout << 0 << endl;
            return;
        }

        vector<int> options;

        options.push_back(even);

        if (odd % 2 == 0){
            options.push_back(odd / 2);
        }

        cout << *min_element(all(options)) << endl;
	}
};
