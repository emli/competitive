#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BRomaIZamenaZnakov {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ranges::sort(a);

        int m = -1;
        for (int i = 0; i < n && k > 0; ++i) {
            if (a[i] < 0){
                a[i] *= -1;
                k--;
                if (k == 0){
                    break;
                }
            }
            if (m == -1 || abs(a[i])<abs(a[m]))
                m = i;
        }


        if (k % 2 == 1){
            a[m] *= -1;
        }

        cout << accumulate(all(a),0LL) << endl;

	}
};
