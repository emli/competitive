#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class EUravnenie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        double c;

        cin >> c;

        double left = 0;
        double right = 1e11;

        for(int i = 0; i < 100; i++){
            double m = (left + right) / 2;

            if (m <= (0.000000001 + c -  sqrt(m)) / m){
                left = m;
            }else {
                right = m;
            }
        }

        cout << fixed <<setprecision(6)<< left << endl;
	}
};
