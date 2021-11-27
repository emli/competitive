#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AFirstGrid {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string a,b;
        cin >> a >> b;

        if ((a[0] == '#' && b[0] == '#') || (a[1] == '#' && b[1] == '#')
        || (a == ".." && (b == "#." || b == ".#" || b == "##"))
        || (b == ".." && (a == "#." || a == ".#" || a == "##"))){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
	}
};
