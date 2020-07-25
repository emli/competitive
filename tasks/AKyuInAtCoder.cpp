#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class AKyuInAtCoder {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int x;

        cin >> x;
        if (x >= 1800){
            cout << 1 << endl;
        }else if (x >= 1600){
            cout << 2 << endl;
        }else if(x >= 1400){
            cout << 3 << endl;
        }else if (x >= 1200){
            cout << 4 << endl;
        }else if (x >= 1000){
            cout << 5 << endl;
        }else if (x >= 800){
            cout << 6 << endl;
        }else if (x >= 600){
            cout << 7 << endl;
        }else if (x >= 400){
            cout << 8 << endl;
        }
	}
};
