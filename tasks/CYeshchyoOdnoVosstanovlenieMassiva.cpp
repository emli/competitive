#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CYeshchyoOdnoVosstanovlenieMassiva {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,x,y;

        cin >> n >> x >> y;

        int an = y - x;

        int minD = INT_MAX;
        for (int i = n - 1; i >= 1; --i) {
            if (an % i == 0){
                minD = min(an / i,minD);
            }
        }

        vector<int> ans = {y};
        int tmpY = y;

        for (; tmpY - minD > 0 && ans.size() < n; tmpY -= minD) {
            ans.push_back(tmpY - minD);
        }

        tmpY = y;
        while (ans.size() < n){
            ans.push_back(tmpY + minD);
            tmpY += minD;
        }

        sort(all(ans));

        for (int x1 : ans) {
            cout << x1 <<" ";
        }
        cout << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
