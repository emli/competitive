#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ABeskonechnayaPosledovatelnost {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == b){
            cout << "YES" << endl;
            return;
        }

        if (c == 0){
            if (a == b){
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
            return;
        }
        if ((b - a) % c == 0 && ((a < b && c >= 0) || (a > b && c < 0))){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }

	}
};
