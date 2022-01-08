#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BBogosort {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ranges :: sort(a);
        ranges :: reverse(a);

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
	}
};
