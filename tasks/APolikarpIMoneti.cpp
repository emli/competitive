#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class APolikarpIMoneti {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int tests;
        cin >> tests;

        while (tests--){
            int n;
            cin >> n;

            int x1;
            int x2;
            int r1,r2;

            int best = INT_MAX;
            for (int i = 0; i < 10; ++i) {
                x1 = (n / 3) + i;
                x2 = n - 2 * x1;
                if (x2 >= 0 && 2 * x1 + x2 == n && abs(x1 - x2) < best){
                    best = abs(x1 - x2);
                    r1 = x1;
                    r2 = x2;
                }
            }
            cout << r2 << " " << r1 << endl;



        }
	}
};
