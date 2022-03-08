#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AIgraVAvtobuse {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x,y;
        cin >> x >> y;

        while (true){
            bool ok = false;
            for (int i = 2; i >= 0; --i) {
                for (int j = 0; j <= 22; ++j) {
                    if (i <= x && j <= y && i * 100 + j * 10 == 220 && !ok){
                        ok = true;
                        x -= i;
                        y -= j;
                    }
                }
            }
            if (!ok){
                cout << "Hanako" << endl;
                return;
            }
            ok = false;
            for (int j = 22; j >= 0; --j) {
                for (int i = 0; i <= 2; ++i) {
                    if (i <= x && j <= y && i * 100 + j * 10 == 220 && !ok){
                        ok = true;
                        x -= i;
                        y -= j;
                    }
                }
            }

            if (!ok){
                cout << "Ciel" << endl;
                return;
            }
        }
	}
};
