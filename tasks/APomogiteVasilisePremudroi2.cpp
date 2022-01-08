#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class APomogiteVasilisePremudroi2 {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int r1,r2,c1,c2,d1,d2;
        cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

        for (int i = 1; i <= 9; ++i) {
            for (int j = 1; j <= 9; ++j) {
                for (int k = 1; k <= 9; ++k) {
                    for (int l = 1; l <= 9; ++l) {
                        set<int> d = {i,j,k,l};
                        if (i + j == r1 &&
                            k + l == r2 &&
                            i + l == d1 &&
                            j + k == d2 &&
                            i + k == c1 &&
                            j + l == c2 &&
                            d.size() == 4)
                        {

                            cout << i << " " << j << endl;
                            cout << k << " "<< l << endl;
                            return;
                        }
                    }
                }
            }
        }

        cout << -1 << endl;
	}
};
