#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class HRekursivnieZaprosi {
public:
    static int f(int n){
        int p = 1;
        while (n != 0){
            if (n % 10 != 0)
                p *= n % 10;
            n /= 10;
        }
        return p < 10 ? p : f(p);
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int limit = (int)1e6;
        vector<vector<int>> prefix(limit + 7,vector<int>(10));
        for (int i = 1; i <= limit; ++i) {
             prefix[i][f(i)] = 1;
        }

        for (int i = 1; i <= limit; ++i) {
            prefix[i][f(i)] = 1;
        }

        for (int i = 1; i <= 9; ++i) {
            for (int j = 1; j <= limit; ++j) {
                prefix[j][i] += prefix[j - 1][i];
            }
        }


        int q;
        cin >> q;

        while (q--){
            int l,r,k;
            cin >> l >> r >> k;
            cout << prefix[r][k] - prefix[l - 1][k] << endl;
        }
	}
};
