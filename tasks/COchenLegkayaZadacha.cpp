#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class COchenLegkayaZadacha {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,x,y;

        cin >> n >> x >> y;

        int ans = min(x,y);
        n--;

        int left = -1;
        int right = 1e9;

        while(left + 1 < right){
            int m = (left + right) / 2;

            if (m /x + m / y < n){
                left = m;
            }else {
                right = m;
            }
        }

        cout << ans + right << endl;
	}
};
