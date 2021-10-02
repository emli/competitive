#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AStrokoviiPasyansKazimira {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        string s;
        cin >> s;

        int a = count(all(s), 'A');
        int b = count(all(s), 'B');
        int c = count(all(s), 'C');

        if (b == a + c){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
};
