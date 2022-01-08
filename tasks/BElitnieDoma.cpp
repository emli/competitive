#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BElitnieDoma {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> rightMax(n);

        rightMax[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            rightMax[i] = max(rightMax[i + 1],a[i + 1]);
        }

        for (int i = 0; i < n; ++i) {
            if (a[i] <= rightMax[i]){
                cout << rightMax[i] - a[i] + 1 << " ";
            }else {
                cout << 0 << " ";
            }
        }
	}
};
