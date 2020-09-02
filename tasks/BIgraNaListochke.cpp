#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BIgraNaListochke {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;

        cin >> n >> m;

        map<pair<int,int>,bool > a;


        vector<pair<int,int>> square;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                square.emplace_back(i,j);
            }
        }
        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;

            for (int j = 0; j < 9; ++j) {
                int x1 = x - square[j].first;
                int y1 = y - square[j].second;

                int points = 0;
                for (int k = 0; k < 9; ++k) {
                    if (k == j){
                        continue;
                    }
                    int x2 = x1 + square[k].first;
                    int y2 = y1 + square[k].second;

                    if (a.count({x2,y2})){
                        points++;
                    }
                }
                if (points == 8){
                    cout << i + 1 << endl;
                    return;
                }
            }
            a[{x,y}] = true;
        }

        cout << -1 << endl;
	}
};


