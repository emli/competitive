#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class UtkarshAndPlacementTests {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        char a,b,c;
        cin >> a >> b >> c;
        char x,y;
        cin >> x >> y;

        vector<char> q1 = {a,b,c};
        vector<char> q2 = {x,y};

        for (char i : q1) {
            for (char j : q2) {
                if (i == j){
                    cout << i << endl;
                    return;
                }
            }
        }
	}
};
