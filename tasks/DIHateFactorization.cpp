#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pow5(x) x*x*x*x*x
class DIHateFactorization {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);



        ll x;
        
        cin >> x;

        for(ll a = -1000; a <= 1000; a++)
            for(ll b = -1000; b <= 1000; b++)
                    if (pow5(a) - pow5(b) == x){
                        cout << a << " " << b << endl;
                        return;
                    }

	}
};


