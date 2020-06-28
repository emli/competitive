#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BUmnozhaiNa2DeliNa6 {
public:
    void run(std::istream& cin, std::ostream& cout){
        int n;
        cin >> n;

        int num2 = 0;

        while (n % 2 == 0){
            num2++;
            n = n / 2;
        }
        int num3 = 0;

        while (n % 3 == 0){
            num3++;
            n = n / 3;
        }

        while (n % 6 == 0){
            n = n / 6;
        }

        if (num2 > num3){
            cout  << -1 << endl;
        }else if (n == 1){
            cout << (num3 - num2) + num3  << endl;
        }else {
            cout << -1 << endl;
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
