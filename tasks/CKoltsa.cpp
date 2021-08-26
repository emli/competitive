#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CKoltsa {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int tests;
        cin >> tests;

        while (tests--){
            int n; cin >> n;
            string s; cin >> s;


            procees(cout, n, s);

        }
	}

    static void procees(ostream &cout, int n, const string &s) {
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == '0'){
                cout << i + 1 << " " << n << " " << i + 2 <<" "<< n << endl;
                return;
            }
        }

        for (int i = n / 2; i < n; ++i) {
            if (s[i] == '0'){
                cout << 1 << " " << i + 1 << " " << 1 << " "<< i << endl;
                return;
            }
        }

        cout << 1 << " " << n / 2 << " "<< 2 << " " << n / 2 + 1 << endl;
    }
};
