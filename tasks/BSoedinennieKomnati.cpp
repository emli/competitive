#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSoedinennieKomnati {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;
        string forward(n,'<');
        string backward(n,'>');


        if (s == forward || s == backward){
            cout << n << endl;
            return;
        }

        char init = '+';

        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (init == '+' && (s[i] == '<' || s[i] == '>')){
                init = s[i];
            }else if (init != '+' && s[i] != '-' && init != s[i]){
                ok = false;
            }
        }
        if (ok){
            cout << n << endl;
            return;
        }

        vector<int> used(n);

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '-'){
                ans += !used[i];
                ans += !used[(i + 1) % n];
                used[i] = used[(i + 1) % n] = true;
            }
        }

        cout << ans << endl;
	}
};
