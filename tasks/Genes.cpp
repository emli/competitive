#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class Genes {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        char a,b;
        cin >> a >> b;

        map<char,int> mp;

        mp['R'] = 1;
        mp['B'] = 2;
        mp['G'] = 3;

        if (mp[a] > mp[b]){
            cout << b << endl;
        }else if (mp[b] > mp[a]){
            cout << a << endl;
        }else {
            cout << a << endl;
        }

	}
};
