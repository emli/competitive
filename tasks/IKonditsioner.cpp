#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
struct Range{
    int l,r;

    Range(int l, int r) : l(l), r(r) {}

    bool merge(Range range) {
        int begin = max(l,range.l);
        int end = min(r,range.r);

        if (begin > end){
            return false;
        }
        l = begin;
        r = end;
        return true;
    }

};
class IKonditsioner {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;

        vector<int> t(n),l(n),r(n);

        for (int i = 0; i < n; ++i) {
            cin >> t[i] >> l[i] >> r[i];
        }
        int curTime = 0;
        Range range(m, m);

        for (int i = 0; i < n; ++i) {
            int diff = t[i] - curTime;
            curTime = t[i];
            range = *new Range(range.l - diff, range.r + diff);
            if (!range.merge(*new Range(l[i], r[i]))){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
