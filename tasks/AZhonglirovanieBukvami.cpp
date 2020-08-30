#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class AZhonglirovanieBukvami {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;


        vector<int> a(26);
        for (int i = 0; i < n; ++i) {
            string x;
            cin >> x;
            for (char j : x) {
                a[j - 'a']++;
            }
        }

        for (int i = 0; i < 26; ++i) {
            if (a[i] % n != 0){
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
