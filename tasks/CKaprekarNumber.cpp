#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
#define all_r(x) x.rbegin(),x.rend()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CKaprekarNumber {
public:
    static int g1(int n){
        string s = to_string(n);
        sort(all_r(s));
        return stoi(s);
    }
    static int g2(int n){
        string s = to_string(n);
        sort(all(s));
        return stoi(s);
    }
    static int f(int n){
        return g1(n) - g2(n);
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int x,k;
        cin >> x >> k;

        for (int i = 0; i < min(1000000,k); ++i) {
            x = f(x);
        }
        cout << x << endl;
	}
};
