#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class FNenavidteA {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin >> s;

        string s1;
        for (char i : s) {
            if (i != 'a'){
                s1.push_back(i);
            }
        }

        int len = int(s1.size()) / 2;

        string part1 = s1.substr(0,len);
        string part2 = s1.substr(len);

        if (part1 == part2){
            string original = s.substr(0,s.size() - len);
            string fromOriginal;
            for (char i : original) {
                if (i != 'a'){
                    fromOriginal.push_back(i);
                }
            }
            original.append(fromOriginal);
            if (original == s){
                cout << s.substr(0,s.size() - len) << endl;
            }else {
                cout << ":(" << endl;
            }
        }else {
            cout << ":(" << endl;
        }
	}
};
