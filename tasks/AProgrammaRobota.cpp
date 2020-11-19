#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AProgrammaRobota {
public:

    void run(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> m >> n;


        cout << min(n, m) * 2 + max((max(n, m) - min(n, m)) * 2 - 1, 0)<< endl;


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
