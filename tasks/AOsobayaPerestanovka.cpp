#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AOsobayaPerestanovka {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; ++i) {
            a.push_back(i + 1);
        }
        for (int i = 0; i < n - 1; ++i) {
            swap(a[i],a[i + 1]);
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
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



