#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CVosstanovlenieBinarnoiStroki {
public:
    void run(std::istream& cin, std::ostream& cout){
        string s;
        int x;

        cin >> s >> x;

        string w(s.size(),'0');
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '1') {
                if (i - x >= 0 ) {
                    w[i - x] = '1';
                }
                if (i + x < s.size()) {
                    w[i + x] = '1';
                }
            }else {
                if (i - x >= 0) {
                    w[i - x] = '0';
                }
                if (i + x < s.size() ) {
                    w[i + x] = '0';
                }
            }
        }

        //cout <<"w = "<< w << endl;
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '1'){
                if (i - x >= 0 && w[i - x] != '1'){
                    cout << -1 << endl;
                    return;
                }
                if (i + x < s.size() && w[i + x] != '1'){
                    cout << -1 << endl;
                    return;
                }
            }else {
                if (i - x >= 0 && w[i - x] == '1'){
                    cout << -1 << endl;
                    return;
                }
                if (i + x < s.size() && w[i + x] == '1'){
                    cout << -1 << endl;
                    return;
                }
            }
        }

        cout << w << endl;

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
