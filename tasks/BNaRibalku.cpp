#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BNaRibalku {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int t,x1,y1,x2,y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); ++i) {
            int dis = abs(x1 - x2) + abs(y1 - y2);
            int x3 = x1;
            int y3 = y1;

            if (s[i] == 'E'){
                x3++;
            } else if(s[i] == 'S'){
                y3--;
            } else if(s[i] == 'W'){
                x3--;
            } else {
                y3++;
            }

            int dis_imp = abs(x3 - x2) + abs(y3 - y2);

            if (dis_imp < dis){
                x1 = x3;
                y1 = y3;
            }

            if (x1 == x2 && y1 == y2){
                cout << i + 1 << '\n';
                return;
            }
        }

        cout << -1 << '\n';
	}
};
