#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class ETheDoors {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> a(n);
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i]){
                ones++;
            }else {
                zeros++;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (a[i]){
                ones--;
            }else {
                zeros--;
            }
            if (ones == 0 || zeros == 0){
                cout << i + 1 << endl;
                break;
            }
        }
	}
};
