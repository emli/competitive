#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BAlcoholic {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        int total;
        cin >> n >> total;

        total *= 100;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int x,y;
            cin >> x >> y;
            sum += x * y;
            if (sum > total){
                cout << i + 1 << endl;
                return;
            }
        }
        cout << -1 << endl;
	}
};
