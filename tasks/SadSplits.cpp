#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class SadSplits {
public:
    static bool go(string n,int x,int y,int len1,int len2){
        if (n.empty()){
            return (x + y) % 2 == 0 && len1 > 0 && len2 > 0;
        }
        int last = n.front() - '0';
        n.erase(0,1);
        return go(n,x * 10 + last,y,len1 + 1,len2) || go(n,x,y * 10 + last,len1,len2 + 1);
    }
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        if (go(s,0,0,0,0)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
