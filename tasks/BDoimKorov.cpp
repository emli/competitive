#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BDoimKorov {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int one = count(a.begin(),a.end(),1);
        int zero = count(a.begin(),a.end(),0);

        int x = 0;
        for (int i = 0; i < n; ++i) {
            x += one;
            if (a[i]){
                one--;
            }
        }

        int y = 0;
        for (int i = n - 1; i >= 0; --i) {
            y += zero;
            if (a[i] == 0){
                zero--;
            }
        }

        cout << min(x,y) << endl;
	}
};
