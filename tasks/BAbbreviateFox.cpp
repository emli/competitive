#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BAbbreviateFox {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        string s;
        cin >> n >> s;

        string t;

        for(int i = 0; i < n; i++){
            if (i <= 1){
                t.push_back(s[i]);
            }else {
                if (s[i] == 'x' && t.size() >= 2){
                    string end;
                    int tlen = t.size();
                    end.push_back(t[tlen - 2]);
                    end.push_back(t[tlen - 1]);

                    if (end == "fo"){
                        t.pop_back();
                        t.pop_back();
                    }else {
                        t.push_back(s[i]);
                    }
                }else {
                    t.push_back(s[i]);
                }
            }
        }
        cout << t.size() << endl;
	}
};
