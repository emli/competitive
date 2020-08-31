#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
bool isOdd (int i) { return ((i%2)==1); }
bool isEven (int i) { return ((i%2)==0); }

class DNekoIVinograd {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;

        cin >> n >> m;
        vector<int> a(n),b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        int odd1 = count_if(all(a),isOdd);
        int even1 = count_if(all(a),isEven);

        int odd2 = count_if(all(b),isOdd);
        int even2 = count_if(all(b),isEven);


        cout << min(odd1,even2) + min(even1,odd2) << endl;

	}
};

//1 0 0 0 1
//0 0 1 0
