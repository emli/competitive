#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class APreobrazovanieChisla {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x,y;
        cin >> x >> y;
        if (x == y){
            cout << "3 1" << endl;
            return;
        }

        for (int i = 2; i  <= y; ++i) {
            int y1 = y;

            int c = 0;

            while (y1 % i == 0 && y1 != x) {
                y1 /= i;
                c++;
            }

            if (y1 == x && c > 0) {
                cout << c << " " << i << endl;
                return;
            }


        }
        cout << "0 0"<< endl;
	}
};
