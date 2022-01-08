#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BLongestSegment {
public:
    static double sqr(int n){
        return n * n;
    }
    static double dis(int x1, int y1, int x2, int y2){
        return (sqr(x1 - x2) + sqr(y1 - y2));
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }

        double best = 0;

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                best = max(best,dis(a[i].first,a[i].second,a[j].first,a[j].second));
            }
        }

        cout <<fixed << setprecision(10)<< sqrt(best) << endl;


	}
};
