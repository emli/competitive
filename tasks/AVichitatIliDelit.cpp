#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AVichitatIliDelit {
public:
    int go(int n){
        if (n == 1){
            return 0;
        }

        int ans = INT_MAX;
        for(int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                int x = i;
                int y = n / i;
                if (x != y){
                    ans = min(ans,go(n / x) + 1);
                    ans = min(ans,go(n / y) + 1);
                }else {
                    ans = min(ans,go(n / x) + 1);
                }
            }
        }
        ans = min(ans,go(n - 1) + 1);
        return ans;
    }
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        if (n == 1){
            cout << 0 << endl;
        }else
        if (n == 2){
            cout << 1 << endl;
        }else
        if (n == 3){
            cout << 2 << endl;
        }else {
            if (n % 2 == 0){
                cout << 2 << endl;
            }else {
                cout << 3 << endl;
            }
        }

    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;

        while (t--){
            run(cin,cout);
        }
	}
};
