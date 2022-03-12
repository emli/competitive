#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AMinimizatsiyaStroki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        string s;
        cin >> n >> s;

        int pos = -1;
        for (int i = 0; i < n - 1 && pos == -1; ++i) {
            if (s[i] > s[i + 1]){
                pos = i;
            }
        }

        if (pos == -1){
            s.pop_back();
            cout << s << '\n' << endl;
        }else {
            s.erase(pos,1);
            cout << s << endl;
        }
	}
};
