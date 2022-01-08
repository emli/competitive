#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class APodarokKitakharaKharuki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int c100 = count(all(a),100);
        int c200 = count(all(a),200);

        if (c200 > 0 && c100 == 0 && c200 % 2 == 0){
            cout << "YES" << endl;
        }else if (c200 * 2 == c100){
            cout << "YES" << endl;
        }else if (c100 % 2 == 0 && c100 > 0){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
