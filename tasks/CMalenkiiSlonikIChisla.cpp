#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CMalenkiiSlonikIChisla {
public:
    bool check(int x, int a) {
        vector<int> d(10);

        while (x != 0){
            d[x % 10] = 1;
            x = x / 10;
        }
        while (a != 0){
            if (d[a % 10] == 1){
                return true;
            }
            a = a / 10;
        }
        return false;
    }

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int x;
        cin >> x;

        int ans = 0;
        for (int i = 1; i * i <= x; ++i) {
            if (x % i == 0){
                int a = i;
                int b = x / a;

                if (check(x,a)){
                    ans++;
                }
                if (a != b && check(x,b)){
                    ans++;
                }
            }
        }
        cout << ans << endl;
	}
};
10  8  4

10 9 7 8 6 5 3 4 2 1
