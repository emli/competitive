#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class TwoRooks {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int x1,y1,x2,y2;

        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2 || y1 == y2){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
