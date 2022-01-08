#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSlomannayaGirlyanda {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        map<int,char> mapping;

        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])){
                mapping[i % 4] = s[i];
            }
        }

        string p(s.size(),'.');
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '!'){
                p[i] = mapping[i % 4];
            }
        }

        cout << count(all(p),'R') << " " << count(all(p),'B') <<" "<< count(all(p),'Y') << " "<<count(all(p),'G') << endl;
    }
};
