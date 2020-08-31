#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BTelefonniiNomer {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int x;
        cin >> x;
        string s;
        cin >> s;

        int pos = s.find('8');

        if (pos == -1){
            cout << "NO" << endl;
        }else if (int(s.size()) - pos >= 11){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
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
