#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BRemoveIt {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,x;

        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int l = 0;

        int c = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] != x){
                a[l++] = a[i];
            }else {
                c++;
            }
        }

        for (int i = 0; i < n - c; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
	}
};
