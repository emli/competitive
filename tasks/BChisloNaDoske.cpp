#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BChisloNaDoske {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int k;
        string s;
        cin >> k >> s;

        int sum = 0;
        for (char i : s) {
            sum += i - '0';
        }
        int d = 0;
        for (int i = 0; i < 10; ++i) {
            for (char j : s) {
                if (sum >= k){
                    cout << d << endl;
                    return;
                }
                if (j == char(i + '0')){
                    sum += (9 - (j - '0'));
                    d++;
                }
            }
        }
	}
};
