#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ANeNP {
public:
    static void solve(std::istream& cin, std::ostream& cout) {

        int l,r;
        cin >> l >> r;
        if (l == r){
            cout << l << endl;
            return;
        }

        int x = 0;
        int y = 0;
        for (int i = l; i <= min(r,l + 10) ; ++i) {
            if (i % 2 == 0){
                x++;
            }
            if (i % 3 == 0){
                y++;
            }
        }
        if (x >= y){
            cout << 2 << endl;
        }else {
            cout << 3 << endl;
        }
	}
};


