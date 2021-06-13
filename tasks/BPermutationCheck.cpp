#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BPermutationCheck {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;

        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        for (int i = 0; i < n; ++i) {
            int x = i + 1;
            if (x != a[i]){
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
	}
};
