#include <bits/stdc++.h>
using namespace std;

class BSummaSlagaemikhOdinakovoiChetnosti {
public:
    bool isEven(int n){
        return n % 2 == 0;
    }
    bool isOdd(int n){
        return !isEven(n);
    }

    void run(std::istream& cin, std::ostream& cout){
        int n,k;
        cin >> n >> k;

        if (isOdd(n - (k - 1)) && n -  (k - 1)  > 0){
            cout << "YES"  << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
            return;
        }else if (isEven(n - 2 * (k - 1)) && n - 2 * (k - 1)  > 0){
            cout << "YES"  << endl;
            for (int i = 0; i < k - 1; ++i) {
                cout << 2 << " ";
            }
            cout << n - 2 * (k - 1) << endl;
        }else {
            cout << "NO" << endl;
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
