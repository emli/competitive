#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DMalenkiiSlonikIProblema {
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

        if (is_sorted(all(a))){
            cout << "YES" << endl;
        }else {
            vector<int> b = a;
            sort(all(a));

            int x = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] != b[i]){
                    x++;
                }
            }

            if (x == 2){
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }
	}
};
