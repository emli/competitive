#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int x,int y){
    return (x + y) % 2 == 1 && x < y;
}
class BIhabIStranniiChelovek {
public:

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n);
        bool ok = false;
        bool ok1 = false;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0){
                ok = true;
            }else {
                ok1 = true;
            }
        }

        if (ok && ok1) {
            sort(a.begin(),a.end());

        }

        for (int j = 0; j < n; ++j) {
            cout << a[j] << " ";
        }
	}
};
