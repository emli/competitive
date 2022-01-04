#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BYeshcheOdnaZadachaProPalindromi {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> count;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
        }

        for (int i = 0; i < n; ++i) {
            if (count[a[i]] == 3){
                cout << "YES" << endl;
                return;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            for (int j = n - 1; j > i; --j) {
                if (a[i] == a[j] && j - i >= 2){
                    cout << "YES" << endl;
                    return;
                }
            }
        }

        cout << "NO" << endl;
	}
};
