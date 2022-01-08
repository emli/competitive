#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AKhudozhestvennoeZanyatie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        vector<int> a(n),b(n);

        unordered_set<int> set;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            set.insert(a[i]);
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            set.insert(b[i]);
        }

        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (set.contains(i ^ j)){
                    ans++;
                }
            }
        }
        if (ans % 2 == 0){
            cout << "Karen" << endl;
        }else {
            cout << "Koyomi" << endl;
        }
	}
};
