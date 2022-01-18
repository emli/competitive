#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AKonneRIARCMarklandN {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,s,k;

        cin >> n >> s >> k;

        set<int> setik;

        for (int i = 0; i < k; ++i) {
            int x;
            cin >> x;
            setik.insert(x);
        }

        int d = INT_MAX / 2;
        for (int i = max(1,s - 2000); i <= min(n,s + 2000); ++i) {
            if (!setik.contains(i) && abs(i - s) < d){
                d = abs(i - s);
            }
        }
        cout << d << endl;
	}
};
