#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BMagic2 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b,c,k;
        cin >> a >> b >> c >> k;


        for(int i = 0; i <= 999; i++){
            int x = i;
            int d3 = x % 10; x = x / 10;
            int d2 = x % 10; x = x / 10;
            int d1 = x % 10;

            if (d3 + d2 + d1 > k){
                continue;
            }
            int a1 = a;
            int b1 = b;
            int c1 = c;

            while (d1 > 0){
                a1 *= 2;
                d1--;
            }
            while (d2 > 0){
                b1 *= 2;
                d2--;
            }
            while (d3 > 0){
                c1 *= 2;
                d3--;
            }
            if (c1 > b1 && b1 > a1){
                cout << "Yes" << endl;
                return;
            }
        }

        cout << "No" << endl;

	}
};
