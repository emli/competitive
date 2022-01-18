#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSdelaiAP {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int a,b,c;
        cin >> a >> b >> c;

        if (c - b == b - a){
            cout << "YES" << endl;
            return;
        }

        int d = c - b;

        int ax = b - d;

        if (ax > 0 && ax  % a == 0 && ax / a > 0){
            cout << "YES" << endl;
            return;
        }

        int bx = (a + c) / 2;

        if (bx > 0 && bx % b == 0 && (a + c) % 2 == 0 && bx / b > 0){
            cout << "YES" << endl;
            return;
        }

        d = b - a;
        int cx = b + d;

        if (cx > 0 && cx % c == 0 && cx / c > 0){
            cout << "YES" << endl;
            return;
        }

        cout << "NO" << endl;
	}
};
