#include <bits/stdc++.h>
using namespace std;

typedef  long long ll;
class CMultiplication3 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);


        ll a,b;
        cin >> a;
        string x;
        cin >> x;

        x.erase(x.find('.'),1);

        b = stol(x);
        //cout << x << endl;
        cout << (a * b) / 100 << endl;
	}
};
