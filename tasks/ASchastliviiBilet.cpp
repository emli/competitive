#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class ASchastliviiBilet {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int len;

        cin >> len;

        string s;

        cin >> s;

        int a = 0;
        int b = 0;
        for (int i = 0; i < len; ++i) {
            if (s[i] != '4' && s[i] != '7'){
                cout << "NO" << endl;
                return;
            }
            if (i < len / 2){
                a += s[i] - '0';
            }else {
                b += s[i] - '0';
            }
        }
        if (a == b){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
