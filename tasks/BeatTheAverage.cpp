#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BeatTheAverage {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m,x;
        cin >> n >> m >> x;
        if (m == x){
            cout << 0 << endl;

        }else {
            int sum = n * x;

            int ans = sum / (x + 1);

            cout << ans << endl;
        }
	}
};
