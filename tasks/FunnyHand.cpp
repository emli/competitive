#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class FunnyHand {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,a,b;
        cin >> n >> a >> b;

        int s = 0;
        for (int i = 1; i <= n; ++i) {

            vector<int> x = {a,b,i};
            sort(all(x));

            if (x[1] - x[0] == x[2] - x[1] && x[2] - x[1] == 1){
                s++;
            }
        }

        cout << s << endl;
	}
};
